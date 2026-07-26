/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C00C9070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00792E0 (WPP_RECORDER_SF_dq.c)
 *     ndisAllocateSharedMemoryInternal @ 0x1C00C7534 (ndisAllocateSharedMemoryInternal.c)
 *     ndisGetSharedMemoryAllocationDetails @ 0x1C00C7AF0 (ndisGetSharedMemoryAllocationDetails.c)
 *     ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x1C00CA888 (--0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAB10 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C0122864 (--0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C01228A4 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ?SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z @ 0x1C01229D4 (-SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  int SharedMemoryAllocationDetails; // eax
  bool v7; // dl
  NDIS_STATUS v8; // ebx
  unsigned int PreferredNode; // ecx
  char v11[8]; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+48h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  _BYTE v15[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v17; // [rsp+90h] [rbp-70h]
  unsigned int v18; // [rsp+A4h] [rbp-5Ch]
  char v19[4]; // [rsp+B0h] [rbp-50h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x32u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
  *pAllocationHandle = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)&ndisGlobalStatistics);
  NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v15);
  v14 = 0LL;
  v13 = 0LL;
  SharedMemoryAllocationDetails = ndisGetSharedMemoryAllocationDetails(
                                    (struct _NDIS_MINIPORT_BLOCK *)NdisHandle,
                                    (__int64)SharedMemoryParameters,
                                    (__int64)&v12);
  NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
    (NdisAllocateSharedMemoryTelemetry *)v16,
    v7,
    SharedMemoryParameters,
    SharedMemoryAllocationDetails);
  v8 = *(_DWORD *)v19;
  if ( *(_DWORD *)v19 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v11 = *(_DWORD *)v19;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x33u,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
        *(_QWORD *)v11);
LABEL_18:
      v8 = *(_DWORD *)v19;
    }
  }
  else
  {
    if ( v14 )
      NdisDmaAllocationHistogramStopwatch::SetMacAddress(
        (NdisDmaAllocationHistogramStopwatch *)v15,
        (const unsigned __int8 *const)(v14 + 120));
    PreferredNode = SharedMemoryParameters->PreferredNode;
    if ( v16[0] || v16[1] )
    {
      if ( (_QWORD)v13 )
        v17 = *(_OWORD *)(v13 + 4008);
      v18 = PreferredNode;
    }
    if ( (_DWORD)v12 == 1 )
    {
      v8 = ndisAllocateSharedMemoryInternal(&v12, SharedMemoryParameters, pAllocationHandle);
      *(_DWORD *)v19 = v8;
    }
    else
    {
      v8 = -1073741823;
      *(_DWORD *)v19 = -1073741823;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x34u,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
        v8,
        *pAllocationHandle);
      goto LABEL_18;
    }
  }
  NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v16);
  NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v15);
  return v8;
}
