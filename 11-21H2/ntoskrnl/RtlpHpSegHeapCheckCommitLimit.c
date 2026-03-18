/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x140371218
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140351BF4 (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, unsigned __int64 *a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (a2[12] + a2[17]) << 12, (int)a2, a2 + 4);
}
