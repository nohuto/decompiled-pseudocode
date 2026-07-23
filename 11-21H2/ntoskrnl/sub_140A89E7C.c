/*
 * XREFs of sub_140A89E7C @ 0x140A89E7C
 * Callers:
 *     sub_1405FDEC0 @ 0x1405FDEC0 (sub_1405FDEC0.c)
 *     sub_1405FEBA0 @ 0x1405FEBA0 (sub_1405FEBA0.c)
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53B88 @ 0x140B53B88 (sub_140B53B88.c)
 *     sub_140B53D38 @ 0x140B53D38 (sub_140B53D38.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 */

LONG sub_140A89E7C()
{
  qword_140C1AD40 = 0LL;
  return KeReleaseMutex(&stru_140C1AD60, 0);
}
