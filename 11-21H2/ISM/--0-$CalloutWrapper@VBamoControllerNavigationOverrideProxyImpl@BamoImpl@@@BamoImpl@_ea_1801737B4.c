/*
 * XREFs of ??0?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationOverrideProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801737B4
 * Callers:
 *     ??0?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationOverrideProxyImpl@1@@Z @ 0x180173788 (--0-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x1801747D0 (-UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180174B74 (-UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180174CA8 (-UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateResumePosition@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x180174DDC (-UpdateResumePosition@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@.c)
 *     ?UpdateVisualReferenceId@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18017526C (-UpdateVisualReferenceId@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 88LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
