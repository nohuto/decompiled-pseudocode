/*
 * XREFs of RtlpHpFreeVA @ 0x1800478C4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x18004AEC8 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x180065774 (RtlpHpSegMgrRelease.c)
 *     RtlpHpHeapAllocate @ 0x180066408 (RtlpHpHeapAllocate.c)
 *     RtlpHpLargeReAlloc @ 0x18008E00C (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1801220A0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x180064890 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1801188D8 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpFreeVA(PVOID *a1, ULONG_PTR *a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  char *v9; // rcx
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // rdx
  __int64 v13[2]; // [rsp+30h] [rbp-18h]

  v4 = a3 & 0xFEFFFFFF;
  v5 = 0;
  *(_OWORD *)v13 = *a4;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(v13[0]) != 4 )
      v5 = RtlpHpEnvFreeVA(a1, a2, v13[1]);
  }
  else
  {
    v9 = (char *)*a1;
    v10 = &v9[*a2];
    v11 = (unsigned __int64)(v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = (ULONG_PTR)&v10[-v11];
    *a1 = (PVOID)v11;
    *a2 = v12;
    if ( !v12 )
      return v5;
    RtlpHpVaMgrCtxFree(&unk_180185A08, a1, a2);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v4, *a2, *a1, v5);
  return v5;
}
