/*
 * XREFs of sub_1800A8588 @ 0x1800A8588
 * Callers:
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003D66C @ 0x18003D66C (sub_18003D66C.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A8588(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180063BE4(a1, (__int64)v11, a2);
  sub_18003D66C(v11[0], (__int64)a3, a4, a5);
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  v10[0] = *a3;
  v10[1] = v8;
  sub_18006558C(a1, v10);
  sub_180010910((__int64)v11);
  sub_180010910((__int64)a3);
  return sub_180010910(a4);
}
