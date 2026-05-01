/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewFilteredCollection@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Z @ 0x180688B5C
 * Callers:
 *     ?ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18068915C (-ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x180688D10 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x180689A20 (-RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewFilteredCollection,ApplicationViewFilteredCollection,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IObjectCollection * &>(
        ApplicationViewFilteredCollection **a1,
        struct IApplicationViewCollection **a2,
        struct IApplicationViewVisibilityDebouncedNotificationService **a3,
        struct IObjectCollection **a4)
{
  ApplicationViewFilteredCollection *v8; // rax
  int v9; // esi
  ApplicationViewFilteredCollection *v10; // rdi
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (ApplicationViewFilteredCollection *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12[0] = (__int64)v8;
  if ( v8 )
  {
    v12[1] = (__int64)v8;
    v10 = ApplicationViewFilteredCollection::ApplicationViewFilteredCollection(v8);
    v12[0] = (__int64)v10;
    v9 = ApplicationViewFilteredCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(ApplicationViewFilteredCollection *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
