/*
 * XREFs of sub_1405519D0 @ 0x1405519D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140551760 @ 0x140551760 (sub_140551760.c)
 *     sub_140551A30 @ 0x140551A30 (sub_140551A30.c)
 */

__int64 __fastcall sub_1405519D0(char a1, __int64 a2)
{
  if ( a1 )
  {
    if ( dword_140C54D50 )
      sub_140551760();
  }
  else if ( dword_140C54D50 != 2 )
  {
    sub_140551A30(0LL);
  }
  sub_1403A78F0(a1, a2);
  return 0LL;
}
