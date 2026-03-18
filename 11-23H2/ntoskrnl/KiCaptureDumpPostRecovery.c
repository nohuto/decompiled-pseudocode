/*
 * XREFs of KiCaptureDumpPostRecovery @ 0x14057AC90
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057ADE0 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiBugCheckWriteCrashDump @ 0x140569AEC (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x14056A8CC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x14057A6A8 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x14057AB48 (KiBugCheckRecoveryPrepareForCrashDump.c)
 */

char __fastcall KiCaptureDumpPostRecovery(__int64 a1)
{
  char v1; // bl
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  v4 = 0;
  v1 = KiBugCheckRecoveryPrepareForCrashDump(&v4, (bool *)&v3);
  result = KiInvokeBugCheckEntryCallbacks(8u, 0LL, 0);
  if ( v1 )
  {
    KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
    return KiBugCheckRecoveryCleanupFromCrashDump(v4, v3);
  }
  return result;
}
