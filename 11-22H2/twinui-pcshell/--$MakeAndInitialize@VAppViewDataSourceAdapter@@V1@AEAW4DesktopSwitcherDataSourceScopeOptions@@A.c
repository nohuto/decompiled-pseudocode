/*
 * XREFs of ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180080CC8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180080C2C (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOption.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18005FF2C (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x180080DC4 (--0AppViewDataSourceAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,winrt::Windows::Internal::UI::Shell::IWindowTabExtension &>(
        AppViewDataSourceAdapter **a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  AppViewDataSourceAdapter *v11; // rax
  AppViewDataSourceAdapter *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  volatile int *v15; // rdx
  int v16; // edi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  AppViewDataSourceAdapter *v20; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (AppViewDataSourceAdapter *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = AppViewDataSourceAdapter::AppViewDataSourceAdapter(v11);
    v13 = *a4;
    v14 = *a3;
    v20 = v12;
    v16 = AppViewDataSourceAdapter::RuntimeClassInitialize(v12, *a2, v14, v13, *a5, *a6, a7);
    if ( v16 >= 0 )
    {
      if ( v12 )
      {
        v17 = *((_QWORD *)v12 + 23);
        while ( v17 >= 0 )
        {
          if ( (_DWORD)v17 != 0x7FFFFFFF )
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 23, v17 + 1, v17);
            if ( v18 != v17 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v15);
      }
LABEL_8:
      *a1 = v12;
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease((__int64 *)&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v16;
}
