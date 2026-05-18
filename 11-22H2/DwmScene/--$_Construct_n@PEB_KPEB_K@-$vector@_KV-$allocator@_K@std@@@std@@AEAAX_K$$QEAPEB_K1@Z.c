/*
 * XREFs of ??$_Construct_n@PEB_KPEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z @ 0x18007C8CC
 * Callers:
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@V?$initializer_list@_K@1@AEBV?$allocator@_K@1@@Z @ 0x18007CA0C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@V-$initializer_list@_K@1@AEBV-$allocator@_K@1@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEB_KPEA_K@std@@YAPEA_KPEB_K0PEA_K@Z @ 0x18007C948 (--$_Copy_memmove@PEB_KPEA_K@std@@YAPEA_KPEB_K0PEA_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x18007CB74 (--1-$_Tidy_guard@V-$vector@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18007E4DC (-_Buy_nonzero@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned __int64>::_Construct_n<unsigned __int64 const *,unsigned __int64 const *>(
        __int64 *a1,
        __int64 a2,
        void **a3,
        __int64 *a4)
{
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<unsigned __int64>::_Buy_nonzero();
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    std::_Copy_memmove<unsigned __int64 const *,unsigned __int64 *>(v8);
    v11 = 0LL;
    a1[1] = v7 + 8 * ((v9 - (__int64)v8) >> 3);
    return std::_Tidy_guard<std::vector<unsigned __int64>>::~_Tidy_guard<std::vector<unsigned __int64>>(&v11);
  }
  return result;
}
