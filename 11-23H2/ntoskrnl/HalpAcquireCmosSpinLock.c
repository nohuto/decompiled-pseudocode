/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x14033BE9C
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x14033BE68 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1403A55EC (HalpGetSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x140504D30 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140504ED0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140506B50 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x140508B70 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140508CF0 (x86BiosWriteCmosPortByte.c)
 *     HalpSetClockAfterSleep @ 0x14050B4B4 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x14050B538 (HalpSetClockBeforeSleep.c)
 *     HalpReadRtcStdPCAT @ 0x140520500 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x140520590 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140520600 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x1405206D0 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcquireCmosSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v3 = 0;
  while ( 1 )
  {
    _disable();
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    v4 = v6 & 0x200;
    LOBYTE(a3) = (v6 & 0x200) != 0;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, a1, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (v6 & 0x200) != 0 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpRebootNow )
        HalpRebootNow(a1, v4, a3);
      if ( (++v3 & dword_140C6249C) != 0 || !qword_140C624A0 )
        _mm_pause();
      else
        qword_140C624A0(v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
