/*
 * XREFs of sub_14055D808 @ 0x14055D808
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055D808(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_140593218(a1, a2, 88LL);
  if ( (int)result >= 0 )
  {
    result = sub_140593218(a1, *(_QWORD *)(a2 + 48), *(unsigned __int16 *)(a2 + 40) + 2LL);
    if ( (int)result >= 0 )
      return sub_140593218(a1, *(_QWORD *)(a2 + 64), *(unsigned __int16 *)(a2 + 56) + 2LL);
  }
  return result;
}
