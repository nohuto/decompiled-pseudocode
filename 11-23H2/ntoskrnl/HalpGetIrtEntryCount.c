/*
 * XREFs of HalpGetIrtEntryCount @ 0x14036F35C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x140A98F38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
