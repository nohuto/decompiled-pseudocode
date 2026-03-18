/*
 * XREFs of ObpDereferenceNamedObject @ 0x14035BFC8
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1406C0ABC (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObpDeleteNameCheck @ 0x140740140 (ObpDeleteNameCheck.c)
 */

LONG_PTR __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  return ObfDereferenceObject((PVOID)(a1 + 48));
}
