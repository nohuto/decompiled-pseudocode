/*
 * XREFs of sub_140A31C78 @ 0x140A31C78
 * Callers:
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 *     sub_1408281D8 @ 0x1408281D8 (sub_1408281D8.c)
 * Callees:
 *     sub_140A31BF4 @ 0x140A31BF4 (sub_140A31BF4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A31C78(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    sub_140A31BF4((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
