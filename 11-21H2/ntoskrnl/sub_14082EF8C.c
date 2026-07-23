/*
 * XREFs of sub_14082EF8C @ 0x14082EF8C
 * Callers:
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS sub_14082EF8C()
{
  return KeWaitForSingleObject(&stru_140C448E0, Executive, 0, 0, 0LL);
}
