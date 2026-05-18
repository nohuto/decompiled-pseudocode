/*
 * XREFs of sub_18006FD7C @ 0x18006FD7C
 * Callers:
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 * Callees:
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 *     sub_180070104 @ 0x180070104 (sub_180070104.c)
 *     sub_180070668 @ 0x180070668 (sub_180070668.c)
 *     sub_180097460 @ 0x180097460 (sub_180097460.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006FD7C(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 8LL;
  v4 = sub_180070668(a1, 8LL);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4 + 1024;
  v6 = a1;
  do
  {
    sub_180097460(v4);
    v4 += 128LL;
    --v3;
  }
  while ( v3 );
  sub_18006FE14(v4, v4);
  a1[1] = v4;
  v6 = 0LL;
  return sub_180070104(&v6);
}
