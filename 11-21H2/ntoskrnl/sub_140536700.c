/*
 * XREFs of sub_140536700 @ 0x140536700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140536700(_DWORD *a1)
{
  int v1; // eax
  int v3; // ecx
  unsigned int v4; // r9d

  v1 = a1[30];
  a1[4] |= 0x40u;
  v3 = 8 * v1 + 7;
  v4 = a1[27];
  if ( v4 )
  {
    while ( ((v4 >> v3) & 1) == 0 )
      --v3;
    a1[4] &= ~0x40u;
  }
  return sub_1403A2E60((__int64)a1, v3);
}
