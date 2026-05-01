/*
 * XREFs of ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x180799B24
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x180799A60 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x180799C7C (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

void *__fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r14
  char *v6; // rsi
  size_t v7; // rbx
  __int64 v8; // r10
  CBucketComparator **v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  char v12; // r12
  __int64 v13; // rbx
  void *result; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  CBucketComparator *v18; // [rsp+68h] [rbp+10h]

  v5 = a4 >> 1;
  v6 = (char *)(*(_QWORD *)a1 + 8 * a3);
  v7 = 8 * (a4 >> 1);
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v8 = 0LL;
  v9 = (CBucketComparator **)&v6[v7];
  v10 = 0LL;
  v11 = v5;
  v12 = 0;
  do
  {
    v13 = v8 + 1;
    v18 = *v9;
    result = (void *)CBucketComparator::Compare(*v9, *(struct BUCKET **)(*(_QWORD *)(a1 + 16) + 8 * v10), *v9);
    if ( (int)result <= 0 )
    {
      ++v10;
      *(_QWORD *)&v6[8 * v15] = v16;
      if ( v10 == v5 )
        return result;
    }
    else
    {
      result = v18;
      ++v11;
      ++v9;
      *(_QWORD *)&v6[8 * v15] = v18;
      if ( v11 == a4 )
      {
        result = memcpy_0(&v6[8 * v13], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v10), 8 * (a4 - v13));
        v12 = 1;
      }
    }
    v8 = v13;
  }
  while ( !v12 );
  return result;
}
