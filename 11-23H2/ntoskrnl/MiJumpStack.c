/*
 * XREFs of MiJumpStack @ 0x14062CF60
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403C66F0 (KeGenericCallDpcEx.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx((__int64)MiDoStackCopy, a1);
}
