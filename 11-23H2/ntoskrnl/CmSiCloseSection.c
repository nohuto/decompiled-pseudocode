/*
 * XREFs of CmSiCloseSection @ 0x140373DFC
 * Callers:
 *     HvpViewMapCleanup @ 0x1407DAB74 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BiCreateKey @ 0x140803E04 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140805444 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x140807274 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
