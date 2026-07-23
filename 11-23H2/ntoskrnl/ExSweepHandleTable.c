/*
 * XREFs of ExSweepHandleTable @ 0x14073FE50
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     ObKillProcess @ 0x14068B254 (ObKillProcess.c)
 *     ObInitProcess @ 0x1406B365C (ObInitProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6960 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x14073FFB4 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA970 (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3)
{
  char v3; // r13
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // ebp
  __int64 v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  int v12; // eax
  _QWORD *result; // rax
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+28h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  memset(&v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)&v16);
    v3 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10, v11);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        LOBYTE(v15) = 1;
        LOBYTE(v14) = a3;
        v12 = ObCloseHandleTableEntry(
                a2,
                v10,
                a1,
                v9,
                v14,
                v15,
                v16.SavedApcState.ApcListHead[0].Flink,
                v16.SavedApcState.ApcListHead[0].Blink,
                v16.SavedApcState.ApcListHead[1].Flink,
                v16.SavedApcState.ApcListHead[1].Blink,
                v16.SavedApcState.Process,
                *(_QWORD *)&v16.SavedApcStateFill[40]);
        --CurrentThread->KernelApcDisable;
        if ( v12 >= 0 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 == 1 )
    return (_QWORD *)KiUnstackDetachProcess(&v16);
  return result;
}
