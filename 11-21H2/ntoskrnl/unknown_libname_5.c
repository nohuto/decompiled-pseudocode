/*
 * XREFs of unknown_libname_5 @ 0x140AAE9C8
 * Callers:
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 */

// Windows Driver Kit 7/10 64bit
void __fastcall unknown_libname_5(__int64 a1)
{
  if ( a1 )
  {
    sub_140AAEAF4(*(_QWORD *)(a1 + 24));
    sub_1403A8CB4(a1);
  }
}
