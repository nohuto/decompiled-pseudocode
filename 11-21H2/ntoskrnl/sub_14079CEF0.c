/*
 * XREFs of sub_14079CEF0 @ 0x14079CEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14079CEF0(PVOID P, unsigned int a2)
{
  sub_14079CF18(a2);
  ExFreePoolWithTag(P, 0);
}
