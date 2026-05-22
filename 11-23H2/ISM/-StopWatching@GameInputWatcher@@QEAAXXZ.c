/*
 * XREFs of ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x18004BA64
 * Callers:
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18004B714 (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004B9E4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ??1GameInputWatcher@@QEAA@XZ @ 0x180117F0C (--1GameInputWatcher@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

void __fastcall GameInputWatcher::StopWatching(GameInputWatcher *this)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 1), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    SetThreadpoolTimer(*(PTP_TIMER *)this, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)this, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 != (void *)-1LL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 2) = -1LL;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v5 )
    operator delete[](v5);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
