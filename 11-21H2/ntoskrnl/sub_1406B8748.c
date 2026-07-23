/*
 * XREFs of sub_1406B8748 @ 0x1406B8748
 * Callers:
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406B8748(void *a1, __int64 a2)
{
  if ( qword_140C1B908 )
    sub_14042A5E0(a1, a2);
  else
    ExFreePoolWithTag(a1, 0);
}
