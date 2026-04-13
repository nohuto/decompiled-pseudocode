/*
 * XREFs of ??$?0PEAUIAppInstallInfoRecord@ContentManagement@@@?$AutoValue@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIAppInstallInfoRecord@ContentManagement@@PEAJ@Z @ 0x180079CC4
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x1800820E0 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ?SetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180083CA0 (-SetAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppI.c)
 * Callees:
 *     ?Initialize@?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180081FA4 (-Initialize@-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAU.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>(
        __int64 a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>::Initialize(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
