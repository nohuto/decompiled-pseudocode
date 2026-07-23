/*
 * XREFs of sub_140A8798C @ 0x140A8798C
 * Callers:
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A895A4 @ 0x140A895A4 (sub_140A895A4.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A88AFC @ 0x140A88AFC (sub_140A88AFC.c)
 */

void __fastcall sub_140A8798C(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // rbx

  if ( a4 != a2 )
  {
    if ( a4 )
    {
      v7 = a3 + a4;
      v8 = a1 + a2 - v7;
      v9 = a3 - a1 - 8;
      if ( a3 - a1 < 8 )
        v9 = a3 - a1;
      if ( v8 >= 8 )
      {
        v8 -= 8LL;
        v7 += 8LL;
      }
      sub_140A87B3C(a3, a4);
      v10 = sub_140A88AFC(a1, v9);
      if ( v10 )
      {
        sub_140A88948(
          byte_140C0D934,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        sub_1405FFA20(0xE6u, 0xFuLL, 4uLL, a3, v10, byte_140C0D934);
      }
      v11 = sub_140A88AFC(v7, v8);
      if ( v11 )
      {
        sub_140A88948(
          byte_140C0D938,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        sub_1405FFA20(0xE6u, 0xFuLL, 5uLL, a3, v11, byte_140C0D938);
      }
    }
    else
    {
      v6 = sub_140A88AFC(a1, a2);
      if ( v6 )
      {
        sub_140A88948(
          &dword_140C0D930,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        sub_1405FFA20(0xE6u, 0xFuLL, 3uLL, v6, 0LL, &dword_140C0D930);
      }
    }
  }
}
