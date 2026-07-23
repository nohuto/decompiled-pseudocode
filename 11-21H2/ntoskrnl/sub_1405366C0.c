/*
 * XREFs of sub_1405366C0 @ 0x1405366C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_1405366C0(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax

  *(_DWORD *)(a1 + 16) |= 0x40u;
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 108);
  if ( v2 )
  {
    while ( (v2 & 1) == 0 )
    {
      ++v1;
      v2 >>= 1;
      if ( !v2 )
        return sub_1403A2E60(a1, v1);
    }
    *(_DWORD *)(a1 + 16) &= ~0x40u;
  }
  return sub_1403A2E60(a1, v1);
}
