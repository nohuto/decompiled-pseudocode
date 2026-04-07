/*
 * XREFs of ??0CTimer@@QEAA@XZ @ 0x1800E3AA0
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

CTimer *__fastcall CTimer::CTimer(CTimer *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CTimer::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  return this;
}
