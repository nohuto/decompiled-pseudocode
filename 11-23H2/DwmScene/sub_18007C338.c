/*
 * XREFs of sub_18007C338 @ 0x18007C338
 * Callers:
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 * Callees:
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004DF24 @ 0x18004DF24 (sub_18004DF24.c)
 *     sub_18004E718 @ 0x18004E718 (sub_18004E718.c)
 *     sub_1800508F0 @ 0x1800508F0 (sub_1800508F0.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_18007C338(void **Src, __int64 a2, _QWORD *a3, int a4)
{
  int v8; // ebx
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  sub_18004E718((__int64 *)v10);
  if ( a4 > 0 )
  {
    do
    {
      if ( ((1LL << v8) & a2) != 0 )
        sub_18004DF24((__int64 *)v10, (__int64)v11, a3);
      ++v8;
      a3 += 4;
    }
    while ( v8 < a4 );
  }
  sub_1800508F0(Src, (__int64 **)v10);
  sub_18004D8C4(v10, (__int64)v10);
  return Src;
}
