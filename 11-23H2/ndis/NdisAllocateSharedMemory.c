/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C00CDD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dq @ 0x1C007E7BC (WPP_RECORDER_SF_dq_ea_1C007E7BC.c)
 *     ndisAllocateSharedMemoryInternal @ 0x1C00CC2B0 (ndisAllocateSharedMemoryInternal.c)
 *     ndisGetSharedMemoryAllocationDetails @ 0x1C00CC8B4 (ndisGetSharedMemoryAllocationDetails.c)
 *     ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x1C00CF554 (--0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7E4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C012E364 (--0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C012E3A4 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ?SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z @ 0x1C012E4D4 (-SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  int SharedMemoryAllocationDetails; // eax
  bool v7; // dl
  NDIS_STATUS v8; // ebx
  __int64 v9; // rdx
  unsigned int PreferredNode; // ecx
  int v11; // eax
  char v13[8]; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+90h] [rbp-70h]
  unsigned int v20; // [rsp+A4h] [rbp-5Ch]
  char v21[4]; // [rsp+B0h] [rbp-50h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x37u,
      (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
  *pAllocationHandle = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)&ndisGlobalStatistics);
  NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
  v16 = 0LL;
  v15 = 0LL;
  SharedMemoryAllocationDetails = ndisGetSharedMemoryAllocationDetails(
                                    (struct _NDIS_MINIPORT_BLOCK *)NdisHandle,
                                    (__int64)SharedMemoryParameters,
                                    (__int64)&v14);
  NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
    (NdisAllocateSharedMemoryTelemetry *)v18,
    v7,
    SharedMemoryParameters,
    SharedMemoryAllocationDetails);
  v8 = *(_DWORD *)v21;
  if ( *(_DWORD *)v21 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = *(_DWORD *)v21;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x38u,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        *(_QWORD *)v13);
      v8 = *(_DWORD *)v21;
    }
  }
  else
  {
    v9 = v16;
    if ( v16 )
      NdisDmaAllocationHistogramStopwatch::SetMacAddress(
        (NdisDmaAllocationHistogramStopwatch *)v17,
        (const unsigned __int8 *const)(v16 + 120));
    PreferredNode = SharedMemoryParameters->PreferredNode;
    if ( v18[0] || v18[1] )
    {
      if ( (_QWORD)v15 )
        v19 = *(_OWORD *)(v15 + 4008);
      v20 = PreferredNode;
    }
    if ( (_DWORD)v14 == 1 )
      v11 = ndisAllocateSharedMemoryInternal(&v14, v9, SharedMemoryParameters, pAllocationHandle);
    else
      v11 = -1073741823;
    *(_DWORD *)v21 = v11;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x39u,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        v11,
        *pAllocationHandle);
      v11 = *(_DWORD *)v21;
    }
    v8 = v11;
  }
  NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v18);
  NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
  return v8;
}
