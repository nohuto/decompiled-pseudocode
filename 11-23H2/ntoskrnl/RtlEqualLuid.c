/*
 * XREFs of RtlEqualLuid @ 0x1409BC250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlEqualLuid(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
