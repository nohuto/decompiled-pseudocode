/*
 * XREFs of sub_14082EFB8 @ 0x14082EFB8
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140B10D78 @ 0x140B10D78 (sub_140B10D78.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS sub_14082EFB8()
{
  return KeWaitForSingleObject(&stru_140C44A20, Executive, 0, 0, 0LL);
}
