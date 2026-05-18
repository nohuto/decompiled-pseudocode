/*
 * XREFs of sub_18004730C @ 0x18004730C
 * Callers:
 *     sub_1800472E8 @ 0x1800472E8 (sub_1800472E8.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_180047A20 @ 0x180047A20 (sub_180047A20.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18004730C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180047A20(a2, a4);
  sub_18002A0C4(a1 + 808, (__int64)v9);
  v8 = 0LL;
  v6 = a2[1];
  if ( v6 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  sub_180011D0C((__int64 *)(a1 + 864), &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v8 + 1));
  sub_180010F54((__int64)v9);
  sub_180033280(a1, *a2);
  return a2;
}
