/*
 * XREFs of sub_1800532F0 @ 0x1800532F0
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180014558 @ 0x180014558 (sub_180014558.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18002B6CC @ 0x18002B6CC (sub_18002B6CC.c)
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_1800506D4 @ 0x1800506D4 (sub_1800506D4.c)
 *     sub_18008E828 @ 0x18008E828 (sub_18008E828.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800532F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v11; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v12[96]; // [rsp+50h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x800000) != 0 )
  {
    v7 = (__int64 *)sub_18004871C(a1, &v11);
    sub_18001483C(*v7, v10);
    sub_180010910((__int64)&v11);
    if ( v10[0] )
    {
      sub_18002B6CC((__int64)v12, 12LL, 8LL, sub_1800108D0);
      v8 = sub_180014558((__int64)v10);
      v9 = (unsigned __int64 *)sub_1800462C0(v8);
      sub_1800506D4(v9, (__int64)v12);
      sub_18008E828(a1);
    }
    return sub_180010910((__int64)v10);
  }
  return result;
}
