/*
 * XREFs of sub_140997DE0 @ 0x140997DE0
 * Callers:
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 */

void sub_140997DE0()
{
  __int64 v0; // rbx
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER v3; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C1FF60);
  v0 = 13 * ((unsigned int)dword_140C20048 + 2LL);
  sub_14039AD4C((__int64)&v1);
  qword_140C1FF80[v0 + 10] = v2;
  qword_140C1FF80[v0 + 11] = *((_QWORD *)&v1 + 1);
  qword_140C1FF80[v0 + 12] = KeQueryInterruptTimePrecise(&v3);
  sub_1402935D0((ULONG_PTR)&qword_140C1FF60);
}
