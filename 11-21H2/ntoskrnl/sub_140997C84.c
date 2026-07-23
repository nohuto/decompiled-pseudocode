/*
 * XREFs of sub_140997C84 @ 0x140997C84
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     sub_1403978A4 @ 0x1403978A4 (sub_1403978A4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D13F0 @ 0x1405D13F0 (sub_1405D13F0.c)
 *     sub_1405D1548 @ 0x1405D1548 (sub_1405D1548.c)
 *     sub_140811A68 @ 0x140811A68 (sub_140811A68.c)
 *     sub_140991AC0 @ 0x140991AC0 (sub_140991AC0.c)
 */

char __fastcall sub_140997C84(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r14
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+70h] [rbp-90h]
  _DWORD v17[60]; // [rsp+80h] [rbp-80h] BYREF

  v16 = 0;
  v17[1] = 0;
  memset(v15, 0, sizeof(v15));
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = 0;
  sub_140811A68(&v14);
  if ( a4 )
    return sub_1405D13F0(a2, a3, &v14);
  v9 = (a1[12] - a1[2]) / 0xAuLL;
  v10 = sub_1403978A4(a1[8], a1[10], v9);
  v12 = 0LL;
  if ( v10 != -1 )
    v12 = v10;
  qword_140C541C8 += v12;
  v13 = a1[11] - a1[9];
  qword_140C541D0 += v13;
  if ( qword_140C5ADB8 )
    sub_14042A5E0(v15, v11);
  memset(v17, 0, sizeof(v17));
  sub_1405D1548((__int64)v17, a2, a3, (__int64)&v14, v9, v12, v13, (__int64)v15);
  return sub_140991AC0((__int64)v17);
}
