/*
 * XREFs of sub_140A0318C @ 0x140A0318C
 * Callers:
 *     sub_140A03480 @ 0x140A03480 (sub_140A03480.c)
 *     sub_140A03D60 @ 0x140A03D60 (sub_140A03D60.c)
 * Callees:
 *     sub_140A031C4 @ 0x140A031C4 (sub_140A031C4.c)
 */

char __fastcall sub_140A0318C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    return sub_140A031C4(a1 + 88, v5, a2, a3, a4);
  else
    return 0;
}
