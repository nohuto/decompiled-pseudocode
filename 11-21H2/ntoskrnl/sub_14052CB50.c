/*
 * XREFs of sub_14052CB50 @ 0x14052CB50
 * Callers:
 *     sub_140522324 @ 0x140522324 (sub_140522324.c)
 *     sub_14052CC78 @ 0x14052CC78 (sub_14052CC78.c)
 * Callees:
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 */

__int64 __fastcall sub_14052CB50(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 8) )
    sub_1403BF310(*(_QWORD *)(a1 + 16), ((unsigned int)*(unsigned __int8 *)(a1 + 9) + 4095) >> 12, 0LL);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
