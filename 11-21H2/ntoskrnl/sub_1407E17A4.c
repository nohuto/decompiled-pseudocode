/*
 * XREFs of sub_1407E17A4 @ 0x1407E17A4
 * Callers:
 *     sub_1406E1BD4 @ 0x1406E1BD4 (sub_1406E1BD4.c)
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 * Callees:
 *     sub_1406E78D8 @ 0x1406E78D8 (sub_1406E78D8.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 *     sub_1407E4374 @ 0x1407E4374 (sub_1407E4374.c)
 *     sub_140A0F8CC @ 0x140A0F8CC (sub_140A0F8CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E17A4(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  char *v5; // rsi
  char *v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_1407E3BE4(P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_1406E78D8((__int64)(P + 22));
    for ( j = 0; j < P[3]; ++j )
      sub_1407E3B7C(P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_1406E78D8((__int64)(P + 2));
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(char **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( v6 == v5 )
        break;
      sub_1407E3B7C(P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      sub_140A0F8CC(*(PVOID *)(k * P[34] + *((_QWORD *)P + 19)));
    sub_1406E78D8((__int64)(P + 34));
    if ( P[47] )
    {
      do
        sub_1407E4374(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_1406E78D8((__int64)(P + 46));
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
