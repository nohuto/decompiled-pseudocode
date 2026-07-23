/*
 * XREFs of sub_14027466C @ 0x14027466C
 * Callers:
 *     sub_1402538D0 @ 0x1402538D0 (sub_1402538D0.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027466C(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 >= 5 || a2 <= a3 )
    *(_DWORD *)(a1 + 192) &= ~0x80000u;
  else
    *(_DWORD *)(a1 + 192) |= 0x80000u;
  result = ((a3 & 7) << 12) | *(_DWORD *)(a1 + 192) & 0xFFFF81FF | ((a3 & 7) << 9) & 0x8FFF;
  *(_DWORD *)(a1 + 192) = result;
  return result;
}
