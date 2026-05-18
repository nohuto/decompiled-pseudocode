/*
 * XREFs of sub_18008D634 @ 0x18008D634
 * Callers:
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008D634(__int64 *a1, _WORD *a2)
{
  _WORD *v3; // rdx
  __int64 result; // rax

  v3 = (_WORD *)a1[1];
  if ( v3 == (_WORD *)a1[2] )
    return sub_18008CB70(a1, (__int64)v3, a2);
  result = (unsigned __int16)*a2;
  *v3 = result;
  a1[1] += 2LL;
  return result;
}
