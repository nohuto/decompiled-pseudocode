/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopGroupedViewsEventListener@@V1@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGroupedViewsEventListener@@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18055A7D0
 * Callers:
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18055BE70 (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0VirtualDesktopGroupedViewsEventListener@@QEAA@XZ @ 0x18055AD54 (--0VirtualDesktopGroupedViewsEventListener@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18055B3F4 (-InternalRelease@-$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18055B848 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGroupedViewsEventListener,VirtualDesktopGroupedViewsEventListener,ITabViewManager * &,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &,IInspectable * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct ITabViewManager **a2,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **a3,
        struct IInspectable **a4,
        struct IVirtualDesktopManagerPrivate **a5,
        struct IVirtualDesktopPinnedAppsPrivate **a6,
        struct IVirtualDesktopGroupedViewsPolicy **a7,
        struct IVirtualDesktopLock **a8)
{
  VirtualDesktopGroupedViewsEventListener *v12; // rax
  int v13; // esi
  volatile signed __int64 *v14; // rdi
  volatile int *v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  volatile signed __int64 *v19; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  v12 = (VirtualDesktopGroupedViewsEventListener *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = (volatile signed __int64 *)VirtualDesktopGroupedViewsEventListener::VirtualDesktopGroupedViewsEventListener(v12);
    v19 = v14;
    v13 = VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize(
            (VirtualDesktopGroupedViewsEventListener *)v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8);
    if ( v13 >= 0 )
    {
      if ( v14 )
      {
        v16 = *((_QWORD *)v14 + 7);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64(v14 + 7, v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v15);
      }
LABEL_11:
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
