/*
 * XREFs of sub_140841AE8 @ 0x140841AE8
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 *     sub_1408421F4 @ 0x1408421F4 (sub_1408421F4.c)
 *     sub_1408422F0 @ 0x1408422F0 (sub_1408422F0.c)
 */

__int64 __fastcall sub_140841AE8(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v3 = sub_1408422F0(&v9, &v10, a2);
  if ( v3 < 0 )
  {
    if ( (unsigned int)(v3 + 1073741687) > 2 )
      sub_1406E0C3C(3LL, (__int64)"AslpFileGetVersionAttributes");
    v4 = 0LL;
  }
  else
  {
    v4 = v10;
  }
  sub_1408421F4(a1, v4);
  v7 = sub_140841B4C(v5, v6);
  if ( v7 < 0 )
    sub_1406E0C3C(1LL, (__int64)"AslpFileGetVersionAttributes");
  else
    return 0;
  return (unsigned int)v7;
}
