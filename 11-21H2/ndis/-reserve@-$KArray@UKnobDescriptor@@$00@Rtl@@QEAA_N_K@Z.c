/*
 * XREFs of ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0115958
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

char __fastcall Rtl::KArray<KnobDescriptor,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v5; // rsi
  void *v6; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(0x30uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48 * a2, 0x7272414Bu);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a1 + 1), 48LL * a1[1]);
      v6 = (void *)*((_QWORD *)a1 + 1);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x7272414Bu);
      *a1 = v2;
      *((_QWORD *)a1 + 1) = v5;
      return 1;
    }
  }
  return 0;
}
