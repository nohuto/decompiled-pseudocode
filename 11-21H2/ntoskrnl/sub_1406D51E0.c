/*
 * XREFs of sub_1406D51E0 @ 0x1406D51E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406D51E0(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return sub_1406D520C(qword_140D05008, 0LL, 8LL);
}
