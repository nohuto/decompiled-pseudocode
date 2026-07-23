/*
 * XREFs of sub_140373100 @ 0x140373100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140373100(__int64 a1, __int64 a2)
{
  char result; // al

  *(_DWORD *)(a2 + 40) = 0;
  result = *(_BYTE *)(a1 + 44);
  byte_140C1B310 = result;
  dword_140C1B314 = 1;
  return result;
}
