/*
 * XREFs of RtlpHpLfhBucketAllocateSlot @ 0x180065158
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180064FBC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1800673FC (RtlpHpLfhOwnerInitialize.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
