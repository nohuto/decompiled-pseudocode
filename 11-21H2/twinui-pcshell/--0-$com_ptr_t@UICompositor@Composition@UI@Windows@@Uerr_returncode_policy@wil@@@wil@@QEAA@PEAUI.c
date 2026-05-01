/*
 * XREFs of ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x18054EE44
 * Callers:
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180554C3C (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 *     ?SetDropShadowEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x18055551C (-SetDropShadowEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
