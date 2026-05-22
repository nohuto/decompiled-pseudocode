/*
 * XREFs of ?UpdateInputSiteIdNamespace@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NW4InputSiteIdNamespace@@@Z @ 0x18000F450
 * Callers:
 *     ?Thunk_UpdateInputSiteIdNamespace_16@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180011E00 (-Thunk_UpdateInputSiteIdNamespace_16@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180125BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180125654 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_180125654.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180125724 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteIdNamespace(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // edi
  char v6; // al
  int v8; // eax
  int v9; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = *(_BYTE *)(a1 + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      a1,
      1LL);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x880D,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
    v6 = *(_BYTE *)(a1 + 28);
  }
  *(_DWORD *)(a1 + 32) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      a1,
      2LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 112LL))(a1 - 16);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8819,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  if ( a2 && !*(_BYTE *)(a1 + 29) )
  {
    LOBYTE(a3) = *(_DWORD *)(a1 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 64LL))(
      *(_QWORD *)(a1 + 16),
      *(unsigned int *)(a1 + 24),
      a3);
  }
  return 0LL;
}
