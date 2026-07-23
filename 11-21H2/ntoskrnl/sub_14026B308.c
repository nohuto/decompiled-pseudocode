/*
 * XREFs of sub_14026B308 @ 0x14026B308
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026B308(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = result;
  a2[1] = a1;
  *(_QWORD *)(result + 8) = a2;
  *a1 = (__int64)a2;
  return result;
}
