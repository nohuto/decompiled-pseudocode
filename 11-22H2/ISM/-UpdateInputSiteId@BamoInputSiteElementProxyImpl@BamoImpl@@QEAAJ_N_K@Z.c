/*
 * XREFs of ?UpdateInputSiteId@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180012E74
 * Callers:
 *     ?Thunk_UpdateInputSiteId_0@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001A320 (-Thunk_UpdateInputSiteId_0@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18014E2B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800283F0 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18002A36C (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteId(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // rdi
  char *v7; // rsi
  int v9; // eax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      1LL);
    v7 = (char *)this - 16;
    v9 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC6F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v11);
  }
  else
  {
    v7 = (char *)this - 16;
  }
  *((_QWORD *)this + 5) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      2LL);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 128LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC7B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v11);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *((unsigned int *)this + 6), a3);
  }
  return 0LL;
}
