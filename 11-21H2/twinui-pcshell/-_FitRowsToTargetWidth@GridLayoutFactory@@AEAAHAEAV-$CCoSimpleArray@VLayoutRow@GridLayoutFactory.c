/*
 * XREFs of ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804D1CE0
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D1838 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1802376BC (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 *     ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D0D24 (-GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D0DB8 (-GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x1804D1BC8 (-_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D23AC (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowsToTargetWidth(
        GridLayoutFactory *this,
        const struct GridLayoutFactory::LayoutRow **a2)
{
  int TotalWidthForHeight; // r13d
  int v3; // r8d
  int v5; // r9d
  int v7; // esi
  unsigned int v8; // edi
  GridLayoutFactory::LayoutRow *v9; // rbx
  const struct GridLayoutFactory::LayoutRow *v10; // rax
  __int64 v11; // rbp
  signed int NextMaxHeight; // eax
  GridLayoutFactory::LayoutRow *v13; // rbp
  const struct GridLayoutFactory::LayoutRow *v14; // rbx
  __int64 v15; // r12
  GridLayoutFactory::LayoutItem *v16; // rsi
  __int64 v17; // rbp
  const struct GridLayoutFactory::LayoutRow *v18; // rbx
  __int64 v19; // rdi

  TotalWidthForHeight = 0;
  v3 = *((_DWORD *)this + 132);
  v5 = *((_DWORD *)this + 130);
  v7 = *((_DWORD *)*a2 + 8);
  v8 = v7;
  if ( v3 - v5 > 0 )
  {
    do
    {
      v9 = *a2;
      v8 = 0;
      v10 = a2[1];
      v11 = (__int64)*a2 + 48 * (_QWORD)v10;
      if ( *a2 != (const struct GridLayoutFactory::LayoutRow *)v11 )
      {
        do
        {
          if ( *((_DWORD *)v9 + 8) < (int)GridLayoutFactory::LayoutRow::GetMaxHeight(v9) )
          {
            NextMaxHeight = GridLayoutFactory::LayoutRow::GetNextMaxHeight(v9);
            if ( !v8 || NextMaxHeight < (int)v8 )
              v8 = NextMaxHeight;
          }
          v9 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48);
        }
        while ( v9 != (GridLayoutFactory::LayoutRow *)v11 );
        v9 = *a2;
        v10 = a2[1];
      }
      TotalWidthForHeight = 0;
      v13 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48 * (_QWORD)v10);
      while ( v9 != v13 )
      {
        if ( TotalWidthForHeight <= (int)GridLayoutFactory::s_GetTotalWidthForHeight(
                                           v9,
                                           *((unsigned int *)v9 + 10),
                                           v8,
                                           0LL) )
          TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(v9, *((unsigned int *)v9 + 10), v8, 0LL);
        v9 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48);
      }
      v3 = *((_DWORD *)this + 132);
      if ( TotalWidthForHeight <= v3 - *((_DWORD *)this + 130) )
      {
        v14 = *a2;
        v15 = (__int64)*a2 + 48 * (_QWORD)a2[1];
        if ( *a2 != (const struct GridLayoutFactory::LayoutRow *)v15 )
        {
          do
          {
            v16 = *(GridLayoutFactory::LayoutItem **)v14;
            v17 = *(_QWORD *)v14 + 16LL * *((_QWORD *)v14 + 1);
            while ( v16 != (GridLayoutFactory::LayoutItem *)v17 )
            {
              GridLayoutFactory::LayoutItem::SetHeight(v16, v8);
              v16 = (GridLayoutFactory::LayoutItem *)((char *)v16 + 16);
            }
            *((_DWORD *)v14 + 8) = v8;
            v14 = (const struct GridLayoutFactory::LayoutRow *)((char *)v14 + 48);
          }
          while ( v14 != (const struct GridLayoutFactory::LayoutRow *)v15 );
          v3 = *((_DWORD *)this + 132);
        }
        v7 = v8;
      }
      v5 = *((_DWORD *)this + 130);
    }
    while ( TotalWidthForHeight < v3 - v5 );
  }
  if ( TotalWidthForHeight > v3 - v5 )
  {
    v7 = v8;
    v18 = *a2;
    v19 = (__int64)*a2 + 48 * (_QWORD)a2[1];
    while ( v18 != (const struct GridLayoutFactory::LayoutRow *)v19 )
    {
      if ( v7 >= (int)GridLayoutFactory::_FitRowToTargetWidth(this, v18) )
        v7 = GridLayoutFactory::_FitRowToTargetWidth(this, v18);
      v18 = (const struct GridLayoutFactory::LayoutRow *)((char *)v18 + 48);
    }
  }
  return (unsigned int)v7;
}
