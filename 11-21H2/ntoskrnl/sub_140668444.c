/*
 * XREFs of sub_140668444 @ 0x140668444
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_1407946F8 @ 0x1407946F8 (sub_1407946F8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140668444(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
