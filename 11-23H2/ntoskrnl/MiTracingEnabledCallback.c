/*
 * XREFs of MiTracingEnabledCallback @ 0x140865E80
 * Callers:
 *     <none>
 * Callees:
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 */

__int64 __fastcall MiTracingEnabledCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 && (a4 & 0x20) != 0 )
    return MiLogHotPatchRundown();
  return result;
}
