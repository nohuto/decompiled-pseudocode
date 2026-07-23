/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x140875408
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpFreezeHive @ 0x14087531C (CmpFreezeHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  void *Pool2; // rsi
  __int64 v5; // rax
  const void **v6; // rdi
  __int64 v7; // rax

  Pool2 = (void *)ExAllocatePool2(256LL, 8LL * (unsigned int)(*(_DWORD *)(a1 + 2920) + 1), 1984261443LL);
  if ( !Pool2 )
    return 3221225626LL;
  v5 = *(unsigned int *)(a1 + 2920);
  v6 = (const void **)(a1 + 2928);
  if ( (_DWORD)v5 )
  {
    memmove(Pool2, *v6, 8 * v5);
    ExFreePoolWithTag((PVOID)*v6, 0);
  }
  v7 = *(unsigned int *)(a1 + 2920);
  *v6 = Pool2;
  *((_QWORD *)Pool2 + v7) = a2;
  ++*(_DWORD *)(a1 + 2920);
  ObfReferenceObject(a2);
  return 0LL;
}
