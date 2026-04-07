/*
 * XREFs of ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180069D36
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E2904 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
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
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0xCu);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 0x10u);
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 4u);
  *((_DWORD *)this + 30) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 96, 4u);
  *((_DWORD *)this + 32) = 1056964608;
  return this;
}
