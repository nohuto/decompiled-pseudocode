/*
 * XREFs of IoIsIoPriorityBoostActive @ 0x140356220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IoIsIoPriorityBoostActive(__int64 a1)
{
  return *(_DWORD *)(a1 + 1444) != 0;
}
