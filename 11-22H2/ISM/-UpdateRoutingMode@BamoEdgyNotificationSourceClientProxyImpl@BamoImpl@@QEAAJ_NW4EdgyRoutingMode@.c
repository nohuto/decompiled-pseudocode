/*
 * XREFs of ?UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z @ 0x1801479E8
 * Callers:
 *     ?Thunk_UpdateRoutingMode_16@?$IEdgyNotificationSourceClientProxy_Receive@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801421D0 (-Thunk_UpdateRoutingMode_16@-$IEdgyNotificationSourceClientProxy_Receive@VBamoEdgyNotificationSo.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180148160 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyNotificationSourceClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012D004 (--0-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@_ea_18012D004.c)
 *     ??1?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012ECC4 (--1-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  __int64 v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      1);
    v6 = a1 - 16;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x88B2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = a1 - 16;
  }
  *(_DWORD *)(a1 + 32) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      2);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x88BE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)a1, a2, a3);
  return 0LL;
}
