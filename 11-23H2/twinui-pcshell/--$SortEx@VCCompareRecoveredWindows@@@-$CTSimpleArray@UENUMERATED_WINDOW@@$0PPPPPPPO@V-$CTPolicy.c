/*
 * XREFs of ??$SortEx@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJAEBVCCompareRecoveredWindows@@@Z @ 0x1803A5FC4
 * Callers:
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1801B5050 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800EE978 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1803A6060 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 */

__int64 __fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::SortEx<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rcx
  void **v7; // rsi

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > 1 )
  {
    v6 = v4 >> 1;
    v7 = (void **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( is_mul_ok(v6, 0x10uLL) )
    {
      v3 = CTCoAllocPolicy::Realloc((IMalloc *)v6, (v6 * (unsigned __int128)0x10u) >> 64, 0LL, 16 * v6, v7);
      if ( v3 >= 0 )
      {
        CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
          a1,
          a2,
          0LL,
          *(_QWORD *)(a1 + 8));
        CoTaskMemFree(*v7);
        *v7 = 0LL;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)v3;
}
