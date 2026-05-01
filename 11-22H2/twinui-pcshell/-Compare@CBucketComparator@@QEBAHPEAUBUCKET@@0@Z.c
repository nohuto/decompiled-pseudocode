/*
 * XREFs of ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x180799C7C
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x180799A60 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x180799B24 (--$_MergeThem@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBucketComparator::Compare(CBucketComparator *this, int **a2, int **a3)
{
  int *v3; // r9
  int v4; // ecx
  int v5; // edx
  int *v6; // rax
  int v7; // r8d
  __int64 result; // rax
  int v9; // edx

  v3 = *a2;
  v4 = 0;
  if ( *a2 )
    v5 = *v3;
  else
    v5 = 0;
  v6 = *a3;
  if ( *a3 )
    v7 = *v6;
  else
    v7 = 0;
  if ( v5 == v7 )
    return 0LL;
  if ( v3 )
    v9 = *v3;
  else
    v9 = 0;
  if ( v6 )
    v4 = *v6;
  result = 0xFFFFFFFFLL;
  if ( v9 > v4 )
    return 1LL;
  return result;
}
