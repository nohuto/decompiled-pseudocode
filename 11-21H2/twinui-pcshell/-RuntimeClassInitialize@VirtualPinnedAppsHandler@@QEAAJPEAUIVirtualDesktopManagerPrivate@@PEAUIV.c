/*
 * XREFs of ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180110900
 * Callers:
 *     ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1801105BC (--$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAU.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180110800 (--4-$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegi.c)
 *     ??4?$ComPtr@UIVirtualDesktopGroupedViewsPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopGroupedViewsPolicy@@@Z @ 0x1801108CC (--4-$ComPtr@UIVirtualDesktopGroupedViewsPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopG.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x180112914 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x180112970 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801753EC (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::RuntimeClassInitialize(
        VirtualPinnedAppsHandler *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopRegistryHelpers *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopGroupedViewsPolicy *a5,
        struct IVirtualDesktopLock *a6)
{
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)this + 48, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopRegistryHelpers>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 64, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopGroupedViewsPolicy>::operator=((__int64 *)this + 11, (__int64)a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 72, a6);
  v13 = 0LL;
  v14 = 0LL;
  LOBYTE(v9) = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int128 *))(**((_QWORD **)this + 7) + 48LL))(
          *((_QWORD *)this + 7),
          v9,
          L"PinnedApps",
          &v13);
  if ( (unsigned int)(v10 + 2147024894) > 1 )
  {
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10,
        v12);
    if ( (__int128 *)((char *)this + 96) != &v13 )
    {
      std::vector<std::wstring>::_Tidy((char *)this + 96);
      *((_OWORD *)this + 6) = v13;
      *((_QWORD *)this + 14) = v14;
      v13 = 0LL;
      v14 = 0LL;
    }
  }
  std::vector<std::wstring>::_Tidy(&v13);
  return 0LL;
}
