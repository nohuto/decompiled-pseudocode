/*
 * XREFs of _lambda_cee9152273d64ff48514b6f1981d3318_::operator() @ 0x180502BB4
 * Callers:
 *     CCLambdaAdapter_int_(__cdecl_)(HMONITOR_____HDC_____tagRECT_____int64)_4_::Adapt__lambda_cee9152273d64ff48514b6f1981d3318___ @ 0x180502B20 (CCLambdaAdapter_int_(__cdecl_)(HMONITOR_____HDC_____tagRECT_____int64)_4_--Adapt__lambda_cee9152.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18010759C (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18018D150 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cee9152273d64ff48514b6f1981d3318_::operator()(ImmersiveMonitorHelper **a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = *((_QWORD *)*a1 + 9);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  v7 = v6(v5, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v10);
  if ( v7 >= 0 )
  {
    if ( ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a1, v10) )
    {
      ImmersiveMonitorHelper::ConnectToMonitor(*a1, (struct IUnknown *)v10);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  v4 = 1;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v4;
}
