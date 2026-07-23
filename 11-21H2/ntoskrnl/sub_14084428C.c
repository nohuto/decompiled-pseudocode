/*
 * XREFs of sub_14084428C @ 0x14084428C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_140B1ADD8 @ 0x140B1ADD8 (sub_140B1ADD8.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 */

void sub_14084428C()
{
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0);
}
