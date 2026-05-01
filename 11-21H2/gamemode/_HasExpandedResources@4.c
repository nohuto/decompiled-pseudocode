/*
 * XREFs of _HasExpandedResources@4 @ 0x10005B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __stdcall HasExpandedResources(BOOL *hasExpandedResources)
{
  int v2; // [esp+4h] [ebp-Ch] BYREF
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 4;
  *hasExpandedResources = 0;
  v4 = 0;
  v2 = 0;
  if ( (int)NtQueryWnfStateData(WNF_RM_GAME_MODE_ACTIVE, 0, 0, &v2, &v4, &v3) >= 0 )
    *hasExpandedResources = v4 == GetCurrentProcessId();
  return 0;
}
