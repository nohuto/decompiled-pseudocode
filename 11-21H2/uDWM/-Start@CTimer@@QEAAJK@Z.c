/*
 * XREFs of ?Start@CTimer@@QEAAJK@Z @ 0x1800E3CA8
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800E3E40 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTimer::Start(CTimer *this, unsigned int a2)
{
  __int64 v2; // rsi
  signed int v4; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v4 = 0;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (_DWORD)v2 )
  {
    if ( *((_QWORD *)this + 7) )
      goto LABEL_14;
    ThreadpoolTimer = CreateThreadpoolTimer(CTimer::s_TimerTickProc, this, 0LL);
    *((_QWORD *)this + 7) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
      goto LABEL_14;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_14:
      if ( IsThreadpoolTimerSet(*((PTP_TIMER *)this + 7)) )
      {
        v4 = -2147019873;
      }
      else
      {
        pftDueTime = (struct _FILETIME)(-10000 * v2);
        SetThreadpoolTimer(*((PTP_TIMER *)this + 7), &pftDueTime, 0, 0);
      }
    }
  }
  else
  {
    CTimer::_OnTimerCallback(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)v4;
}
