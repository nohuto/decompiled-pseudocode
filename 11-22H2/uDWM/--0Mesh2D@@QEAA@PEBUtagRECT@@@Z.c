/*
 * XREFs of ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18006D614
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E4134 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7E38 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
Mesh2D *__fastcall Mesh2D::Mesh2D(Mesh2D *this, const struct tagRECT *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0xCu);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 0x10u);
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 4u);
  *((_DWORD *)this + 24) = 1056964608;
  return this;
}
