/*
 * XREFs of ?CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805D1690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D1700 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::CommitCurrentPlacement(WindowArrangementView *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 7);
  if ( !v2 )
  {
    v3 = -2147019873;
    v4 = 539LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)v3);
    return v3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  v3 = WindowArrangementView::CommitPlaceModeTap((char *)this - 48, v5);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 540LL;
    goto LABEL_5;
  }
  return v3;
}
