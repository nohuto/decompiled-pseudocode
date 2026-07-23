/*
 * XREFs of sub_14075E448 @ 0x14075E448
 * Callers:
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140842D98 @ 0x140842D98 (sub_140842D98.c)
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     sub_1402D89E8 @ 0x1402D89E8 (sub_1402D89E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14075E448(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    sub_1402D89E8((__int64)(P + 1));
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
