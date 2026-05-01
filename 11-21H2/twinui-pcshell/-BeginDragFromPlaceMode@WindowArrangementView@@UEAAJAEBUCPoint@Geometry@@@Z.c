/*
 * XREFs of ?BeginDragFromPlaceMode@WindowArrangementView@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180518BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x18051D5A8 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::BeginDragFromPlaceMode(
        WindowArrangementView *this,
        const struct Geometry::CPoint *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 10);
  SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 40LL))(*((_QWORD *)this + 7), *(_QWORD *)a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 80LL))(*((_QWORD *)this + 7), 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
    *((_QWORD *)this + 7),
    *(_QWORD *)a2,
    0LL);
  updated = WindowArrangementView::UpdateView((char *)this - 24, a2, 0LL);
  v5 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)updated);
  return v5;
}
