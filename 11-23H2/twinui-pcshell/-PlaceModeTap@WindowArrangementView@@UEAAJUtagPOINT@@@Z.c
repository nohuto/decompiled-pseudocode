/*
 * XREFs of ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x1805D3550
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D1700 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::PlaceModeTap(WindowArrangementView *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  struct tagPOINT v11; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[20]; // [rsp+28h] [rbp-48h] BYREF
  char v13; // [rsp+3Ch] [rbp-34h]
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_QWORD *)this + 7) == 0LL;
  v11 = a2;
  if ( v2 )
  {
    v5 = -2147019873;
    v6 = 569LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)v5);
    return v5;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v15);
  if ( Geometry::CRect::Contains((Geometry::CRect *)&v15, &v11) )
  {
    *(_DWORD *)v12 = 5;
    v13 = 1;
    *(_OWORD *)&v12[4] = v15;
    v14 = *(_OWORD *)v12;
  }
  else
  {
    v8 = (__int64 *)*((_QWORD *)this + 7);
    v9 = *v8;
    v11 = a2;
    v14 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, struct tagPOINT *))(v9 + 40))(v8, v12, &v11);
  }
  v5 = WindowArrangementView::CommitPlaceModeTap((_BYTE *)this - 48, (unsigned int)v14, v7);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 582LL;
    goto LABEL_8;
  }
  return v5;
}
