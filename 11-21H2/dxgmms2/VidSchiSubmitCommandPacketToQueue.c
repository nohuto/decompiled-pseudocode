/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0006900
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0004DF0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchEnqueueCpuEvent @ 0x1C007B880 (VidSchEnqueueCpuEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00A6478 (VidSchSubmitGlobalCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00F44F0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0006CD0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0097060 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C00972B0 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r12
  int v11; // edi
  __int64 v12; // rax
  VIDMM_DEVICE *v13; // rcx
  KSPIN_LOCK *v14; // rcx
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  KPRIORITY v18; // r13d
  int v19; // ecx
  unsigned int v20; // eax
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+50h] [rbp-11h] BYREF
  __int16 v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+2Fh]
  int v27; // [rsp+C8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD **)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  VidSchiEnsureVSyncEnabled(a1, v4);
  LOWORD(v26) = 0;
  v24 = v5 + 1728;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  LOBYTE(v26) = 1;
  v6 = *(_QWORD *)(v1 + 144);
  *(_QWORD *)(v1 + 144) = v6 + 1;
  *(_QWORD *)(a1 + 112) = v6;
  v7 = MEMORY[0xFFFFF78000000320];
  v4[24] = v7 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(v1 + 176) = *(_QWORD *)(a1 + 112);
    ++v4[199];
  }
  VidSchiProfilePerformanceTick(4, v5, v3, 0, 0LL, a1, 0LL, 0LL);
  v27 = 0;
  VidSchiInsertCommandToSoftwareQueue(a1, &v27);
  if ( (_BYTE)v26 )
  {
    if ( BYTE1(v26) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v26) = 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 2536) & 0x20) == 0 )
    goto LABEL_12;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == *(struct _KTHREAD **)(v8 + 168) || CurrentThread == *(struct _KTHREAD **)(v8 + 176) )
  {
    v10 = 1;
    if ( *(_DWORD *)(v1 + 780) )
      goto LABEL_12;
    v11 = 16;
  }
  else
  {
    v10 = 0;
    if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
    {
      v11 = 31;
    }
    else
    {
      v11 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
      if ( v11 <= 16 )
        goto LABEL_12;
    }
  }
  v14 = (KSPIN_LOCK *)(v8 + 2464);
  v23 = 0;
LABEL_20:
  KeAcquireInStackQueuedSpinLock(v14, &v22);
  while ( 1 )
  {
    v15 = *(_DWORD *)(v1 + 780);
    LOBYTE(v23) = 1;
    if ( v10 )
    {
      if ( v15 )
        goto LABEL_26;
    }
    else if ( !v15 )
    {
      goto LABEL_26;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
    v17 = *(int *)(v1 + 392);
    if ( (_DWORD)v17 != v11 )
    {
      v19 = 0;
      if ( (int)v17 > 16 && (*(_DWORD *)(v16 + 4 * v17 + 2408))-- == 1 )
      {
        v19 = 1;
        *(_DWORD *)(v16 + 2472) &= ~(1 << *(_DWORD *)(v1 + 392));
      }
      if ( (unsigned int)v11 > 0x10 && (++*(_DWORD *)(v16 + 4LL * v11 + 2408), *(_DWORD *)(v16 + 4LL * v11 + 2408) == 1) )
      {
        *(_DWORD *)(v16 + 2472) |= 1 << v11;
        *(_DWORD *)(v1 + 392) = v11;
      }
      else
      {
        *(_DWORD *)(v1 + 392) = v11;
        if ( !v19 )
          goto LABEL_24;
      }
      v20 = *(_DWORD *)(v16 + 2472);
      if ( v20 )
        *(_DWORD *)(v16 + 220) = RtlFindMostSignificantBit(v20);
      else
        *(_DWORD *)(v16 + 220) = 16;
    }
LABEL_24:
    v18 = *(_DWORD *)(v16 + 220);
    if ( v18 == KeQueryPriorityThread(*(PKTHREAD *)(v8 + 168)) )
      break;
    if ( (_BYTE)v23 )
    {
      if ( HIBYTE(v23) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
      else
        KeReleaseInStackQueuedSpinLock(&v22);
      LOBYTE(v23) = 0;
    }
    KeSetPriorityThread(*(PKTHREAD *)(v8 + 168), v18);
    v14 = (KSPIN_LOCK *)(v8 + 2464);
    if ( !HIBYTE(v23) )
      goto LABEL_20;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 2464), &v22);
  }
  if ( !(_BYTE)v23 )
    goto LABEL_12;
LABEL_26:
  if ( HIBYTE(v23) )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
  else
    KeReleaseInStackQueuedSpinLock(&v22);
LABEL_12:
  if ( v27 )
  {
    *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  }
  v12 = v4[1];
  if ( v12 )
  {
    v13 = *(VIDMM_DEVICE **)(v12 + 760);
    if ( v13 )
      VIDMM_DEVICE::EnsureSchedulable(v13, 1);
  }
  if ( (_BYTE)v26 )
  {
    if ( BYTE1(v26) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
