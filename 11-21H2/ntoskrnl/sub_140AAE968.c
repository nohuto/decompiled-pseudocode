/*
 * XREFs of sub_140AAE968 @ 0x140AAE968
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 *     sub_140B572D0 @ 0x140B572D0 (sub_140B572D0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     unknown_libname_5 @ 0x140AAE9C8 (unknown_libname_5.c)
 */

void __fastcall sub_140AAE968(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  sub_1403A7C40();
  if ( a1 == off_140C04D00 )
  {
    v2 = qword_140CE1AD8;
    if ( qword_140CE1AD8 )
    {
      if ( *(_QWORD *)(qword_140CE1AD8 + 40) )
      {
        unknown_libname_5(*(_QWORD *)(qword_140CE1AD8 + 40));
        v2 = qword_140CE1AD8;
      }
      sub_1403A8CB4(v2);
      qword_140CE1AD8 = 0LL;
    }
  }
  sub_1403A7BF0();
}
