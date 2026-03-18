/*
 * XREFs of HalpDmaFreeLa @ 0x140504358
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140516D80 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140517BAC (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x140504DAC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 */

__int64 __fastcall HalpDmaFreeLa(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v6 = *(_OWORD *)(a1 + 248);
  ((void (__fastcall *)(__int64 *))qword_140C4BE08)(a2);
  if ( v3 == *(_QWORD *)(a1 + 552) )
    return HalpDmaReturnEmergencyLogicalAddressResources((PDMA_ADAPTER)a1);
  result = 0LL;
  v5 = &v6;
  while ( !*(_QWORD *)v5 || v3 != *(_QWORD *)(*(_QWORD *)v5 + 24LL) )
  {
    result = (unsigned int)(result + 1);
    v5 = (__int128 *)((char *)v5 + 8);
    if ( (unsigned int)result >= 2 )
      return ((__int64 (__fastcall *)(__int64, __int128 *))qword_140C4BDF8)(v3, v5);
  }
  return result;
}
