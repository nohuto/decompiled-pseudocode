/*
 * XREFs of sub_1406BAEA0 @ 0x1406BAEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406BAEF0 @ 0x1406BAEF0 (sub_1406BAEF0.c)
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 */

__int64 __fastcall sub_1406BAEA0(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1406BAFD4(1, (unsigned int)L"WindowsSysPartDevice", 0, 0, 0, a2);
  if ( (int)result < 0 )
    return sub_1406BAEF0(a1, a2);
  return result;
}
