/*
 * XREFs of sub_14076DC84 @ 0x14076DC84
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_14076DC84(int a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = (__int64 *)&off_140007EB0;
  v3 = 2LL;
  do
  {
    result = sub_14077198C(qword_140D00AC0, a1, 1, 0LL, *v1++, 0, 0LL, 0, 0);
    --v3;
  }
  while ( v3 );
  return result;
}
