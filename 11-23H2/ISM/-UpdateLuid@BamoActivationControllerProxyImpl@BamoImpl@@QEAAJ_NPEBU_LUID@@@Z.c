/*
 * XREFs of ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x18001A4D4
 * Callers:
 *     ?Thunk_UpdateLuid_3@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001AF30 (-Thunk_UpdateLuid_3@-$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@Bamo.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800A5E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001525C (--1-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationControllerProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800A57F8 (--0-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsof_ea_1800A57F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        char a2,
        const struct _LUID *a3)
{
  const struct _LUID *v3; // r14
  _QWORD *v6; // rdi
  char *v7; // rsi
  int v9; // eax
  int v10; // eax
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      1LL);
    v7 = (char *)this - 16;
    v9 = (*(__int64 (__fastcall **)(char *, const struct _LUID *))(*((_QWORD *)this - 2) + 120LL))(
           (char *)this - 16,
           v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25BF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(v11);
  }
  else
  {
    v7 = (char *)this - 16;
  }
  *((struct _LUID *)this + 6) = *v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      2LL);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 128LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25CB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(v11);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _LUID *))(*(_QWORD *)*v6 + 64LL))(
      *v6,
      *((unsigned int *)this + 6),
      a3);
  }
  return 0LL;
}
