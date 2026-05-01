/*
 * XREFs of ??1?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1804663A0
 * Callers:
 *     _InstallWebSearchPackage_::_1_::dtor$0 @ 0x180468D2D (_InstallWebSearchPackage_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$0 @ 0x18046B1AA (_UndockedSearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x180469FAC (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::~tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v1);
  return result;
}
