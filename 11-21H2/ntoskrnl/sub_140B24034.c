/*
 * XREFs of sub_140B24034 @ 0x140B24034
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_140851878 @ 0x140851878 (sub_140851878.c)
 */

__int64 sub_140B24034()
{
  __int64 v0; // rax
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v3[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v4; // [rsp+40h] [rbp-10h]
  int v5; // [rsp+42h] [rbp-Eh]
  __int16 v6; // [rsp+46h] [rbp-Ah]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF

  v3[1] = (unsigned __int16 *)qword_140D06E48[0];
  v3[0] = (unsigned __int16 *)dword_140D06E40;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v3) )
  {
    v0 = sub_140348800(v7);
    result = sub_140851878(v0);
    if ( (int)result < 0 )
      return result;
  }
  word_140C2A8C2 = 0;
  sub_1403588EC((__int64)&unk_140C2A8C0, (__int64)sub_14023C6B0, 0LL, 8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  KeSetTimer2((__int64)&unk_140C2A8C0, -900000000LL, 900000000LL, (__int64)v2);
  return 0LL;
}
