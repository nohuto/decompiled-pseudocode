/*
 * XREFs of UsbhLogException @ 0x1C004B20C
 * Callers:
 *     UsbhExceptionWorker @ 0x1C004B000 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

_QWORD *__fastcall UsbhLogException(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _DWORD *v4; // rdi
  _QWORD **v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned __int32 v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  v4 = FdoExt(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 609, &LockHandle);
  v5 = (_QWORD **)(v4 + 1214);
  v6 = (_QWORD *)(a2 + 48);
  v7 = (_QWORD *)*((_QWORD *)v4 + 608);
  if ( (_DWORD *)*v7 != v4 + 1214 )
    goto LABEL_8;
  v6[1] = v7;
  *v6 = v5;
  *v7 = v6;
  *((_QWORD *)v4 + 608) = v6;
  v8 = _InterlockedIncrement(v4 + 1220);
  if ( v8 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
  {
    v9 = *v5;
    if ( *v5 != v5 )
    {
      if ( (_QWORD **)v9[1] == v5 )
      {
        v10 = (_QWORD *)*v9;
        if ( *(_QWORD **)(*v9 + 8LL) == v9 )
        {
          *v5 = v10;
          v3 = v9 - 6;
          v10[1] = v5;
          _InterlockedDecrement(v4 + 1220);
          goto LABEL_7;
        }
      }
LABEL_8:
      __fastfail(3u);
    }
  }
LABEL_7:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
