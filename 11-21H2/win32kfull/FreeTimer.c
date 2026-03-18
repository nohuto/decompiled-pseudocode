/*
 * XREFs of FreeTimer @ 0x1C0070D80
 * Callers:
 *     DestroyWindowsTimers @ 0x1C0060DA4 (DestroyWindowsTimers.c)
 *     NtUserKillTimer @ 0x1C00712E0 (NtUserKillTimer.c)
 *     DestroyThreadsTimers @ 0x1C00E1B50 (DestroyThreadsTimers.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00F099C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0070ECC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C0103450 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeTimer(struct tagTIMER *a1)
{
  struct _HANDLEENTRY *v2; // rax
  struct _HANDLEENTRY *result; // rax
  AtomicExecutionCheck *v4; // rcx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *Data; // rax
  __int64 v10; // rcx
  struct tagTIMER **v11; // rdx
  __int64 v12; // rdx
  struct tagTIMER **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = 0;
  v2 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a1);
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v17, v2);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v5 = 0;
    AtomicExecutionCheck::EnforceConsistency(v4);
    Data = (_DWORD *)GetData(v7, v6, v8);
    if ( Data )
    {
      ++*Data;
      v5 = 1;
    }
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v10 = *((_QWORD *)a1 + 9);
    if ( *(struct tagTIMER **)(v10 + 8) != (struct tagTIMER *)((char *)a1 + 72)
      || (v11 = (struct tagTIMER **)*((_QWORD *)a1 + 10), *v11 != (struct tagTIMER *)((char *)a1 + 72))
      || (*v11 = (struct tagTIMER *)v10,
          *(_QWORD *)(v10 + 8) = v11,
          v12 = *((_QWORD *)a1 + 14),
          *(struct tagTIMER **)(v12 + 8) != (struct tagTIMER *)((char *)a1 + 112))
      || (v13 = (struct tagTIMER **)*((_QWORD *)a1 + 15), *v13 != (struct tagTIMER *)((char *)a1 + 112)) )
    {
      __fastfail(3u);
    }
    *v13 = (struct tagTIMER *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
    if ( v5 )
    {
      result = (struct _HANDLEENTRY *)GetData(v15, v14, v16);
      --*(_DWORD *)result;
    }
  }
  if ( v17 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
