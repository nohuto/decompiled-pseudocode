/*
 * XREFs of ACPIInterruptServiceRoutineDPC @ 0x1C0030DD0
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PM1_ENABLE @ 0x1C0024674 (WRITE_PM1_ENABLE.c)
 *     ACPIButtonEvent @ 0x1C002C7AC (ACPIButtonEvent.c)
 *     ACPIInterruptDispatchEvents @ 0x1C0057CF8 (ACPIInterruptDispatchEvents.c)
 *     ACPIPccProcessSci @ 0x1C005A6BC (ACPIPccProcessSci.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C005D4C4 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C005D54C (ACPIStartNextGlobalLockRequest.c)
 */

void __fastcall ACPIInterruptServiceRoutineDPC(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v5; // edi
  unsigned __int32 v6; // ebx
  signed __int32 v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // di
  KIRQL v11; // r9

  while ( 1 )
  {
    v5 = DeferredContext[22];
    do
    {
      v6 = v5;
      v7 = 0x80000000;
      if ( (v5 & 0x7FFFFFFF) == 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPm1EnableRegisterLock);
        WRITE_PM1_ENABLE(*((_WORD *)AcpiInformation + 56));
        KeReleaseSpinLockFromDpcLevel(&AcpiPm1EnableRegisterLock);
        v7 = 0;
      }
      v5 = _InterlockedCompareExchange(DeferredContext + 22, v7, v5);
    }
    while ( v6 != v5 );
    if ( !v7 )
      break;
    v8 = (v6 >> 8) & 1;
    v9 = (v6 >> 8) & 1 | 2;
    if ( (v6 & 0x200) == 0 )
      v9 = (unsigned int)v8;
    if ( (_DWORD)v9 )
    {
      if ( (v6 & 0x8000) != 0 )
        LODWORD(v9) = 0x80000000;
      ACPIButtonEvent(FixedButtonDeviceObject, v9);
    }
    if ( (v6 & 0x20) != 0 )
    {
      v10 = 0;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
        v10 = ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5));
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v11);
      if ( v10 )
        ACPIStartNextGlobalLockRequest();
    }
    if ( (v6 & 0x20000) != 0 )
      ACPIPccProcessSci(v8, v9, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x10000) != 0 )
      ACPIInterruptDispatchEvents(v8, v9, SystemArgument1, SystemArgument2);
  }
}
