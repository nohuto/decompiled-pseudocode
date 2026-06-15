/*
 * XREFs of ?Matches@AudioEffectsWatcher@@UEAA_NKHW4DiscoverySettings@@@Z @ 0x1800D60C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall AudioEffectsWatcher::Matches(_DWORD *a1, int a2, int a3, int a4)
{
  return a2 == a1[43] && a1[44] == a3 && a1[45] == a4;
}
