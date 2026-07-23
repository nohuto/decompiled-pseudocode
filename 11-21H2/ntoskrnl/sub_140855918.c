/*
 * XREFs of sub_140855918 @ 0x140855918
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 */

NTSTATUS sub_140855918()
{
  qword_140C48A88 = (__int64)&qword_140C48A80;
  qword_140C48A80 = (__int64)&qword_140C48A80;
  return ExInitializeResourceLite(&stru_140C48A90);
}
