/*
 * XREFs of sub_14033A474 @ 0x14033A474
 * Callers:
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14033A474(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int16 v3; // ax

  v2 = 1;
  v3 = sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v3 & 1) == 0 )
    return (v3 & 0xC00) == 2048LL;
  return v2;
}
