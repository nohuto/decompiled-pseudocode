/*
 * XREFs of ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022F88
 * Callers:
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0022EA8 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A588 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002A724 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1C0035E7C (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00611E8 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0061390 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C00614E4 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     NdisIfGetInterfaceIndexFromNetLuid @ 0x1C00B76E0 (NdisIfGetInterfaceIndexFromNetLuid.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B93F0 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B9994 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B9DF0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00BA170 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00BA3D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BA6C0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindInterfaceByNetLuid(union _NET_LUID_LH a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( Flink[5].Flink == (_LIST_ENTRY *)a1.Value )
      return Flink - 77;
    if ( Flink[5].Flink > (_LIST_ENTRY *)a1.Value )
      return (_LIST_ENTRY *)v2;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
