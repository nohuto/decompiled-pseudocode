/*
 * XREFs of RtlpHpFreeVA @ 0x180021224
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrReserve @ 0x18005675C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18011FCA8 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18011FE14 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x180057B70 (RtlpHpVaMgrCtxFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     RtlpHpTlLogVAChange @ 0x1801184DC (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3, __int128 *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-18h]

  v4 = a3 & 0xFEFFFFFF;
  v5 = 0;
  v13 = *a4;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(v13) < 4u )
      v5 = ZwFreeVirtualMemory(-1LL, a1, a2, (unsigned __int16)a3 & 0xC000);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( !v12 )
      return v5;
    RtlpHpVaMgrCtxFree(&unk_18017B768, a1, a2);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v4, *a2, *a1, v5, v13, *((_QWORD *)&v13 + 1));
  return v5;
}
