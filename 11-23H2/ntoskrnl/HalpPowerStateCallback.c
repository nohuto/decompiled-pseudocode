/*
 * XREFs of HalpPowerStateCallback @ 0x1403B06D0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     HalpTscCheckDisposition @ 0x14050A504 (HalpTscCheckDisposition.c)
 *     HalpMcUpdateLock @ 0x14051BC6C (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x14051BCC4 (HalpMcUpdateUnlock.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5750 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140A96E84 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140A96F00 (HalpMapNvsArea.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MiLockPagableImageSection((ULONG_PTR)HalpSleepPageLock, 0LL);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        SystemPowerPhase = 0;
        HalpTscCheckDisposition();
      }
    }
    else
    {
      SystemPowerPhase = 1;
      ((void (__fastcall *)(_QWORD))off_140C01D58[0])(0LL);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock();
    }
  }
}
