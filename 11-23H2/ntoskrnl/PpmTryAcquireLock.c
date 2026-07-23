/*
 * XREFs of PpmTryAcquireLock @ 0x14036DB98
 * Callers:
 *     PoLatencySensitivityHint @ 0x14036DA00 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 *     KiSetSystemPriorityThread @ 0x140356070 (KiSetSystemPriorityThread.c)
 */

char __fastcall PpmTryAcquireLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  struct _KTHREAD *v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 22, 0);
  v3 = KeWaitForSingleObject(&word_140C3D5A8, Executive, 0, 0, &Timeout);
  v4 = KeGetCurrentThread();
  if ( v3 )
  {
    LODWORD(v6) = 22;
    KiClearSystemPriority((ULONG_PTR)v4, (char *)&v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    v2 = 1;
    PpmPerfPolicyLock = (__int64)v4;
  }
  return v2;
}
