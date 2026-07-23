/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x140860C10
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x1408010C4 (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140860AF0 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
