/*
 * XREFs of sub_1402380FC @ 0x1402380FC
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 */

__int64 __fastcall sub_1402380FC(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  __int64 result; // rax

  v2 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 1 : 8;
  for ( i = 0; i < v2; ++i )
    result = sub_14023814C(a1, i, 0xFFFFFFFFLL);
  return result;
}
