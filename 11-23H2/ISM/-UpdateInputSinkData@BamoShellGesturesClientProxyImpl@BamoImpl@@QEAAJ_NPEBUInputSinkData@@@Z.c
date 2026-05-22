/*
 * XREFs of ?UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z @ 0x180054098
 * Callers:
 *     ?Thunk_UpdateInputSinkData_341@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800617F0 (-Thunk_UpdateInputSinkData_341@-$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18016DCA0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180013174 (--1-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180051428 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180051428.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        __int64 a2,
        const struct InputSinkData *a3)
{
  char v4; // bp
  char *v6; // r14
  int v8; // eax
  int v9; // eax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v8 = (*(__int64 (__fastcall **)(char *, const struct InputSinkData *))(*((_QWORD *)this - 2) + 136LL))(
           (char *)this - 16,
           a3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7B3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a3 + 2);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 144LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7BF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
