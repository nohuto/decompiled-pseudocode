/*
 * XREFs of ?CreateVirtualDesktopItem@VirtualDesktopItemFactory@@UEAAJPEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B73DC (-VirtualDesktopItem_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUI.c)
 */

__int64 __fastcall VirtualDesktopItemFactory::CreateVirtualDesktopItem(
        VirtualDesktopItemFactory *this,
        struct IVirtualDesktop *a2,
        const struct _GUID *a3,
        void **a4)
{
  int Instance; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = VirtualDesktopItem_CreateInstance(
               *((HMONITOR *)this + 3),
               *((struct IVirtualDesktopManagerInternal **)this + 2),
               a2,
               a3,
               a4);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemfactory.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
