/*
 * XREFs of ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C12CC
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     SmmFreeBlock @ 0x1C006FC14 (SmmFreeBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C006FC40 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmGetLogicalPool @ 0x1C006FE3C (SmmGetLogicalPool.c)
 *     SmmRemoveBlockFromPool @ 0x1C006FFCC (SmmRemoveBlockFromPool.c)
 */

void __fastcall SmmDestroyLogicalAllocator(struct SYSMM_LOGICAL_ALLOCATOR *a1)
{
  struct SYSMM_LOGICAL_BLOCK *v1; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v3; // rdi
  struct SYSMM_LOGICAL_ALLOCATOR *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 LogicalPool; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  struct SYSMM_LOGICAL_ALLOCATOR **v9; // rax
  __int64 v10; // rcx

  v1 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 159);
  if ( v1 )
    SmmFreeLogicalAddress(a1, v1);
  v3 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 157);
  while ( v3 != (struct SYSMM_LOGICAL_ALLOCATOR *)((char *)a1 + 1256) )
  {
    v4 = v3;
    v3 = *(struct SYSMM_LOGICAL_ALLOCATOR **)v3;
    v5 = *((_QWORD *)v4 + 4);
    if ( (v5 & 0x10000000000000LL) != 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 9LL, a1, v4, 0LL);
      v5 = *((_QWORD *)v4 + 4);
    }
    LogicalPool = SmmGetLogicalPool((__int64)a1, (v5 >> 53) & 0x3F);
    v7 = *(_QWORD *)v4;
    v8 = LogicalPool;
    if ( *(struct SYSMM_LOGICAL_ALLOCATOR **)(*(_QWORD *)v4 + 8LL) != v4
      || (v9 = (struct SYSMM_LOGICAL_ALLOCATOR **)*((_QWORD *)v4 + 1), *v9 != v4) )
    {
      __fastfail(3u);
    }
    *v9 = (struct SYSMM_LOGICAL_ALLOCATOR *)v7;
    *(_QWORD *)(v7 + 8) = v9;
    SmmRemoveBlockFromPool(v8, (__int64)v4);
    SmmFreeBlock(v10, v4);
    if ( *(_DWORD *)(v8 + 16) || *(_QWORD *)v8 != v8 )
      WdLogSingleEntry5(0LL, 484LL, 8LL, a1, v8, 0LL);
  }
  if ( *((_QWORD *)a1 + 160) )
  {
    WdLogSingleEntry1(1LL, 1602LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesAllocated == 0",
      1602LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 161) != *((_QWORD *)a1 + 156) )
  {
    WdLogSingleEntry1(1LL, 1603LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesFree == pAllocator->Size",
      1603LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    WdLogSingleEntry1(1LL, 1604LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesWasted == 0",
      1604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 162) )
  {
    WdLogSingleEntry1(1LL, 1605LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.RealBytesAllocated == 0",
      1605LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  operator delete(a1);
}
