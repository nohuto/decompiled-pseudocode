/*
 * XREFs of sub_14045BA46 @ 0x14045BA46
 * Callers:
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 * Callees:
 *     sub_1405943C0 @ 0x1405943C0 (sub_1405943C0.c)
 */

__int64 __fastcall sub_14045BA46(__int64 a1)
{
  __int64 result; // rax

  if ( a1 == qword_140C53280 )
    return 1LL;
  result = sub_1405943C0();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
