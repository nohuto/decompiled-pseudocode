/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C002A098
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C001AA50 (NdisAllocateNetBufferListPool.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0022B4C (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisGetVersion @ 0x1C002A040 (NdisGetVersion.c)
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0031030 (NdisAllocatePacketPoolEx.c)
 *     ndisEtwRegisterGuids @ 0x1C0034950 (ndisEtwRegisterGuids.c)
 *     ndisDriverSystemDispatch @ 0x1C0034AD0 (ndisDriverSystemDispatch.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BEE0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ndisCpuHotAddHandler @ 0x1C0074120 (ndisCpuHotAddHandler.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094990 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094BC0 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099314 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83C4 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     NdisOpenFile @ 0x1C00C37C0 (NdisOpenFile.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBF98 (ndisLwmIoctlIrpHandler.c)
 *     ndisValidateSGDmaDescription @ 0x1C00CDA6C (ndisValidateSGDmaDescription.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110FB4 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisSetAoAcOptions @ 0x1C012B5F0 (NdisSetAoAcOptions.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C01412A0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BEC (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     NdisMapFile @ 0x1C01574A0 (NdisMapFile.c)
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0163890 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v10, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v7 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
