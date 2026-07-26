/*
 * XREFs of NdisIfFreeNetLuidIndex @ 0x1C010FFD0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015958 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1C00B867C (ndisIfDeleteCompartment.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dl @ 0x1C0015A8C (WPP_RECORDER_SF_dl.c)
 *     WPP_RECORDER_SF_dlL @ 0x1C0015B20 (WPP_RECORDER_SF_dlL.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisIfWriteRegistry @ 0x1C013DFC8 (ndisIfWriteRegistry.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisIfFreeNetLuidIndex(NET_IFTYPE ifType, UINT32 NetLuidIndex)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NDIS_STATUS v6; // ebx
  PVOID *i; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  UINT32 v10; // r8d
  _BYTE *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dl(*((_QWORD *)WPP_GLOBAL_Control + 8), *(__int64 *)&NetLuidIndex, v2, v3, v17);
  ndisWaitForKernelObject(&Mutex);
  if ( NetLuidIndex > 0x1000 )
  {
LABEL_15:
    v6 = -1073741811;
  }
  else
  {
    for ( i = (PVOID *)qword_1C00F5E90; i != &qword_1C00F5E90; i = (PVOID *)*i )
    {
      if ( *((_WORD *)i + 8) == ifType )
      {
        v8 = NetLuidIndex >> 3;
        if ( (int)v8 + 1 < (unsigned int)v8 || *((_DWORD *)i + 10) < (unsigned int)(v8 + 1) )
          goto LABEL_15;
        v9 = (unsigned int)v8;
        v10 = NetLuidIndex & 7;
        *((_BYTE *)i[6] + (unsigned int)v8) = *((_BYTE *)i[6] + v8) & ~(1 << v10);
        v11 = i[7];
        v12 = (unsigned __int8)v11[(unsigned int)v8];
        if ( _bittest(&v12, v10) )
        {
          v11[v9] = v12 & ~(1 << v10);
          v6 = ndisIfWriteRegistry();
        }
        break;
      }
    }
  }
  KeReleaseMutex(&Mutex, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dlL(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15, v17);
  return v6;
}
