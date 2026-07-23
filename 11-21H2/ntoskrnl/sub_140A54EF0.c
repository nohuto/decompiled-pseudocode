/*
 * XREFs of sub_140A54EF0 @ 0x140A54EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BB680 @ 0x1403BB680 (sub_1403BB680.c)
 *     sub_140A54F8C @ 0x140A54F8C (sub_140A54F8C.c)
 *     sub_140A54FB4 @ 0x140A54FB4 (sub_140A54FB4.c)
 *     sub_140AF89EC @ 0x140AF89EC (sub_140AF89EC.c)
 */

__int64 __fastcall sub_140A54EF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  switch ( (_DWORD)a1 )
  {
    case 0x13:
      sub_140A54FB4((unsigned int)a2);
LABEL_8:
      sub_140A54F8C();
      return 0LL;
    case 0xD:
      off_140C01E20[0] = (__int64 (__fastcall *)())sub_14050AD80;
      off_140C02090[0] = (__int64 (__fastcall *)())sub_14050ADB0;
      off_140C01E30 = (__int64 (__fastcall *)())sub_14050B600;
      off_140C01E28[0] = (__int64 (__fastcall *)())sub_14050B160;
      off_140C02098[0] = (__int64 (__fastcall *)())sub_14050BB90;
      sub_140AF89EC();
      sub_140A54FB4(v2);
      qword_140C4D0D8 = 0LL;
      return 0LL;
    case 0x11:
      goto LABEL_8;
    case 0x15:
      sub_1403BB680(a1, a2);
      break;
  }
  return 0LL;
}
