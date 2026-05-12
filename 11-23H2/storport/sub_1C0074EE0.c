/*
 * XREFs of sub_1C0074EE0 @ 0x1C0074EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0022D64 @ 0x1C0022D64 (sub_1C0022D64.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

__int64 __fastcall sub_1C0074EE0(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi

  v3 = *(IRP **)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 168);
  v6 = *(_QWORD *)(a1 + 224);
  v7 = v5 + *(unsigned int *)(v5 + 120);
  v8 = *(_QWORD *)(v6 + 24);
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
  {
    v3->IoStatus.Status = 0;
    v3->IoStatus.Information = *(unsigned int *)(v5 + 60);
  }
  if ( (*(_BYTE *)(a1 + 17) & 1) != 0 )
  {
    sub_1C0037008(v8, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(v8 + 4896) )
    sub_1C0008BB4(v8, 0LL, 0LL);
  if ( *(_BYTE *)(v7 + 72) == 1 )
  {
    sub_1C0008C44(a1, 0, a3);
    if ( a1 != 48 )
      sub_1C00084E4(v8, a1 - 48);
  }
  else
  {
    sub_1C0022D64(*(_QWORD *)(v6 + 664) + 64LL, (struct _SLIST_ENTRY *)(a1 - 48));
  }
  sub_1C000729C(v6);
  return sub_1C0003440(v3, 1, v3->IoStatus.Status);
}
