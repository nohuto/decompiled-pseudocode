/*
 * XREFs of MiLockLoaderEntry @ 0x1402D96AC
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiLockdownSections @ 0x1407607D8 (MiLockdownSections.c)
 *     MiFindDriverNonPagedSections @ 0x140760A2C (MiFindDriverNonPagedSections.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 104;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 2 )
      ExAcquirePushLockSharedEx(v3, 0LL);
    else
      ExAcquireAutoExpandPushLockExclusive(v3, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v3, a2);
  }
}
