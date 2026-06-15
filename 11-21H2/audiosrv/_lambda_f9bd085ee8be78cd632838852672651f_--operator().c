/*
 * XREFs of _lambda_f9bd085ee8be78cd632838852672651f_::operator() @ 0x1801533B8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f9bd085ee8be78cd632838852672651f___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x180154CB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180154CB0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18004199C (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180155260 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f9bd085ee8be78cd632838852672651f_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // edi
  int (__fastcall *v7)(__int64, struct Windows::ApplicationModel::IPackage **); // rbx
  AtmosCheck *v8; // rcx
  AtmosCheck *v9; // rcx
  AtmosCheck *v10; // rcx
  int refreshed; // eax
  struct Windows::ApplicationModel::IPackage *v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF
  bool v16; // [rsp+70h] [rbp+40h] BYREF
  int v17; // [rsp+78h] [rbp+48h] BYREF

  v15 = a2;
  v17 = 0;
  LOBYTE(v15) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v15);
  if ( v6 < 0 )
    goto LABEL_14;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v17);
  if ( v6 < 0 )
    goto LABEL_14;
  if ( (_BYTE)v15 && !v17 )
  {
    v13[0] = 0LL;
    v7 = *(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v13);
    if ( v7(a3, v13) < 0 || AtmosCheck::IsUsefulPackage(v8, v13[0]) )
    {
      v10 = *a1;
      *((_DWORD *)v10 + 46) = 2;
      v16 = 0;
      refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(v10, &v16);
      v9 = retaddr;
      if ( refreshed < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x700,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)refreshed);
      if ( v16 || !*((_BYTE *)*a1 + 217) )
      {
        v9 = *a1;
        if ( *((_BYTE *)*a1 + 216) )
          v6 = AtmosCheck::PerformLicenseCheck(v9, 1);
      }
    }
    AtmosCheck::Trace(v9, "AppInstall check result", v6);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v13);
    if ( v6 < 0 )
LABEL_14:
      AtmosCheck::Trace(v5, "AppInstall check result", v6);
  }
  return (unsigned int)v6;
}
