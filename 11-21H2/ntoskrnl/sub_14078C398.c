/*
 * XREFs of sub_14078C398 @ 0x14078C398
 * Callers:
 *     sub_140255030 @ 0x140255030 (sub_140255030.c)
 *     sub_1402DE270 @ 0x1402DE270 (sub_1402DE270.c)
 *     sub_1403A6C78 @ 0x1403A6C78 (sub_1403A6C78.c)
 *     sub_14076729C @ 0x14076729C (sub_14076729C.c)
 *     sub_140768194 @ 0x140768194 (sub_140768194.c)
 *     sub_1407699F8 @ 0x1407699F8 (sub_1407699F8.c)
 *     sub_14076C288 @ 0x14076C288 (sub_14076C288.c)
 *     sub_14078AB30 @ 0x14078AB30 (sub_14078AB30.c)
 *     sub_140950968 @ 0x140950968 (sub_140950968.c)
 *     sub_1409509D8 @ 0x1409509D8 (sub_1409509D8.c)
 *     sub_140950AE4 @ 0x140950AE4 (sub_140950AE4.c)
 *     sub_140950B80 @ 0x140950B80 (sub_140950B80.c)
 *     sub_140950C38 @ 0x140950C38 (sub_140950C38.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402E08F8 @ 0x1402E08F8 (sub_1402E08F8.c)
 *     IoGetActivityIdThread @ 0x1402E0960 (IoGetActivityIdThread.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078C398(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  __int128 *ActivityIdThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int128 v14; // [rsp+20h] [rbp-28h]

  v14 = *(_OWORD *)&xmmword_140010DE8;
  v2 = 0;
  Pool2 = 0LL;
  ActivityIdThread = (__int128 *)IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = *ActivityIdThread;
  }
  else if ( sub_1402E08F8() && KeGetPcr()->NtTib.Self )
  {
    v14 = *(_OWORD *)&KeGetPcr()->NtTib.Self[105].SubSystemTib;
  }
  *(_OWORD *)(a1 + 88) = v14;
  if ( (byte_140C0DD4B & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) - 0x11D046F0CB3A400ELL;
    if ( *(_QWORD *)(a1 + 112) == 0x11D046F0CB3A400ELL )
      v10 = *(_QWORD *)(a1 + 120) - 0x3F05139760008FB0LL;
    if ( !v10 )
      goto LABEL_20;
    v11 = *(_QWORD *)(a1 + 112) - 0x11D046F0CB3A400FLL;
    if ( *(_QWORD *)(a1 + 112) == 0x11D046F0CB3A400FLL )
      v11 = *(_QWORD *)(a1 + 120) - 0x3F05139760008FB0LL;
    if ( !v11 )
    {
LABEL_20:
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      sub_140561048(v5, (const EVENT_DESCRIPTOR *)qword_14003B3B0, v6, *(const wchar_t **)(v13 + 48));
    }
  }
  ExAcquireFastMutex((PFAST_MUTEX)(qword_140D3B048 + 64));
  ExAcquireFastMutex(&stru_140C44900);
  if ( !BYTE2(NlsMbOemCodePageTag) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1282436688LL);
    if ( Pool2 )
    {
      BYTE2(NlsMbOemCodePageTag) = 1;
      KeResetEvent(&stru_140C448E0);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v7 = qword_140D3B048 + 120;
  v8 = *(_QWORD **)(qword_140D3B048 + 128);
  if ( *v8 != qword_140D3B048 + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  KeReleaseGuardedMutex(&stru_140C44900);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(qword_140D3B048 + 64));
  if ( Pool2 )
  {
    Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407D5E30;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
  return v2;
}
