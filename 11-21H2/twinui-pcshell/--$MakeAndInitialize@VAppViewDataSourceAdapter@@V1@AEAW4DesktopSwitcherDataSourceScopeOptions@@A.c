/*
 * XREFs of ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18005044C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180050580 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOption.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18002EC40 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x18004F01C (--0AppViewDataSourceAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18004F1D0 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?Attach@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@Z @ 0x18005054C (-Attach@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
        __int64 *a1,
        int *a2,
        struct IApplicationViewCollection **a3,
        struct IApplicationViewIconLoader **a4,
        struct IImmersiveShellHookService **a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **a6)
{
  AppViewDataSourceAdapter *v10; // rax
  AppViewDataSourceAdapter *v11; // rax
  struct IApplicationViewIconLoader *v12; // r9
  __int64 v13; // rbx
  volatile int *v14; // rdx
  int v15; // edi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (AppViewDataSourceAdapter *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = AppViewDataSourceAdapter::AppViewDataSourceAdapter(v10);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::Attach(&v19, v11);
    v12 = *a4;
    v13 = v19;
    v15 = AppViewDataSourceAdapter::RuntimeClassInitialize(v19, *a2, *a3, v12, *a5, *a6);
    if ( v15 >= 0 )
    {
      if ( v13 )
      {
        v16 = *(_QWORD *)(v13 + 240);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 240), v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
LABEL_8:
        v13 = v19;
      }
      *a1 = v13;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
