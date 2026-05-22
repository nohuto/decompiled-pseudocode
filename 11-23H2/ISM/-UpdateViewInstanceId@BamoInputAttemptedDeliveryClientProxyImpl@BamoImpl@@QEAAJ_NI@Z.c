/*
 * XREFs of ?UpdateViewInstanceId@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180172F74
 * Callers:
 *     ?Thunk_UpdateViewInstanceId_8@?$IInputAttemptedDeliveryClientProxy_Receive@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180172F40 (-Thunk_UpdateViewInstanceId_8@-$IInputAttemptedDeliveryClientProxy_Receive@VBamoInputAttemptedDe.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180172F60 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputAttemptedDeliveryClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801727B4 (--0-$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@_ea_1801727B4.c)
 *     ??1?$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801728DC (--1-$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::UpdateViewInstanceId(
        BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  char *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x91A9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *((_DWORD *)this + 8) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x91B5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
