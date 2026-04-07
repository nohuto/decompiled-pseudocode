/*
 * XREFs of ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A2718
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4AE4 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x1800E3B90 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x1800E3BEC (-IsSet@CTimer@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Reset(CAnimationClock *this, unsigned int a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = -2147024809;
  if ( a2 - 10001 > 0xFFFFD8ED )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    v5 = *((_DWORD *)this + 20);
    if ( (unsigned int)(v5 - 5) <= 1 )
    {
      v7 = *((_QWORD *)this + 13);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        *((_QWORD *)this + 13) = 0LL;
      }
      *((_DWORD *)this + 34) = a2;
      *((_DWORD *)this + 35) = 0;
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      *((_DWORD *)this + 36) = 0;
      if ( CTimer::IsSet(*((CTimer **)this + 8)) )
      {
        v4 = CTimer::Cancel(*((CTimer **)this + 8));
        if ( v4 < 0 )
          goto LABEL_14;
      }
      v6 = CAnimationClock::_SetState(this, 1LL);
    }
    else
    {
      if ( v5 != 1 || a2 == -1 || *((_DWORD *)this + 34) != -1 )
      {
        v4 = -2147019873;
LABEL_14:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
        return (unsigned int)v4;
      }
      *((_DWORD *)this + 34) = a2;
      v6 = CAnimationClock::_SetTimer(this, a2);
    }
    v4 = v6;
    goto LABEL_14;
  }
  return (unsigned int)v4;
}
