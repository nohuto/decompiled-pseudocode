/*
 * XREFs of MiJumpStack @ 0x140590CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
