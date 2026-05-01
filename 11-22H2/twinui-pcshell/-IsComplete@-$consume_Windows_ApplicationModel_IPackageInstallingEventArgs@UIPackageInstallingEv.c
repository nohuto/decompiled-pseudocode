/*
 * XREFs of ?IsComplete@?$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806E2DC4
 * Callers:
 *     _lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator() @ 0x1802584D8 (_lambda_2da415b89f76c27a0f54e8c02bb30f50_--operator().c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1806F3700 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_ApplicationModel_IPackageInstallingEventArgs<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>::IsComplete(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 72LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
