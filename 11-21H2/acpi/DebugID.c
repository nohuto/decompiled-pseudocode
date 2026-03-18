/*
 * XREFs of DebugID @ 0x1C00672B0
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C00672F0 (DebugInPort.c)
 */

__int64 __fastcall DebugID(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 4LL);
}
