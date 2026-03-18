/*
 * XREFs of ?SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026AF94
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026B2D4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268760 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 */

void __fastcall CCursorState::SortShapeCache(CCursorState *this, int a2, enum DXGI_MODE_ROTATION a3, char a4)
{
  char *v4; // rdx
  char *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-40h]
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  enum DXGI_MODE_ROTATION *v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+78h] [rbp+18h] BYREF
  enum DXGI_MODE_ROTATION v10; // [rsp+80h] [rbp+20h] BYREF
  char v11; // [rsp+88h] [rbp+28h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v4 = (char *)*((_QWORD *)this + 28);
  v5 = (char *)*((_QWORD *)this + 27);
  *(_QWORD *)&v6 = &v11;
  *((_QWORD *)&v6 + 1) = &v9;
  v8 = &v10;
  v7 = v6;
  std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    v5,
    v4,
    (v4 - v5) >> 4,
    (__int64)&v7);
}
