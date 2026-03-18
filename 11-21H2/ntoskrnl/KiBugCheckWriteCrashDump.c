/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x140567588
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KiCaptureDumpPostRecovery @ 0x140579004 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         KiBugCheckData,
         qword_140C2BD88,
         qword_140C2BD90,
         qword_140C2BD98,
         qword_140C2BDA0,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
