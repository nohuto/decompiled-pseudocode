/*
 * XREFs of PopThermalReadCounters @ 0x14098B0B4
 * Callers:
 *     PoThermalCounterSetCallback @ 0x14098ADE0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 */

__int64 __fastcall PopThermalReadCounters(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 *v6; // rdi
  IRP *v7; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 228) )
    goto LABEL_5;
  if ( (a2 & 9) == 0 )
    goto LABEL_5;
  v6 = (__int64 *)(a1 + 432);
  PopAcquireRwLockExclusive(a1 + 432);
  KeResetEvent((PRKEVENT)(a1 + 472));
  v7 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 112) = 0;
  IoCancelIrp(v7);
  PopReleaseRwLock(v6);
  Object[1] = (PVOID)(a1 + 448);
  Object[0] = (PVOID)(a1 + 472);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_5:
    PopAcquireRwLockExclusive(a1 + 432);
    *a3 = *(_DWORD *)(a1 + 128) / 0xAu;
    a3[3] = *(_DWORD *)(a1 + 128);
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 212);
    PopReleaseRwLock((__int64 *)(a1 + 432));
  }
  return v3;
}
