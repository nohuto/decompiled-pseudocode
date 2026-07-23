/*
 * XREFs of MiDecommitLargePoolVa @ 0x140211A20
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201D04 (MiWriteTopLevelPxe.c)
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiFreeLargePageMemory @ 0x1402E7728 (MiFreeLargePageMemory.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r15
  __int64 ContainingPageTable; // rax
  unsigned __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 result; // rax
  bool v16; // zf
  __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v18[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v18, 0, 0xB8uLL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v6 = 0;
  LODWORD(v18[1]) = 20;
  v18[3] = 0LL;
  v17 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0LL);
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    MiWriteTopLevelPxe(a2, ZeroPte);
    goto LABEL_7;
  }
  v9 = ZeroPte;
  v10 = 0;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v12, v11, v13) )
    {
      v10 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_5;
      v16 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v16 = (ZeroPte & 1) == 0;
    }
    if ( !v16 )
      v9 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a2 = v9;
  if ( v10 )
    MiWritePteShadow(a2, v9);
LABEL_7:
  MiInsertLargeTbFlushEntry(v18, 1LL, a2);
  MiFlushTbList(v18);
  v14 = &MiLargePageSizes;
  do
  {
    if ( *v14 == a3 )
      break;
    ++v6;
    ++v14;
  }
  while ( v6 < 3 );
  result = MiFreeLargePageMemory(v7, v6, 4LL);
  _InterlockedExchangeAdd64(&qword_140C69998, -a3);
  return result;
}
