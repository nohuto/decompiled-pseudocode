/*
 * XREFs of VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00454A0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000E160 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0039FD4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00032E4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00033A8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiProcessGpuEngineTimeoutDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v2; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[385], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1) + 1728LL;
  v4 = 256;
  v3[0] = v2;
  AcquireSpinLock::Acquire((Acquire *)v3);
  *((_DWORD *)&Next[126].Next + 3) = 1;
  *((_BYTE *)&Next[126].Next + 10) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
