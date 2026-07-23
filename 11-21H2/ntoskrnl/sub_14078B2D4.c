/*
 * XREFs of sub_14078B2D4 @ 0x14078B2D4
 * Callers:
 *     sub_140765C60 @ 0x140765C60 (sub_140765C60.c)
 *     sub_14076C3C0 @ 0x14076C3C0 (sub_14076C3C0.c)
 *     sub_14078AC7C @ 0x14078AC7C (sub_14078AC7C.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402E069C @ 0x1402E069C (sub_1402E069C.c)
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_1406E0480 @ 0x1406E0480 (sub_1406E0480.c)
 *     sub_14078AE7C @ 0x14078AE7C (sub_14078AE7C.c)
 *     sub_14078AEE0 @ 0x14078AEE0 (sub_14078AEE0.c)
 *     sub_14078B5D8 @ 0x14078B5D8 (sub_14078B5D8.c)
 *     sub_14078BC2C @ 0x14078BC2C (sub_14078BC2C.c)
 *     sub_14078BE00 @ 0x14078BE00 (sub_14078BE00.c)
 *     sub_14094F7C0 @ 0x14094F7C0 (sub_14094F7C0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078B2D4(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r14
  char v4; // bp
  __int64 Pool2; // rbx
  struct _FAST_MUTEX *v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  PVOID *v10; // r15
  struct _WORK_QUEUE_ITEM *v11; // rax
  const wchar_t *v13; // rbx
  struct _KEVENT *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+98h] [rbp+10h] BYREF
  int Buffer; // [rsp+A0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v24 = 0;
  if ( stru_140C46280.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 128) == 4 )
  {
    v13 = (const wchar_t *)(a1 + 160);
    if ( (int)sub_1406E0480((int)a1 + 160, &v24) >= 0 )
    {
      if ( v24 )
      {
        v17 = sub_14094F7C0();
        if ( v17 >= 0 && (byte_140C0DD4A & 8) != 0 )
          sub_140561048(v18, (const EVENT_DESCRIPTOR *)qword_14003B100, v19, v13);
      }
    }
  }
  if ( sub_1402E069C(a1) )
  {
    v4 = sub_14078BC2C();
    Pool2 = ExAllocatePool2(256LL, (unsigned int)(*(_DWORD *)(a1 + 148) + 72), 1500540496LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v6 = (struct _FAST_MUTEX *)ExAllocatePool2(64LL, 56LL, 1500540496LL);
    *(_QWORD *)(Pool2 + 16) = v6;
    if ( !v6 )
    {
LABEL_40:
      sub_14078AEE0((_QWORD *)Pool2);
      return (unsigned int)-1073741670;
    }
    KeInitializeGuardedMutex(v6);
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_BYTE *)(Pool2 + 69) = v4;
    v7 = *(_DWORD **)(a1 + 48);
    if ( v4 )
    {
      *(_QWORD *)(Pool2 + 32) = v7;
      v20 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Pool2 + 40) = v20;
      **(_WORD **)(v20 + 8) = 0;
      **(_WORD **)(Pool2 + 40) = 0;
      **(_DWORD **)(Pool2 + 32) = 0;
    }
    else
    {
      if ( v7 )
        *v7 = 0;
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
      {
        **(_WORD **)(v8 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || v4 )
    {
      v3 = 1;
      v14 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1500540496LL);
      *(_QWORD *)(Pool2 + 24) = v14;
      if ( !v14 )
      {
LABEL_38:
        if ( *(_QWORD *)(Pool2 + 24) )
          sub_14078AE7C((PVOID)Pool2);
        goto LABEL_40;
      }
      KeInitializeEvent(v14, NotificationEvent, 0);
      sub_14078BE00(Pool2);
    }
    *(_BYTE *)(Pool2 + 68) = v3;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 148) + 8;
    memmove((void *)(Pool2 + 72), (const void *)(a1 + 112), *(unsigned int *)(a1 + 148));
    sub_14078B5D8(Pool2);
    ExAcquireFastMutex(&stru_140C46740);
    v9 = (__int64 *)qword_140C46728;
    v10 = (PVOID *)qword_140C46720;
    if ( *(PVOID **)qword_140C46728 != &qword_140C46720 )
      goto LABEL_45;
    *(_QWORD *)Pool2 = &qword_140C46720;
    *(_QWORD *)(Pool2 + 8) = v9;
    *v9 = Pool2;
    qword_140C46728 = Pool2;
    KeReleaseGuardedMutex(&stru_140C46740);
    if ( v10 != &qword_140C46720 )
      goto LABEL_17;
    v11 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1500540496LL);
    if ( v11 )
    {
      v11->Parameter = v11;
      v11->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14078ACE0;
      v11->List.Flink = 0LL;
      ExQueueWorkItem(v11, NormalWorkQueue);
LABEL_17:
      if ( v3 )
      {
        Object[0] = &stru_140C46280;
        Object[1] = *(PVOID *)(Pool2 + 24);
        Timeout.QuadPart = -300000000LL;
        v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
        Buffer = 0;
        v16 = v15;
        ZwUpdateWnfStateData(&stru_14000E198, &Buffer, 4u, 0LL, 0LL, 0, 0);
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            if ( v4 && **(_DWORD **)(a1 + 48) )
              v2 = -1073741536;
            else
              v2 = 0;
          }
          else
          {
            v2 = v16 != 258 ? 0xC0000001 : 0;
          }
        }
        else
        {
          v2 = -1073741431;
        }
        ExAcquireFastMutex(&stru_140C46740);
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        KeReleaseGuardedMutex(&stru_140C46740);
        sub_14078AE7C((PVOID)Pool2);
      }
      return v2;
    }
    ExAcquireFastMutex(&stru_140C46740);
    v21 = *(_QWORD *)Pool2;
    if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) != Pool2 || (v22 = *(_QWORD **)(Pool2 + 8), *v22 != Pool2) )
LABEL_45:
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    KeReleaseGuardedMutex(&stru_140C46740);
    if ( !v3 )
      goto LABEL_40;
    goto LABEL_38;
  }
  return v2;
}
