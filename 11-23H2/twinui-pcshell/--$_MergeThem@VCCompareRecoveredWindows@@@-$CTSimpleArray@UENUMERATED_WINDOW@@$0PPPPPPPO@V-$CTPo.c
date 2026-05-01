/*
 * XREFs of ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1803A6144
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1803A6060 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x1803A6258 (-Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z.c)
 */

void *__fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeThem<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        CCompareRecoveredWindows *a4)
{
  unsigned __int64 v4; // rdi
  char *v6; // rsi
  size_t v7; // rbx
  CCompareRecoveredWindows *v8; // rcx
  const struct ENUMERATED_WINDOW *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r12
  char v12; // r13
  __int64 v13; // r14
  int v14; // eax
  char *v15; // rcx
  void *result; // rax
  __int64 v17; // rdx
  const struct ENUMERATED_WINDOW *Src; // [rsp+70h] [rbp+8h]
  CCompareRecoveredWindows *v19; // [rsp+78h] [rbp+10h]
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]

  v4 = (unsigned __int64)a4 >> 1;
  v6 = (char *)(*(_QWORD *)a1 + 16 * a3);
  v7 = 16 * ((unsigned __int64)a4 >> 1);
  v20 = (unsigned __int64)a4 >> 1;
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v19 = (CCompareRecoveredWindows *)v4;
  v9 = (const struct ENUMERATED_WINDOW *)&v6[v7];
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  do
  {
    Src = v9;
    v14 = CCompareRecoveredWindows::Compare(v8, (const struct ENUMERATED_WINDOW *)(v13 + *(_QWORD *)(a1 + 16)), v9);
    v15 = &v6[16 * v10];
    if ( v14 <= 0 )
    {
      v13 += 16LL;
      v17 = 16 * v11++;
      result = memmove_0(v15, (const void *)(*(_QWORD *)(a1 + 16) + v17), 0x10uLL);
      if ( v11 == v20 )
        return result;
    }
    else
    {
      v9 = (const struct ENUMERATED_WINDOW *)((char *)v9 + 16);
      v19 = (CCompareRecoveredWindows *)((char *)v19 + 1);
      result = memmove_0(v15, Src, 0x10uLL);
      v8 = a4;
      if ( v19 == a4 )
      {
        result = memcpy_0(
                   &v6[16 * v10 + 16],
                   (const void *)(v13 + *(_QWORD *)(a1 + 16)),
                   16LL * (_QWORD)((char *)a4 - v10 - 1));
        v12 = 1;
      }
    }
    ++v10;
  }
  while ( !v12 );
  return result;
}
