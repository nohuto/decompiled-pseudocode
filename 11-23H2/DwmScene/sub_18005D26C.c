/*
 * XREFs of sub_18005D26C @ 0x18005D26C
 * Callers:
 *     sub_180059FD0 @ 0x180059FD0 (sub_180059FD0.c)
 *     sub_18005B8E0 @ 0x18005B8E0 (sub_18005B8E0.c)
 *     sub_18005BF0C @ 0x18005BF0C (sub_18005BF0C.c)
 *     sub_18005D610 @ 0x18005D610 (sub_18005D610.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

char __fastcall sub_18005D26C(__int64 a1, __int64 *a2)
{
  char result; // al
  _QWORD *v5; // r8
  __int64 v6; // rcx

  result = sub_180011DF0(a2, (_QWORD *)(a1 + 136));
  if ( result )
  {
    sub_180011020(v5, a2);
    result = sub_18005D2CC(a1, 4LL);
  }
  v6 = a2[1];
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
