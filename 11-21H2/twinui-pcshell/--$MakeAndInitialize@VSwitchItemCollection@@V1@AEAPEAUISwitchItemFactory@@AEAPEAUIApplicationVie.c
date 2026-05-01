/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804A6CEC
 * Callers:
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8308 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0SwitchItemCollection@@QEAA@XZ @ 0x1804A6FCC (--0SwitchItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A7914 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1804A7FB0 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCollection,SwitchItemCollection,ISwitchItemFactory * &,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,enum SwitchItemFilterBehavior &>(
        SwitchItemCollection **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  SwitchItemCollection *v11; // rax
  int v12; // esi
  SwitchItemCollection *v13; // rdi
  volatile int *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  SwitchItemCollection *v18; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  v11 = (SwitchItemCollection *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = SwitchItemCollection::SwitchItemCollection(v11);
    v18 = v13;
    v12 = SwitchItemCollection::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
      {
        v15 = *((_QWORD *)v13 + 23);
        while ( v15 >= 0 )
        {
          if ( (_DWORD)v15 != 0x7FFFFFFF )
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 23, v15 + 1, v15);
            if ( v16 != v15 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v15 + 16), v14);
      }
LABEL_11:
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
