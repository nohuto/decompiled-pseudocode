/*
 * XREFs of sub_14094F920 @ 0x14094F920
 * Callers:
 *     <none>
 * Callees:
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14094F920(PVOID P)
{
  sub_14077572C(1);
  sub_140764CE4((__int64)qword_140C46278, (__int64)sub_14094F860, 0LL);
  sub_140775698(1);
  ExFreePoolWithTag(P, 0);
}
