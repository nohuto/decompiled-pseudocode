/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x180588BC4
 * Callers:
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x180587FCC (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ??1LayoutRow@GridLayoutFactory@@QEAA@XZ @ 0x1805882F0 (--1LayoutRow@GridLayoutFactory@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x180588C40 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?RemoveAt@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ_K@Z @ 0x180588CBC (-RemoveAt@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayoutR.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18058914C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1805899EC (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
