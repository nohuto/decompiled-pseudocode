/*
 * XREFs of sub_1402022BC @ 0x1402022BC
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall sub_1402022BC(__int64 a1)
{
  __int64 result; // rax

  ObfReferenceObjectWithTag((PVOID)(a1 + 48), 0x746C6644u);
  result = byte_140C25440[*(_BYTE *)(a1 + 26) & 3];
  _InterlockedIncrement((volatile signed __int32 *)(a1 - result + 24));
  return result;
}
