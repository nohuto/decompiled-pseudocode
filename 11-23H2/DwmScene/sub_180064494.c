/*
 * XREFs of sub_180064494 @ 0x180064494
 * Callers:
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180064494(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  char v5; // bl
  _WORD *v6; // rdx
  __int64 v7; // r8
  _WORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  char v12; // di
  _QWORD v14[2]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-31h]
  unsigned __int64 v16; // [rsp+40h] [rbp-29h]
  _QWORD v17[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-11h]
  unsigned __int64 v19; // [rsp+60h] [rbp-9h]
  _BYTE v20[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v21[32]; // [rsp+88h] [rbp+1Fh] BYREF

  sub_18001E3BC(v17, (__int64)L"Lighting.");
  sub_18001E3BC(v14, (__int64)L"/Internal/Lighting.");
  v4 = (_QWORD *)sub_18001FAFC(a2, (__int64)v21, 0LL, v18);
  v5 = 1;
  v6 = v17;
  if ( v19 >= 8 )
    v6 = (_WORD *)v17[0];
  v7 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  if ( v7 == v18 && !(unsigned int)sub_18001F810((__int64)v4, v6, v7) )
    goto LABEL_13;
  v11 = (_QWORD *)sub_18001FAFC(a2, (__int64)v20, 0LL, v15);
  v5 = 3;
  v8 = v14;
  if ( v16 >= 8 )
    v8 = (_WORD *)v14[0];
  v9 = v11[2];
  if ( v11[3] >= 8uLL )
    v11 = (_QWORD *)*v11;
  if ( v9 != v15 || (unsigned int)sub_18001F810((__int64)v11, v8, v9) )
    v12 = 0;
  else
LABEL_13:
    v12 = 1;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    sub_180013348((__int64)v20);
  }
  if ( (v5 & 1) != 0 )
    sub_180013348((__int64)v21);
  if ( v12 )
  {
    LOBYTE(v8) = 1;
    sub_1800401E8(*a1 + 1464LL, (__int64)v8, v9, v10);
  }
  sub_180013348((__int64)v14);
  return sub_180013348((__int64)v17);
}
