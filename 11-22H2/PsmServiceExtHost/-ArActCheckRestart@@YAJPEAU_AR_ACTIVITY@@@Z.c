/*
 * XREFs of ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CD7C
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800037C0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003154 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800031A4 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800032D4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

__int64 __fastcall ArActCheckRestart(struct _AR_ACTIVITY *a1, __int64 a2)
{
  struct _AR_ACTIVITY_HOST **v2; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  int started; // ebx

  v2 = (struct _AR_ACTIVITY_HOST **)((char *)a1 + 16);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  CempLockTrackerMarkAcquired(ArLockTrackerId, a2, 1u, 0);
  v5 = v4 + 48;
  RtlAcquireSRWLockShared(v4 + 48);
  v6 = *(_DWORD *)(v4 + 72);
  RtlReleaseSRWLockShared(v5);
  CempLockTrackerMarkReleased(ArLockTrackerId, v7, 1u);
  ArHostWaitForAndSetChangeInProgress(*v2);
  if ( *((_BYTE *)a1 + 32) )
    goto LABEL_2;
  if ( ((v6 & 1) != 0 || (*((_BYTE *)a1 + 28) & 1) == 0) && ((v6 & 2) != 0 || (*((_BYTE *)a1 + 28) & 2) == 0) )
  {
    started = -1073741823;
    goto LABEL_10;
  }
  started = ArActStartAsync(a1);
  if ( started >= 0 )
LABEL_2:
    started = 0;
LABEL_10:
  ArHostClearChangeInProgress(*v2);
  return (unsigned int)started;
}
