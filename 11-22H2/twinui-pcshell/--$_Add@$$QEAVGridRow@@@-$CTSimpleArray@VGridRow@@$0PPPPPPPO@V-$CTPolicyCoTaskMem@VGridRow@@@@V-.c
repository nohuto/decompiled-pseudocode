/*
 * XREFs of ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x180587ED4
 * Callers:
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x18058852C (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ_K0@Z @ 0x180589354 (-_EnsureCapacity@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-$CSimpl.c)
 */

__int64 __fastcall CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_Add<GridRow &&>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi

  if ( a3 )
    *a3 = 0LL;
  v6 = a1[1];
  v7 = 0;
  if ( v6 != a1[3]
    || (v7 = CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_EnsureCapacity(
               a1,
               v6 + 1),
        v7 >= 0) )
  {
    ++a1[1];
    v8 = 56LL * a1[1] + *a1 - 56LL;
    if ( v8 )
    {
      *(_DWORD *)v8 = *(_DWORD *)a2;
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(a2 + 4);
      *(_OWORD *)(v8 + 8) = *(_OWORD *)(a2 + 8);
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_QWORD *)(v8 + 48) = 0LL;
      v9 = *(_QWORD *)(a2 + 24);
      v10 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll(v8 + 24);
      *(_QWORD *)(v8 + 24) = v9;
      *(_QWORD *)(v8 + 32) = v10;
      *(_QWORD *)(v8 + 48) = v10;
    }
    if ( a3 )
      *a3 = a1[1] - 1LL;
  }
  return (unsigned int)v7;
}
