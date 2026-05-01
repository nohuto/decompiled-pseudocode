/*
 * XREFs of ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18052D4CC
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18052D3E4 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x18052D90C (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 */

_QWORD *__fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char *v5; // rbp
  char *v6; // r14
  size_t v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // r12
  __int64 v10; // rsi
  char *v11; // r13
  __int64 v12; // rcx
  _QWORD *result; // rax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  char *v19; // [rsp+98h] [rbp+20h]

  v19 = (char *)a4;
  v17 = a2;
  v5 = (char *)(a4 >> 1);
  v6 = (char *)(*(_QWORD *)a1 + 8 * a3);
  v7 = 8 * (a4 >> 1);
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v8 = 0LL;
  v9 = (__int64 *)&v6[v7];
  v10 = 0LL;
  v11 = v5;
  LOBYTE(v17) = 0;
  do
  {
    v16 = *v9;
    v15 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v16);
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v8);
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v18);
    if ( (int)CDropFeedbackItemComparator::Compare(v12, &v18, &v16) <= 0 )
    {
      result = *(_QWORD **)(a1 + 16);
      v14 = v8++;
      *(_QWORD *)&v6[8 * v10] = result[v14];
      if ( (char *)v8 == v5 )
        return result;
    }
    else
    {
      ++v11;
      ++v9;
      *(_QWORD *)&v6[8 * v10] = *v15;
      result = v19;
      if ( v11 == v19 )
      {
        result = memcpy_0(&v6[8 * v10 + 8], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v8), 8LL * (_QWORD)&v19[-v10 - 1]);
        LOBYTE(v17) = 1;
      }
    }
    ++v10;
  }
  while ( !(_BYTE)v17 );
  return result;
}
