/*
 * XREFs of sub_1407FE640 @ 0x1407FE640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_1409A4510 @ 0x1409A4510 (sub_1409A4510.c)
 */

__int64 __fastcall sub_1407FE640(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v4; // [rsp+40h] [rbp-30h] BYREF
  __int128 v5; // [rsp+50h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-10h]
  unsigned int v7; // [rsp+88h] [rbp+18h] BYREF

  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 2;
  sub_140809310(a1, v3);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  v7 = -1;
  LOBYTE(v1) = 1;
  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  sub_1407FE700(v1, &v7);
  if ( sub_1407F0F98() )
  {
    sub_1409A4510(v7, 0LL);
  }
  else
  {
    v4 = 5uLL;
    v5 = 0uLL;
    v6 = 0LL;
    sub_1407F2AD0(5, (__int64)&v4, 1, &v7);
  }
  sub_1407FE700(0LL, &v7);
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  return 0LL;
}
