/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1408609D0
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x140800DF4 (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x1408608B0 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
