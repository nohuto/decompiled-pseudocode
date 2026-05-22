/*
 * XREFs of ?SetOnlyMixedWorldRouting@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_N@Z @ 0x1800B1F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MPCManager::SetOnlyMixedWorldRouting(MPCManager *this, struct BamoMPCManagerStub *a2, char a3)
{
  *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) = a3;
  return 0LL;
}
