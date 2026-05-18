/*
 * XREFs of sub_18007FC10 @ 0x18007FC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007FC10(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  sub_180099DE8(a1, a2, 0LL);
  v8 = 0LL;
  v6[0] = &v8;
  v6[1] = &v9;
  sub_18007CA8C(v7, (__int64)v6, v4);
  sub_180098B8C(a1, a2, v7);
  return sub_1800105A8((__int64)v7);
}
