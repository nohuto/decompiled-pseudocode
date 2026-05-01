/*
 * XREFs of ?Add@?$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardCompareHelper@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardMergeHelper@PEFAU_ITEMIDLIST@@@@@@QEAAJAEBQEFAU_ITEMIDLIST@@PEA_K@Z @ 0x180751F08
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::Add(
        _QWORD *a1,
        _QWORD *a2,
        void *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v7; // r8

  result = 0LL;
  v5 = a1[1];
  if ( v5 != a1[3]
    || (result = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   (__int64)a1,
                   v5 + 1,
                   a3),
        (int)result >= 0) )
  {
    v7 = (_QWORD *)(*a1 + 8 * a1[1]++);
    if ( v7 )
      *v7 = *a2;
  }
  return result;
}
