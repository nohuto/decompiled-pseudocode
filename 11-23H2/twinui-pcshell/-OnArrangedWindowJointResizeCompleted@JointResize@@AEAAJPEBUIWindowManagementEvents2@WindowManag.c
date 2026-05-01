/*
 * XREFs of ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920
 * Callers:
 *     ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805E35E0 (-OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180145330 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802E5FD2 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E6B64 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E6D38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?Commit@JointResize@@AEAAJXZ @ 0x1805E2560 (-Commit@JointResize@@AEAAJXZ.c)
 *     ?TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x1805E4E90 (-TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::OnArrangedWindowJointResizeCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  char v6; // di
  int v7; // eax
  __int64 v9[40]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  JointResizeTelemetry::JointResize::TransferToCurrentThread(a1 + 472, v9);
  if ( *(_BYTE *)(a1 + 256) )
  {
    *(_BYTE *)(a1 + 256) = 0;
    v6 = *(_BYTE *)(a3 + 8);
    if ( v6 )
    {
      v7 = JointResize::Commit((JointResize *)a1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x421,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v7);
    }
    LOBYTE(v5) = v6 == 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 232) + 48LL))(*(_QWORD *)(a1 + 232), v5);
    JointResize::DestroyGhostDivider((JointResize *)a1);
    JointResize::Cleanup((JointResize *)a1);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v9,
      0);
  }
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v9);
  return 0LL;
}
