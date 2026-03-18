/*
 * XREFs of MiSplitDriverPage @ 0x140A2B6AC
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140236C50 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, unsigned __int64 a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
