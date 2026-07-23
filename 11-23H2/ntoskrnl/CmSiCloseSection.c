/*
 * XREFs of CmSiCloseSection @ 0x140373F9C
 * Callers:
 *     HvpViewMapCleanup @ 0x1407DAE44 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BiCreateKey @ 0x1408040D4 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140805714 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x140807544 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
