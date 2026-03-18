/*
 * XREFs of MiDereferenceInPageAutoBoostLock @ 0x1402BD418
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x1402BD2FC (MiFreeInPageSupportBlock.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1407DC90C (MiPrefetchControlArea.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceInPageAutoBoostLock(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
