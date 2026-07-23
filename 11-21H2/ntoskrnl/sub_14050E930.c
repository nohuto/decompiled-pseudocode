/*
 * XREFs of sub_14050E930 @ 0x14050E930
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_1403DD4C8 @ 0x1403DD4C8 (sub_1403DD4C8.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_14050EA90 @ 0x14050EA90 (sub_14050EA90.c)
 */

int sub_14050E930()
{
  _DWORD *v0; // rbx
  unsigned __int64 v1; // r8
  bool v2; // zf
  __int64 v3; // rcx
  unsigned int v4; // edx
  unsigned int v5; // eax
  int result; // eax
  signed __int32 v7[8]; // [rsp+0h] [rbp-78h] BYREF
  KINTERRUPT_MODE v8; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v9)(); // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  char v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  PKINTERRUPT *v14; // [rsp+58h] [rbp-20h]
  __int128 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v0 = (_DWORD *)qword_140C4E3E8;
  v18 = 0LL;
  v17 = 0LL;
  sub_1403DD4C8(qword_140C4E3E8, &v17, &v16);
  v1 = v17;
  if ( v17 > 0xB2D05E00 )
    v1 = 3000000000LL;
  v17 = v1;
  qword_140C4C690 = v1;
  v2 = (v0[56] & 0x80000) == 0;
  qword_140C4C6A0 = v1 >> 2;
  if ( v2 )
    goto LABEL_7;
  v14 = (PKINTERRUPT *)&v18;
  v3 = 0LL;
  v13 = 5;
  if ( LOWORD(dword_140D06E40[0]) )
    v3 = qword_140D06E48[0];
  v12 = 15;
  v11 = 0LL;
  v10 = 0LL;
  v4 = v0[22];
  v9 = sub_140521CF0;
  v8 = v0[24];
  v5 = v0[23];
  v15 = (unsigned __int64)v3;
  result = sub_140507ED8(&v15, v4, 0xF0u, 0xFu, v5, v8, (unsigned __int64)sub_140521CF0, 0LL, 0LL, 0xFu, v13, v14);
  if ( result >= 0 )
  {
LABEL_7:
    _InterlockedOr(v7, 0);
    off_140C01F18[0] = sub_14050EB20;
    off_140C01F08[0] = sub_14050EA90;
    off_140C01F20[0] = sub_140824800;
    off_140C01F28[0] = (__int64 (__fastcall *)())sub_14050EB80;
    off_140C01FB8[0] = (__int64 (__fastcall *)())sub_14039EC90;
    _InterlockedOr(v7, 0);
    sub_14050EA90();
    _InterlockedOr(v7, 0);
    off_140C01F10[0] = sub_14039FE90;
    return 0;
  }
  return result;
}
