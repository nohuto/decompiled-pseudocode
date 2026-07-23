/*
 * XREFs of MiWaitForVadDeletion @ 0x1406611A8
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14071F590 (MiCleanVad.c)
 * Callees:
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall MiWaitForVadDeletion(__int64 a1)
{
  void *result; // rax
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5[10]; // [rsp+20h] [rbp-50h] BYREF

  result = memset(v5, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v5[1]) = 0;
    v5[3] = (unsigned __int64)&v5[2];
    LODWORD(v5[8]) = 1;
    v5[2] = (unsigned __int64)&v5[2];
    LOWORD(v5[1]) = 263;
    BYTE2(v5[1]) = 6;
    MiInsertVadEvent(a1, v5, 1LL, v3);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v5[1], 18, 0);
    return (void *)MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
