/*
 * XREFs of NdisGroupActiveProcessorMask @ 0x1C00C3360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisGroupActiveProcessorMask(USHORT Group)
{
  return KeQueryGroupAffinity(Group);
}
