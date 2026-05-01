/*
 * XREFs of ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804C75DC
 * Callers:
 *     _lambda_2481c7aedd1faa0c0b80517e0ae6abbe_::operator() @ 0x1804C684C (_lambda_2481c7aedd1faa0c0b80517e0ae6abbe_--operator().c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C6CA0 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVirtualDesktopBarElement::_UpdateScrollElementVisibility(CVirtualDesktopBarElement *this)
{
  bool v2; // zf
  __int64 v3; // rax

  v2 = *(_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92)) == 0;
  v3 = **((_QWORD **)this + 93);
  if ( v2 )
    (*(void (**)(void))(v3 + 136))();
  else
    (*(void (**)(void))(v3 + 144))();
}
