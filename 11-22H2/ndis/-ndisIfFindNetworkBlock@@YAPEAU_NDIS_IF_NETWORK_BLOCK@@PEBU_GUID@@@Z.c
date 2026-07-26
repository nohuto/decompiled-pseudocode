/*
 * XREFs of ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BDE8
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C001B90C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001BF74 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A3F8 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CD80 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002F068 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BAFA0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2C0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB820 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisCompareGuid @ 0x1C001BE50 (ndisCompareGuid.c)
 */

struct _NDIS_IF_NETWORK_BLOCK *__fastcall ndisIfFindNetworkBlock(const struct _GUID *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v1 = (__int64 *)qword_1C00F5DB0;
  v3 = 0LL;
  while ( v1 != &qword_1C00F5DB0 )
  {
    v4 = ndisCompareGuid(v1 + 4, a1);
    if ( !v4 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v1;
    if ( v4 > 0 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
    v1 = (__int64 *)*v1;
  }
  return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
}
