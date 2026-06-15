/*
 * XREFs of _lambda_1df835b24497147b2d93aade403b0d0c_::operator() @ 0x18004A6F0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_1df835b24497147b2d93aade403b0d0c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::Invoke @ 0x18004A6C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18004A6C0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180034B20 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18005DBBC (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1df835b24497147b2d93aade403b0d0c_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // edi
  __int64 v7; // r9
  int (__fastcall *v9)(__int64, struct Windows::ApplicationModel::IPackage **); // rbx
  AtmosCheck *v10; // rcx
  AtmosCheck *v11; // rcx
  __int64 v12; // r9
  AtmosCheck *v13; // rcx
  int refreshed; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct Windows::ApplicationModel::IPackage *v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF
  bool v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+78h] [rbp+48h] BYREF

  v19 = a2;
  v21 = 0;
  LOBYTE(v19) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v19);
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v21);
  if ( v6 < 0 )
    goto LABEL_17;
  if ( !v21 && (_BYTE)v19 )
  {
    v17[0] = 0LL;
    v9 = *(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v17);
    if ( (v9(a3, v17) < 0 || AtmosCheck::IsUsefulPackage(v10, v17[0])) && AtmosCheck::IsLicenseEvaluationRequired(*a1) )
    {
      v13 = *a1;
      *((_DWORD *)v13 + 46) = 3;
      v20 = 0;
      refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(v13, &v20);
      v11 = retaddr;
      if ( refreshed < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x737,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)refreshed);
      if ( v20 || !*((_BYTE *)*a1 + 217) )
      {
        v11 = *a1;
        if ( *((_BYTE *)*a1 + 216) )
        {
          LOBYTE(v15) = 1;
          v6 = AtmosCheck::PerformLicenseCheck(v11, v15, v16, v12);
        }
      }
    }
    AtmosCheck::Trace(v11, "AppUninstall check result", (unsigned int)v6, v12);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v17);
    if ( v6 < 0 )
LABEL_17:
      AtmosCheck::Trace(v5, "AppUninstall check result", (unsigned int)v6, v7);
  }
  return (unsigned int)v6;
}
