/*
 * XREFs of ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x18058852C
 * Callers:
 *     _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x180588308 (_lambda_d5328ea7ec057ef4b1874c63f76393bb_--operator().c)
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x180588DF0 (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x180587ED4 (--$_Add@$$QEAVGridRow@@@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayout::AddRow(GridLayout *this, unsigned __int64 *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  _DWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  _OWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)this + 2);
  v6[0] = *(_DWORD *)this;
  v6[1] = v3;
  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_Add<GridRow &&>(
         (_QWORD *)this + 6,
         (__int64)v6,
         a2);
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v8);
  return v4;
}
