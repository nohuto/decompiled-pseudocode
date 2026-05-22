/*
 * XREFs of ?UpdateInputSiteIdNamespace@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NW4InputSiteIdNamespace@@@Z @ 0x180012DDC
 * Callers:
 *     ?Thunk_UpdateInputSiteIdNamespace_16@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001A340 (-Thunk_UpdateInputSiteIdNamespace_16@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18014E2B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800283F0 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18002A36C (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteIdNamespace(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  int v9; // eax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      a1,
      1LL);
    v7 = a1 - 16;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC46,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v11);
  }
  else
  {
    v7 = a1 - 16;
  }
  *(_DWORD *)(a1 + 32) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      a1,
      2LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC52,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v11);
  }
  if ( a2 && !*(_BYTE *)(a1 + 29) )
  {
    LOBYTE(a3) = *(_DWORD *)(a1 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 24), a3);
  }
  return 0LL;
}
