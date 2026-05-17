/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x1800558D4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpHpMetadataHeapStart(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 )
    return 0LL;
  else
    return RtlRunOnceExecuteOnce(
             (volatile signed __int64 *)(a1 + 8),
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))RtlpHpMetadataHeapCreate,
             a2,
             0LL);
}
