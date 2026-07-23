/*
 * XREFs of sub_140B151EC @ 0x140B151EC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1406EBC90 @ 0x1406EBC90 (sub_1406EBC90.c)
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 */

void sub_140B151EC()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v0 = (char *)&unk_140D05FE0;
  v1 = 54LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140C1D088;
    do
    {
      *v3 |= v2;
      v3 += 534;
    }
    while ( (__int64)v3 < (__int64)qword_140C1F1E8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140C1F200 = -1LL;
  qword_140C1D060[0] = (__int64)aDefault_1;
  xmmword_140C1D06C = *(_OWORD *)&xmmword_140010DE8;
  dword_140C1D07C = 2;
  sub_14083113C((__int64)qword_140C1D060, (__int64)v0);
  sub_1406EBC90((__int64)qword_140C1D060, MEMORY[0xFFFFF78000000008]);
  qsort(&off_140D05FC0, 0x36uLL, 0x28uLL, sub_140B24010);
  sub_140224C00(&qword_140C22FE0);
}
