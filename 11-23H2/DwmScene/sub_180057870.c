/*
 * XREFs of sub_180057870 @ 0x180057870
 * Callers:
 *     sub_180057168 @ 0x180057168 (sub_180057168.c)
 * Callees:
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_180057084 @ 0x180057084 (sub_180057084.c)
 *     sub_180057320 @ 0x180057320 (sub_180057320.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  void *v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+60h] [rbp+20h] BYREF

  sub_1800401E8(a1 + 426, 0LL, a3, a4);
  LOBYTE(v5) = 1;
  sub_1800401E8(a1 + 425, v5, v6, v7);
  v11 = a1;
  v12 = sub_180058240;
  sub_180057084(&v10, &v12, &v11);
  *(_QWORD *)&v9 = o__beginthreadex(0LL, 0LL, sub_180056F70, v10, 0, (char *)&v9 + 8);
  if ( !(_QWORD)v9 )
  {
    DWORD2(v9) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180057935LL);
  }
  v10 = 0LL;
  sub_180057320(&v10);
  sub_1800321A0(a1 + 104, &v9);
  return sub_180032108((__int64)&v9);
}
