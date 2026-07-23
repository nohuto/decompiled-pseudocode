/*
 * XREFs of KeSetAffinityThread @ 0x14056F530
 * Callers:
 *     <none>
 * Callees:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 */

__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  return KiSetLegacyAffinityThread(a1, a2);
}
