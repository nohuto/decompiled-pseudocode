/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x18060AC04
 * Callers:
 *     _VirtualDesktopGestureHandler::InitializeContext_::_1_::dtor$0 @ 0x18060F874 (_VirtualDesktopGestureHandler--InitializeContext_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18060ACF0 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::~unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>(
        VirtualDesktopGestureContext **a1)
{
  VirtualDesktopGestureContext *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v1);
    operator delete(v1);
  }
}
