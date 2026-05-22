/*
 * XREFs of ?UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180019F14
 * Callers:
 *     ?Thunk_UpdateEatPolicy_8@?$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001B5D0 (-Thunk_UpdateEatPolicy_8@-$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfi.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147DD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@Bamo.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180002928 (--1-$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microso.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationConfigurationInputObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012BF28 (--0-$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@Bam_ea_18012BF28.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        char a2,
        __int64 a3)
{
  unsigned int v3; // ebp
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      1LL);
    v7 = (char *)this - 16;
    v9 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x243C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(v11);
  }
  else
  {
    v7 = (char *)this - 16;
  }
  *((_DWORD *)this + 9) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      2LL);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 128LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2448,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(v11);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *((unsigned int *)this + 6), a3);
  }
  return 0LL;
}
