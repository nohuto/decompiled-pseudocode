/*
 * XREFs of sub_18009E190 @ 0x18009E190
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_18009E0F0 @ 0x18009E0F0 (sub_18009E0F0.c)
 */

__int64 *__fastcall sub_18009E190(__int64 a1)
{
  unsigned int i; // ebx
  __int64 *result; // rax

  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    result = (__int64 *)*(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, i) )
      result = sub_18009E0F0((__int64 *)(((unsigned __int64)i << 8) + a1 + 8), ((unsigned __int64)i << 8) + a1 + 3080);
  }
  return result;
}
