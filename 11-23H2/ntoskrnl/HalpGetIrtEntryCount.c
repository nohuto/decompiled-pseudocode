/*
 * XREFs of HalpGetIrtEntryCount @ 0x14036F1BC
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x140A990C8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
