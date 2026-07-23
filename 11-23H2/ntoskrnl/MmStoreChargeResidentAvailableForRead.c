/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1403B62D0
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140466734 (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1407B7FF4 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(void **a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(*a1, a2 + 48, 0LL) != 0;
}
