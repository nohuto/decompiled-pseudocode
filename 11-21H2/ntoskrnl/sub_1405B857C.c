/*
 * XREFs of sub_1405B857C @ 0x1405B857C
 * Callers:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B857C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 352);
  v2 = 8LL;
  do
  {
    result = (result << 8) | 0xA;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)(a1 + 352) = result;
  return result;
}
