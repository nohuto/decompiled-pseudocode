/*
 * XREFs of sub_1403A39B8 @ 0x1403A39B8
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1403A379C @ 0x1403A379C (sub_1403A379C.c)
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 * Callees:
 *     sub_1403A39F4 @ 0x1403A39F4 (sub_1403A39F4.c)
 */

__int64 __fastcall sub_1403A39B8(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return sub_1403A39F4(a1, a3);
    }
  }
  return result;
}
