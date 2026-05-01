/*
 * XREFs of ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1805895F4
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18058914C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1802E5A6C (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 *     ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x180588630 (-GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1805886C4 (-GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x1805894DC (-_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x180589D30 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowsToTargetWidth(GridLayoutFactory *this, GridLayoutFactory::LayoutRow **a2)
{
  GridLayoutFactory::LayoutRow *v2; // rbx
  GridLayoutFactory::LayoutRow **v3; // r14
  int v4; // edx
  int v6; // ecx
  int TotalWidthForHeight; // r12d
  int v8; // ebp
  unsigned int v9; // esi
  __int64 *i; // r15
  GridLayoutFactory::LayoutRow *v11; // rdi
  signed int NextMaxHeight; // eax
  __int64 v13; // rdx
  GridLayoutFactory::LayoutRow *v14; // rdi
  __int64 v15; // r14
  GridLayoutFactory::LayoutRow *v16; // r14
  GridLayoutFactory::LayoutItem *v17; // rbx
  __int64 v18; // rbp
  GridLayoutFactory::LayoutRow *v19; // rdi

  v2 = *a2;
  v3 = a2;
  v4 = *((_DWORD *)this + 132);
  v6 = *((_DWORD *)this + 130);
  TotalWidthForHeight = 0;
  v8 = *((_DWORD *)v2 + 8);
  v9 = v8;
  for ( i = (__int64 *)(v3 + 1); TotalWidthForHeight < v4 - v6; v3 = a2 )
  {
    v9 = 0;
    v11 = (GridLayoutFactory::LayoutRow *)((char *)v2 + 48 * *i);
    while ( v2 != v11 )
    {
      if ( *((_DWORD *)v2 + 8) < (int)GridLayoutFactory::LayoutRow::GetMaxHeight(v2) )
      {
        NextMaxHeight = GridLayoutFactory::LayoutRow::GetNextMaxHeight(v2);
        if ( !v9 || NextMaxHeight < (int)v9 )
          v9 = NextMaxHeight;
      }
      v2 = (GridLayoutFactory::LayoutRow *)((char *)v2 + 48);
    }
    v2 = *v3;
    TotalWidthForHeight = 0;
    v13 = *i;
    v14 = v2;
    v15 = (__int64)*v3 + 48 * *i;
    if ( v2 != (GridLayoutFactory::LayoutRow *)v15 )
    {
      do
      {
        if ( TotalWidthForHeight <= (int)GridLayoutFactory::s_GetTotalWidthForHeight(
                                           v2,
                                           *((unsigned int *)v2 + 10),
                                           v9,
                                           0LL) )
          TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(v2, *((unsigned int *)v2 + 10), v9, 0LL);
        v2 = (GridLayoutFactory::LayoutRow *)((char *)v2 + 48);
      }
      while ( v2 != (GridLayoutFactory::LayoutRow *)v15 );
      v13 = *i;
      v2 = *a2;
      v14 = *a2;
    }
    v6 = *((_DWORD *)this + 130);
    if ( TotalWidthForHeight <= *((_DWORD *)this + 132) - v6 )
    {
      v16 = (GridLayoutFactory::LayoutRow *)((char *)v14 + 48 * v13);
      if ( v14 != v16 )
      {
        do
        {
          v17 = *(GridLayoutFactory::LayoutItem **)v14;
          v18 = *(_QWORD *)v14 + 16LL * *((_QWORD *)v14 + 1);
          while ( v17 != (GridLayoutFactory::LayoutItem *)v18 )
          {
            GridLayoutFactory::LayoutItem::SetHeight(v17, v9);
            v17 = (GridLayoutFactory::LayoutItem *)((char *)v17 + 16);
          }
          *((_DWORD *)v14 + 8) = v9;
          v14 = (GridLayoutFactory::LayoutRow *)((char *)v14 + 48);
        }
        while ( v14 != v16 );
        v6 = *((_DWORD *)this + 130);
        v2 = *a2;
      }
      v8 = v9;
    }
    v4 = *((_DWORD *)this + 132);
  }
  if ( TotalWidthForHeight > v4 - v6 )
  {
    v8 = v9;
    v19 = (GridLayoutFactory::LayoutRow *)((char *)v2 + 48 * *i);
    while ( v2 != v19 )
    {
      if ( v8 >= (int)GridLayoutFactory::_FitRowToTargetWidth(this, v2) )
        v8 = GridLayoutFactory::_FitRowToTargetWidth(this, v2);
      v2 = (GridLayoutFactory::LayoutRow *)((char *)v2 + 48);
    }
  }
  return (unsigned int)v8;
}
