/*
 * XREFs of sub_1402A0880 @ 0x1402A0880
 * Callers:
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409B2390 @ 0x1409B2390 (sub_1409B2390.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall sub_1402A0880(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
