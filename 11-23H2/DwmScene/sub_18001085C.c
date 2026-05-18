/*
 * XREFs of sub_18001085C @ 0x18001085C
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     sub_18008E7A8 @ 0x18008E7A8 (sub_18008E7A8.c)
 *     sub_180093F40 @ 0x180093F40 (sub_180093F40.c)
 *     sub_1800964B0 @ 0x1800964B0 (sub_1800964B0.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010CE4 @ 0x180010CE4 (sub_180010CE4.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18001085C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180010CE4(a2);
  sub_18002A0C4(a1 + 808, v7);
  v6 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    *(_QWORD *)&v6 = *a2;
    *((_QWORD *)&v6 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180011D0C(a1 + 864, &v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v6 + 1));
  sub_180010F54(v7);
  sub_180033280(a1, *a2, 0LL);
  return a2;
}
