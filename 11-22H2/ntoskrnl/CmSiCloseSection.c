/*
 * XREFs of CmSiCloseSection @ 0x140374450
 * Callers:
 *     HvpViewMapCleanup @ 0x1407DB0F4 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiCreateKey @ 0x140806388 (BiCreateKey.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
