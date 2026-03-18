/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x140569AEC
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiCaptureDumpPostRecovery @ 0x14057AC90 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x1405509E0 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x140551300 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         KiBugCheckData,
         qword_140C42788,
         qword_140C42790,
         qword_140C42798,
         qword_140C427A0,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
