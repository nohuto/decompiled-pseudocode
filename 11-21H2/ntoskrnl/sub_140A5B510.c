/*
 * XREFs of sub_140A5B510 @ 0x140A5B510
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AF322C @ 0x140AF322C (sub_140AF322C.c)
 *     sub_140B26CFC @ 0x140B26CFC (sub_140B26CFC.c)
 *     sub_140B26D98 @ 0x140B26D98 (sub_140B26D98.c)
 */

__int64 __fastcall sub_140A5B510(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 26 )
      sub_140B26D98();
  }
  else
  {
    qword_140C4BCA8 = 0LL;
    sub_140B26CFC(a3);
    sub_140AF322C();
  }
  return 0LL;
}
