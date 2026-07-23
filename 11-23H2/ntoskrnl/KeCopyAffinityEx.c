/*
 * XREFs of KeCopyAffinityEx @ 0x14056F900
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, 0x14u, a2);
}
