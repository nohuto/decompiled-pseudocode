/*
 * XREFs of KiCaptureDumpPostRecovery @ 0x14057AD20
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiBugCheckWriteCrashDump @ 0x140569B8C (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x14056A96C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x14057A738 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x14057ABD8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 */

void __fastcall KiCaptureDumpPostRecovery(__int64 a1)
{
  char v1; // bl
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  LOBYTE(v2) = 0;
  v3 = 0;
  v1 = KiBugCheckRecoveryPrepareForCrashDump(&v3, (bool *)&v2);
  KiInvokeBugCheckEntryCallbacks(8u, 0LL, 0);
  if ( v1 )
  {
    KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
    KiBugCheckRecoveryCleanupFromCrashDump(v3, v2);
  }
}
