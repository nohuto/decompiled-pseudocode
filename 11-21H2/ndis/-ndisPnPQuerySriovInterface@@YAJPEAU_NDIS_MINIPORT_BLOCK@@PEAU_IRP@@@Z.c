/*
 * XREFs of ?ndisPnPQuerySriovInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0074DF4
 * Callers:
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079F28 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisPnPQuerySriovInterface(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v4; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _QWORD *QuadPart; // rax
  char v9[4]; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x57u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.QueryInterface.Size >= 0x78u
    && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
  {
    if ( ndisSystemSupportsSriov
      && (SriovCurrentCapabilities = a1->SriovCurrentCapabilities) != 0LL
      && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
    {
      QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      QuadPart[2] = ndisSriovInterfaceReference;
      QuadPart[3] = ndisSriovInterfaceDereference;
      QuadPart[4] = ndisSriovInterfaceReadVFConfig;
      QuadPart[5] = ndisSriovInterfaceWriteVFConfig;
      QuadPart[6] = ndisSriovInterfaceReadVfConfigBlock;
      QuadPart[7] = ndisSriovInterfaceWriteVfConfigBlock;
      QuadPart[8] = ndisSriovInterfaceQueryProbedBars;
      QuadPart[9] = ndisSriovInterfaceGetVendorAndDeviceIds;
      QuadPart[10] = ndisSriovInterfaceGetDeviceLocation;
      QuadPart[11] = ndisSriovInterfaceResetVF;
      QuadPart[12] = ndisSriovInterfaceSetVfPowerState;
      QuadPart[14] = ndisSriovQueryLuid;
      QuadPart[13] = ndisSriovGetResourceForBar;
      *QuadPart = 65656LL;
      QuadPart[1] = a1;
      ndisReferenceMiniportNoCheck(a1, MPREF_RES_IOV);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x58u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)a1,
      *(_DWORD *)v9);
  }
  return v4;
}
