/*
 * XREFs of sub_14098B48C @ 0x14098B48C
 * Callers:
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 * Callees:
 *     sub_14025AA04 @ 0x14025AA04 (sub_14025AA04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14098B48C(_QWORD *P, __int64 a2)
{
  void *v3; // rcx

  v3 = (void *)P[7];
  if ( v3 )
    sub_14025AA04(v3, 1);
  if ( *((_BYTE *)P + 64) )
    sub_14042A5E0(P[12], a2);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
