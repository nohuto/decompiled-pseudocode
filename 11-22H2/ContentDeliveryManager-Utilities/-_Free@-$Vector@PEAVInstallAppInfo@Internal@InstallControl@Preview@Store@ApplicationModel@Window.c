/*
 * XREFs of ?_Free@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@I@Z @ 0x180084928
 * Callers:
 *     ?Clear@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18007EEE0 (-Clear@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ?_EraseAll@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18008486C (-_EraseAll@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wi.c)
 * Callees:
 *     ??$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007AB58 (--$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Int.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::_Free(
        __int64 *Block,
        unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(v3++);
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
