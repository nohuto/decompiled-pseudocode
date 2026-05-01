/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@$$T$$TAEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@$$QEA$$T4AEAW4SwitchItemFilterBehavior@@@Z @ 0x1805644CC
 * Callers:
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1805651E8 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E0D14 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SwitchItemCollection@@QEAA@XZ @ 0x180564700 (--0SwitchItemCollection@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@@Z @ 0x180565060 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCollection,SwitchItemCollection,ISwitchItemFactory * &,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,std::nullptr_t,std::nullptr_t,enum SwitchItemFilterBehavior &>(
        SwitchItemCollection **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        SwitchItemCollection *a5)
{
  SwitchItemCollection *v9; // rax
  int v10; // esi
  SwitchItemCollection *v11; // rdi
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  *a1 = 0LL;
  v9 = (SwitchItemCollection *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = SwitchItemCollection::SwitchItemCollection(v9);
    a5 = v11;
    v10 = SwitchItemCollection::RuntimeClassInitialize(v11, *a2, *a3, *a4);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v13 = *((_QWORD *)v11 + 23);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 23, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
      }
LABEL_11:
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease((__int64 *)&a5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
