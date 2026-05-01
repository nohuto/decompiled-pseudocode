/*
 * XREFs of ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1805889D8
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x18057AA90 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x180578B8C (--_GGridRow@@QEAAPEAXI@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x180588804 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 */

void __fastcall GridLayout::LayoutRows(GridLayout *this, const RECT *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r8d
  int v12; // r10d
  int v13; // eax
  int v14; // r14d
  int v15; // r8d
  RECT si128; // xmm0
  __int64 v17; // rsi
  int v18; // eax
  RECT v19; // xmm0
  RECT v20; // xmm1
  RECT v21; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-40h] BYREF
  RECT v23; // [rsp+40h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = 56 * v2 - 56;
    do
    {
      v7 = *((_QWORD *)this + 6);
      v8 = v7;
      if ( !*(_QWORD *)(v6 + v7 + 32) && v5 < *((_QWORD *)this + 7) )
      {
        GridRow::`scalar deleting destructor'((GridRow *)(v6 + v7));
        v9 = *((_QWORD *)this + 7);
        if ( v5 != v9 - 1 )
          memmove_0(
            (void *)(v6 + *((_QWORD *)this + 6)),
            (const void *)(v6 + *((_QWORD *)this + 6) + 56),
            56 * (v9 - v5) - 56);
        --*((_QWORD *)this + 7);
        v8 = *((_QWORD *)this + 6);
      }
      --v5;
      v6 -= 56LL;
      --v2;
    }
    while ( v2 );
    v2 = *((_QWORD *)this + 7);
  }
  else
  {
    v8 = *((_QWORD *)this + 6);
  }
  v10 = *((_DWORD *)this + 1);
  v11 = a2->bottom - a2->top;
  v12 = *((_DWORD *)this + 2);
  v13 = (v10 + v11) / (v12 + v10);
  if ( v13 >= *((_DWORD *)this + 14) )
    v13 = *((_DWORD *)this + 14);
  if ( v13 <= 0 )
    v14 = a2->bottom - a2->top;
  else
    v14 = v13 * v12 + v10 * (v13 - 1);
  v15 = v11 - v14;
  v21 = *a2;
  si128 = 0LL;
  rcDst = 0LL;
  v17 = v8 + 56 * v2;
  v21.bottom = v15 / 2 + v12 + v21.top;
  v21.top += v15 / 2;
  if ( v8 != v17 )
  {
    do
    {
      GridRow::LayoutRow((GridRow *)v8, (const struct Geometry::CRect *)&v21);
      v18 = *((_DWORD *)this + 2) + *((_DWORD *)this + 1);
      v19 = *(RECT *)(v8 + 8);
      v21.bottom += v18;
      v21.top += v18;
      rcSrc2 = v19;
      UnionRect(&rcDst, &rcDst, &rcSrc2);
      v8 += 56LL;
    }
    while ( v8 != v17 );
    si128 = (RECT)_mm_load_si128((const __m128i *)&rcDst);
  }
  v23 = si128;
  v23.bottom = v14 + si128.top;
  IntersectRect(&v23, a2, &v23);
  v20 = v23;
  *((struct tagRECT *)this + 2) = rcDst;
  *((RECT *)this + 1) = v20;
  *((_BYTE *)this + 12) = *((_DWORD *)this + 11) - *((_DWORD *)this + 9) > *((_DWORD *)this + 7) - *((_DWORD *)this + 5);
}
