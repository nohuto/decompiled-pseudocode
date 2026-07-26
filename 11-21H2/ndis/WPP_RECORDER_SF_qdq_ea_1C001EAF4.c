/*
 * XREFs of WPP_RECORDER_SF_qdq @ 0x1C001EAF4
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     NdisMAllocateSharedMemory @ 0x1C0059F00 (NdisMAllocateSharedMemory.c)
 *     NdisMFreeSharedMemory @ 0x1C005A700 (NdisMFreeSharedMemory.c)
 *     ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C0067A8C (-ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z.c)
 *     NdisMRegisterScatterGatherDma @ 0x1C00C9880 (NdisMRegisterScatterGatherDma.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C013EEF8 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AC73C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qdq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // rbx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 8LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v13, &a6);
}
