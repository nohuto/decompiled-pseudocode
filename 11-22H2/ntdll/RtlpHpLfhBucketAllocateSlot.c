/*
 * XREFs of RtlpHpLfhBucketAllocateSlot @ 0x180065288
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800650EC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x180067418 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpHpLfhBucketAllocateSlot(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  void *v5; // rax
  void *v6; // rbx

  v5 = (void *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1LL) << 6);
  v6 = v5;
  if ( v5 )
  {
    memset_thunk_772440563353939046(v5, 0, 0x40uLL);
    RtlpHpLfhOwnerInitialize(v6, *(unsigned __int8 *)(a2 + 1), a3);
  }
  return v6;
}
