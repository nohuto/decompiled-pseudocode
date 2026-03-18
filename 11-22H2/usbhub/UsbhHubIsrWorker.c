/*
 * XREFs of UsbhHubIsrWorker @ 0x1C0021460
 * Callers:
 *     <none>
 * Callees:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhHubIsrWorker(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  KIRQL v7; // r10
  KIRQL v8; // r10
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r11
  int v13; // r10d

  FdoExt((__int64)a1);
  KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Log((__int64)a1, 4, 1230197367, (__int64)a1, a3);
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    Log((__int64)a1, 4, 1230201969, v6, a3);
    v9 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v9 + 8) != a3 + 160 || (v10 = *(_QWORD **)(a3 + 168), *v10 != a3 + 160) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v8);
    UsbhHubProcessIsr(a1, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v7);
  }
  v11 = FdoExt((__int64)a1);
  _InterlockedExchangeAdd(v11 + 685, 0xFFFFFFFF);
  Log((__int64)a1, 4, 1212764717, (__int64)a1, (int)v11[685]);
  if ( v13 == 1 )
    KeSetEvent((PRKEVENT)(v12 + 2744), 0, 0);
}
