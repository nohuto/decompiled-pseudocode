/*
 * XREFs of KeCopyAffinityEx2 @ 0x140368850
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 */

unsigned __int16 __fastcall KeCopyAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), a2);
}
