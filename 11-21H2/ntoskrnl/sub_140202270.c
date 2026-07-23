/*
 * XREFs of sub_140202270 @ 0x140202270
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 */

LONG_PTR __fastcall sub_140202270(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - byte_140C25440[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    sub_1407A3190(a1);
  return ObfDereferenceObject((PVOID)(a1 + 48));
}
