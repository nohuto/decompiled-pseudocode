/*
 * XREFs of sub_14077B394 @ 0x14077B394
 * Callers:
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     sub_1406E5780 @ 0x1406E5780 (sub_1406E5780.c)
 *     sub_140768E44 @ 0x140768E44 (sub_140768E44.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_1407734A4 @ 0x1407734A4 (sub_1407734A4.c)
 *     sub_140774E80 @ 0x140774E80 (sub_140774E80.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_14077747C @ 0x14077747C (sub_14077747C.c)
 *     sub_1407780BC @ 0x1407780BC (sub_1407780BC.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077AD94 @ 0x14077AD94 (sub_14077AD94.c)
 *     sub_14077AF18 @ 0x14077AF18 (sub_14077AF18.c)
 *     sub_14077B3D4 @ 0x14077B3D4 (sub_14077B3D4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 *     sub_14083F090 @ 0x14083F090 (sub_14083F090.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 *     sub_140948594 @ 0x140948594 (sub_140948594.c)
 *     sub_1409485D8 @ 0x1409485D8 (sub_1409485D8.c)
 *     sub_1409491C0 @ 0x1409491C0 (sub_1409491C0.c)
 * Callees:
 *     sub_140774E80 @ 0x140774E80 (sub_140774E80.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14077B394(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    sub_14077B4E4(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        sub_140774E80((__int64)v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
