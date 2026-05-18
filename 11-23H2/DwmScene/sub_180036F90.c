/*
 * XREFs of sub_180036F90 @ 0x180036F90
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_18003092C @ 0x18003092C (sub_18003092C.c)
 *     sub_180031BFC @ 0x180031BFC (sub_180031BFC.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180036F90(__int64 a1)
{
  __int128 v3; // [rsp+30h] [rbp-20h] BYREF
  __int128 v4; // [rsp+40h] [rbp-10h] BYREF
  void *v5; // [rsp+60h] [rbp+10h] BYREF
  __int64 v6; // [rsp+68h] [rbp+18h] BYREF

  v6 = a1;
  *(_QWORD *)&v3 = sub_180036A60;
  DWORD2(v3) = 0;
  v4 = v3;
  sub_18003092C((__int64 *)&v5, &v4, &v6);
  *(_QWORD *)&v3 = o__beginthreadex(0LL, 0LL, sub_18002F640, v5, 0, (char *)&v3 + 8);
  if ( !(_QWORD)v3 )
  {
    DWORD2(v3) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180037049LL);
  }
  v5 = 0LL;
  sub_180031BFC(&v5);
  sub_1800321A0(a1 + 1184, &v3);
  return sub_180032108((__int64)&v3);
}
