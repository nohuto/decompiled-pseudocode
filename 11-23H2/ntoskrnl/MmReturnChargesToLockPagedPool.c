/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x140A309A0
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x14064EDA8 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x1408016DC (PopEnableHiberFile.c)
 *     HalpUnloadMicrocode @ 0x140934DB0 (HalpUnloadMicrocode.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResident @ 0x140292E10 (MiReturnResident.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v4; // r8
  _OWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  memset(v6, 0, sizeof(v6));
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v4, v2, 8, (struct _KTHREAD *)v6);
  return MiReturnResident((__int64)MiSystemPartition, v2);
}
