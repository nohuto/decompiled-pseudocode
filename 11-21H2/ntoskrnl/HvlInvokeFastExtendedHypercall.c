/*
 * XREFs of HvlInvokeFastExtendedHypercall @ 0x14039DD80
 * Callers:
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_14039DA74 @ 0x14039DA74 (sub_14039DA74.c)
 *     sub_14039DC8C @ 0x14039DC8C (sub_14039DC8C.c)
 *     sub_1404175E0 @ 0x1404175E0 (sub_1404175E0.c)
 *     sub_140544A28 @ 0x140544A28 (sub_140544A28.c)
 *     sub_140545BD8 @ 0x140545BD8 (sub_140545BD8.c)
 *     sub_140545D80 @ 0x140545D80 (sub_140545D80.c)
 *     sub_140545E50 @ 0x140545E50 (sub_140545E50.c)
 *     sub_140545F70 @ 0x140545F70 (sub_140545F70.c)
 *     sub_140546040 @ 0x140546040 (sub_140546040.c)
 *     sub_1405460D0 @ 0x1405460D0 (sub_1405460D0.c)
 *     sub_140546150 @ 0x140546150 (sub_140546150.c)
 *     sub_140546300 @ 0x140546300 (sub_140546300.c)
 *     sub_1405465C0 @ 0x1405465C0 (sub_1405465C0.c)
 *     sub_1405467D0 @ 0x1405467D0 (sub_1405467D0.c)
 *     sub_140546900 @ 0x140546900 (sub_140546900.c)
 *     sub_1405484D0 @ 0x1405484D0 (sub_1405484D0.c)
 *     sub_140548790 @ 0x140548790 (sub_140548790.c)
 *     sub_140548880 @ 0x140548880 (sub_140548880.c)
 *     sub_1405488E0 @ 0x1405488E0 (sub_1405488E0.c)
 *     sub_140548960 @ 0x140548960 (sub_140548960.c)
 *     sub_140548A40 @ 0x140548A40 (sub_140548A40.c)
 *     sub_140548A90 @ 0x140548A90 (sub_140548A90.c)
 *     sub_140548B10 @ 0x140548B10 (sub_140548B10.c)
 *     sub_140548B70 @ 0x140548B70 (sub_140548B70.c)
 *     sub_140548F40 @ 0x140548F40 (sub_140548F40.c)
 *     sub_140548FF0 @ 0x140548FF0 (sub_140548FF0.c)
 *     sub_140549070 @ 0x140549070 (sub_140549070.c)
 *     sub_1405491B0 @ 0x1405491B0 (sub_1405491B0.c)
 *     sub_140549218 @ 0x140549218 (sub_140549218.c)
 *     sub_1405492D8 @ 0x1405492D8 (sub_1405492D8.c)
 *     sub_14054934C @ 0x14054934C (sub_14054934C.c)
 *     sub_1405493A8 @ 0x1405493A8 (sub_1405493A8.c)
 *     sub_140549468 @ 0x140549468 (sub_140549468.c)
 *     sub_140549510 @ 0x140549510 (sub_140549510.c)
 *     sub_14054B620 @ 0x14054B620 (sub_14054B620.c)
 *     sub_14054CB14 @ 0x14054CB14 (sub_14054CB14.c)
 *     sub_14054CBD0 @ 0x14054CBD0 (sub_14054CBD0.c)
 *     sub_1406538B4 @ 0x1406538B4 (sub_1406538B4.c)
 *     sub_140653AA4 @ 0x140653AA4 (sub_140653AA4.c)
 *     sub_140931378 @ 0x140931378 (sub_140931378.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042BA10 @ 0x14042BA10 (sub_14042BA10.c)
 *     sub_14042BA70 @ 0x14042BA70 (sub_14042BA70.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

__int64 __fastcall HvlInvokeFastExtendedHypercall(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rdi
  int v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+34h] [rbp-34h]
  __int16 v15; // [rsp+35h] [rbp-33h]
  char v16; // [rsp+37h] [rbp-31h]
  _OWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( (BYTE4(xmmword_140D06910) & 0x10) != 0 )
  {
    v9 = 1;
    sub_140223A20((unsigned __int64)v17, 0xA0000010uLL);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = sub_14042BA70(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
  else
    v10 = sub_14042BA10(a1, a2, a3);
  v11 = v10;
  if ( v9 )
  {
    v16 = 0;
    v13 = (unsigned __int16)a1;
    v14 = BYTE2(a1) & 1;
    v15 = (int)a1 < 0;
    sub_14045FBE2(3954, -1610612720, (unsigned int)&v13, 8, 4200962, (__int64)v17);
  }
  return v11;
}
