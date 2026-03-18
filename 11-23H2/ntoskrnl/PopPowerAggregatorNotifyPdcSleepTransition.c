/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140993C08
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405997B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875AF0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A0F64 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2, int a3)
{
  int v6; // ecx
  unsigned int v7; // edi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AA98 == 1 )
  {
    v7 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140C3AA98 == 4 )
  {
    v7 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140C3AAA8) = 0;
      *(_QWORD *)((char *)&xmmword_140C3AAA8 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    DWORD2(xmmword_140C3AAA8) = a3;
    v7 = 259;
    DWORD1(xmmword_140C3AAA8) = a2;
    LOBYTE(xmmword_140C3AAA8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
    goto LABEL_8;
  }
  v7 = -1073741811;
LABEL_8:
  LOBYTE(v6) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v6,
    a2,
    (unsigned int)&xmmword_140C3AA70,
    (unsigned int)&xmmword_140C3AA98,
    v7);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v7;
}
