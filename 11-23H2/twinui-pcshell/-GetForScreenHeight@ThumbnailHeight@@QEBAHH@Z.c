/*
 * XREFs of ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x18056DC74
 * Callers:
 *     ?s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA?AUCSize@Geometry@@W4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEBU23@@Z @ 0x18056F8FC (-s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA-AUCSize@Geometry@@W4MultitaskingViewCon.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x180588EC8 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18058914C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1805897BC (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x180589854 (-_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x180589924 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1805899EC (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThumbnailHeight::GetForScreenHeight(ThumbnailHeight *this, int a2)
{
  double v2; // xmm0_8
  int v3; // ecx
  __int64 result; // rax

  if ( *(double *)this == 0.0 )
    v2 = (double)*((int *)this + 2);
  else
    v2 = (double)a2 * *(double *)this;
  v3 = *((_DWORD *)this + 2);
  result = (unsigned int)(int)v2;
  if ( v3 )
  {
    if ( v3 < (int)result )
      return (unsigned int)v3;
  }
  return result;
}
