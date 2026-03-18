/*
 * XREFs of KeCopyAffinityEx @ 0x14056F3C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, 0x14u, a2);
}
