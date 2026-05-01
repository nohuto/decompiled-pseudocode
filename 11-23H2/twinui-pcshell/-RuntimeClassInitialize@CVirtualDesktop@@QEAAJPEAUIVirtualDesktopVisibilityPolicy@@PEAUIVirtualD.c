/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BE9C
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x18013CFE8 (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013D108 (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x18013BEF8 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 */

__int64 __fastcall CVirtualDesktop::RuntimeClassInitialize(
        CVirtualDesktop *this,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3)
{
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 80, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 88, a3);
  v5 = *((_QWORD *)this + 12) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)this + 13) - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
