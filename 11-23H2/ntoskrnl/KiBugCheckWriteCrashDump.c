/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x14056A1AC
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiCaptureDumpPostRecovery @ 0x14057B180 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x1405510A0 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1405519C0 (IoWriteCrashDump.c)
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
