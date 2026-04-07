/*
 * XREFs of ??1CTimer@@UEAA@XZ @ 0x1800E3AE8
 * Callers:
 *     ??_ECTimer@@UEAAPEAXI@Z @ 0x1800E3B40 (--_ECTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x1800E3DAC (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 */

void __fastcall CTimer::~CTimer(CTimer *this)
{
  DWORD CurrentThreadId; // eax

  *(_QWORD *)this = &CTimer::`vftable';
  CurrentThreadId = GetCurrentThreadId();
  CTimer::_DestroyThreadPoolTimer(this, CurrentThreadId != *((_DWORD *)this + 18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
