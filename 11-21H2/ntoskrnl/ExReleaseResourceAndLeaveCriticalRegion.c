/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AF060 @ 0x1402AF060 (sub_1402AF060.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14039CA48 @ 0x14039CA48 (sub_14039CA48.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  USHORT Flag; // cx
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // r8
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    sub_14039CA48((ULONG_PTR)Resource);
  }
  else
  {
    v3 = (ULONG_PTR)KeGetCurrentThread();
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    if ( (unsigned __int8)sub_1402AF060(Resource) && (v3 & 3) != 3 && v3 != v5 )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v5, v3, 0LL);
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      sub_1402B1740(v4, v3);
    else
      sub_1402B02B0(v4, v3);
  }
  v6 = KeGetCurrentThread();
  v7 = (*((_WORD *)v6 + 242))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)v6 + 19) != (struct _KTHREAD *)((char *)v6 + 152) && !*((_WORD *)v6 + 243) )
    KiCheckForKernelApcDelivery();
}
