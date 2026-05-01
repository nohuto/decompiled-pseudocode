/*
 * XREFs of RecoverWindowsProc @ 0x180161B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x1800F0430 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ShouldWindowBeConsideredForRecovery @ 0x180161B60 (ShouldWindowBeConsideredForRecovery.c)
 */

__int64 __fastcall RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  void *v3; // r8
  __int64 v5; // rdx
  _OWORD *v6; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)ShouldWindowBeConsideredForRecovery(a1, &v7) )
  {
    v5 = a2[1];
    if ( v5 != a2[3]
      || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
                (__int64)a2,
                v5 + 1,
                v3) >= 0 )
    {
      ++a2[1];
      v6 = (_OWORD *)(16LL * a2[1] + *a2 - 16LL);
      if ( v6 )
        *v6 = v7;
    }
  }
  return 1LL;
}
