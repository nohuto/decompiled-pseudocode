/*
 * XREFs of sub_18004C8D0 @ 0x18004C8D0
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_18004A3DC @ 0x18004A3DC (sub_18004A3DC.c)
 *     sub_180081538 @ 0x180081538 (sub_180081538.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004C8D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  __int64 v10; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-A0h]
  __int128 v12; // [rsp+50h] [rbp-98h]
  __int128 v13; // [rsp+60h] [rbp-88h]
  _BYTE v14[96]; // [rsp+70h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x800000) != 0 )
  {
    v7 = sub_18004330C(a1, &v10);
    result = (__int64)sub_180013E14(*v7, &v8);
    if ( v11 )
      result = sub_180010530(v11);
    if ( v8 )
    {
      sub_1800294DC((__int64)v14, 12LL, 8LL, sub_180010200);
      sub_18004A3DC((unsigned __int64 *)(v8 + 88), (__int64)v14);
      v12 = xmmword_18019B910;
      v13 = xmmword_18019B910;
      sub_180081538(a1);
    }
    if ( v9 )
      return sub_180010530(v9);
  }
  return result;
}
