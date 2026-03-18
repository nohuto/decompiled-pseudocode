/*
 * XREFs of MiReturnEnclavePage @ 0x140648A0C
 * Callers:
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclavePages @ 0x140646D98 (MiAllocateEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD6B0 (MiReturnReservedEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x1402DF0B0 (MiSetPfnBlink.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  MiSetPfnBlink(v2, 0LL, 1);
  MiInsertPageInFreeOrZeroedList(a1, 256);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
