/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x140569B8C
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiCaptureDumpPostRecovery @ 0x14057AD20 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x140550A80 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1405513A0 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         KiBugCheckData,
         qword_140C42808,
         qword_140C42810,
         qword_140C42818,
         qword_140C42820,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
