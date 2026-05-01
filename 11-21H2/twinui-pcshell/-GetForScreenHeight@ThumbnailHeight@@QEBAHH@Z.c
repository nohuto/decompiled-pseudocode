/*
 * XREFs of ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804B12C4
 * Callers:
 *     ?s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA?AUCSize@Geometry@@W4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEBU23@@Z @ 0x1804B2FA0 (-s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA-AUCSize@Geometry@@W4MultitaskingViewCon.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804D15B4 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D1838 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D1E98 (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x1804D1F30 (-_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x1804D2000 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804D20C8 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThumbnailHeight::GetForScreenHeight(ThumbnailHeight *this, int a2)
{
  double v2; // xmm1_8
  int v3; // ecx
  double v4; // xmm0_8
  __int64 result; // rax

  v2 = *(double *)this;
  if ( *(double *)this == 0.0 )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = (double)v3;
  }
  else
  {
    v3 = *((_DWORD *)this + 2);
    v4 = (double)a2 * v2;
  }
  result = (unsigned int)(int)v4;
  if ( v3 )
  {
    if ( v3 < (int)result )
      return (unsigned int)v3;
  }
  return result;
}
