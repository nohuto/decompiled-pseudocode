/*
 * XREFs of ExSystemExceptionFilter @ 0x1409F8660
 * Callers:
 *     sub_14023559C @ 0x14023559C (sub_14023559C.c)
 *     sub_140235738 @ 0x140235738 (sub_140235738.c)
 *     sub_140263154 @ 0x140263154 (sub_140263154.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402D3310 @ 0x1402D3310 (sub_1402D3310.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1405683C0 @ 0x1405683C0 (sub_1405683C0.c)
 *     sub_140568AB8 @ 0x140568AB8 (sub_140568AB8.c)
 *     sub_1405711E4 @ 0x1405711E4 (sub_1405711E4.c)
 *     sub_1405F5398 @ 0x1405F5398 (sub_1405F5398.c)
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 *     sub_140637E70 @ 0x140637E70 (sub_140637E70.c)
 *     sub_1406383D8 @ 0x1406383D8 (sub_1406383D8.c)
 *     sub_140638440 @ 0x140638440 (sub_140638440.c)
 *     sub_1406389A8 @ 0x1406389A8 (sub_1406389A8.c)
 *     sub_140638B98 @ 0x140638B98 (sub_140638B98.c)
 *     sub_14063AC94 @ 0x14063AC94 (sub_14063AC94.c)
 *     sub_14063AFCC @ 0x14063AFCC (sub_14063AFCC.c)
 *     sub_140641BD0 @ 0x140641BD0 (sub_140641BD0.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return *((_BYTE *)KeGetCurrentThread() + 562) != 0;
}
