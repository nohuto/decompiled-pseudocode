/*
 * XREFs of ExSweepHandleTable @ 0x1407A2CB0
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406A6448 (ObInitProcess.c)
 *     ObKillProcess @ 0x14070BCA4 (ObKillProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3, _DWORD *a4)
{
  char v4; // r13
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // ebp
  __int64 v10; // rbx
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  int v13; // eax
  _QWORD *result; // rax
  int v15; // [rsp+20h] [rbp-88h]
  int v16; // [rsp+28h] [rbp-80h]
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-58h]

  v4 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0LL, (__int64)&v17, a4);
    v4 = 1;
  }
  v9 = 0;
  v10 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v10);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v11);
        v12 = *v11;
        if ( (*v11 & 1) != 0 )
          break;
        if ( v12 )
        {
          ExpBlockOnLockedHandleEntry(a2, v11, v12);
        }
        else
        {
LABEL_7:
          v10 += 4LL;
          v11 += 2;
          if ( (v10 & 0x3FF) == 0 )
          {
            v10 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v12 == _InterlockedCompareExchange64(v11, v12 - 1, v12) )
      {
        LOBYTE(v16) = 1;
        LOBYTE(v15) = a3;
        v13 = ObCloseHandleTableEntry(
                a2,
                v11,
                a1,
                v10,
                v15,
                v16,
                v17,
                *((_QWORD *)&v17 + 1),
                v18,
                *((_QWORD *)&v18 + 1),
                v19,
                *((_QWORD *)&v19 + 1));
        --CurrentThread->KernelApcDisable;
        if ( v13 >= 0 )
          ++v9;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 64);
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)&v17, 0LL);
  return result;
}
