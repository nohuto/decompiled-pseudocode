/*
 * XREFs of sub_1406ACB40 @ 0x1406ACB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140234678 @ 0x140234678 (sub_140234678.c)
 */

__int64 __fastcall sub_1406ACB40(__int64 a1, KSPIN_LOCK *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (__int64)a2;
  if ( a4 == 1 )
    return sub_140234678(a2, 1);
  return result;
}
