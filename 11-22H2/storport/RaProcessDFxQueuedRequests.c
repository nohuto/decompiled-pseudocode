/*
 * XREFs of RaProcessDFxQueuedRequests @ 0x1C003FC50
 * Callers:
 *     <none>
 * Callees:
 *     RaProcessDFxPendingIrp @ 0x1C003FBC0 (RaProcessDFxPendingIrp.c)
 */

void __fastcall RaProcessDFxQueuedRequests(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  KSPIN_LOCK *v2; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(KSPIN_LOCK **)(DeviceObject + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    v5 = v2 + 707;
    while ( (_QWORD *)*v5 != v5 )
    {
      KeAcquireInStackQueuedSpinLock(v2 + 710, &LockHandle);
      v6 = (_QWORD *)v2[708];
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_14;
      v7 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v7 != v6 )
        goto LABEL_14;
      v2[708] = (KSPIN_LOCK)v7;
      *v7 = v5;
      --*((_DWORD *)v2 + 1418);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaProcessDFxPendingIrp(DeviceObject, *(v6 - 1));
    }
    *((_BYTE *)v2 + 109) &= ~0x40u;
  }
  else if ( *(_DWORD *)v2 == 1431193940 )
  {
    v8 = v2 + 425;
    while ( (_QWORD *)*v8 != v8 )
    {
      KeAcquireInStackQueuedSpinLock(v2 + 428, &LockHandle);
      v9 = (_QWORD *)v2[426];
      if ( (_QWORD *)*v9 != v8 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9) )
LABEL_14:
        __fastfail(3u);
      v2[426] = (KSPIN_LOCK)v10;
      *v10 = v8;
      --*((_DWORD *)v2 + 854);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaProcessDFxPendingIrp(DeviceObject, *(v9 - 1));
    }
    *((_BYTE *)v2 + 451) &= ~2u;
  }
  if ( Context )
    IoFreeWorkItem(Context);
}
