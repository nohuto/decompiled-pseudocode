/*
 * XREFs of sub_18004D364 @ 0x18004D364
 * Callers:
 *     sub_18004D418 @ 0x18004D418 (sub_18004D418.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_18004E210 @ 0x18004E210 (sub_18004E210.c)
 */

__int64 *__fastcall sub_18004D364(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_18004E210(a2);
  sub_18002A0C4(a1 + 808, (__int64)v7);
  v6 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    *(_QWORD *)&v6 = *a2;
    *((_QWORD *)&v6 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180011D0C((__int64 *)(a1 + 864), &v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v6 + 1));
  sub_180010F54((__int64)v7);
  sub_180033280(a1, *a2);
  return a2;
}
