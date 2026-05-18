/*
 * XREFs of sub_18009BBB8 @ 0x18009BBB8
 * Callers:
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 * Callees:
 *     sub_18001EA20 @ 0x18001EA20 (sub_18001EA20.c)
 *     sub_180098544 @ 0x180098544 (sub_180098544.c)
 */

__int64 __fastcall sub_18009BBB8(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t *v5; // r11
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64)a2;
  if ( (unsigned __int64)a2[3] >= 0x10 )
    v2 = *a2;
  v3 = sub_18001EA20(v2, a2[2]);
  sub_180098544(v4, &v7, v5, v3);
  if ( !v8 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18009BC0DLL);
  }
  return v8 + 48;
}
