/*
 * XREFs of ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006D6C0
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180004C90 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 * Callees:
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800021A4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall ArActCheckRestart(struct _AR_ACTIVITY *a1, __int64 a2)
{
  struct _AR_ACTIVITY_HOST **v2; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rdx
  int started; // ebx

  v2 = (struct _AR_ACTIVITY_HOST **)((char *)a1 + 16);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  CempLockTrackerMarkAcquired(ArLockTrackerId, a2, 1u, 0);
  v5 = v4 + 48;
  RtlAcquireSRWLockShared(v4 + 48);
  v6 = *(_BYTE *)(v4 + 64);
  RtlReleaseSRWLockShared(v5);
  CempLockTrackerMarkReleased(ArLockTrackerId, v7, 1u);
  ArHostWaitForAndSetChangeInProgress(*v2);
  if ( *((_BYTE *)a1 + 32) != 2 )
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
