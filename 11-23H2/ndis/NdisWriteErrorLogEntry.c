/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C0069690
 * Callers:
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CA48 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C007B894 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00CD320 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     NdisMAllocateMapRegisters @ 0x1C0153F90 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x1C0069464 (McTemplateK0jqxzqqQR5_EtwWriteTransfer.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  const void *v7; // r14
  unsigned __int64 v8; // rcx
  char *ErrorLogEntry; // rax
  void *v10; // rbx
  __int64 v11; // rdx
  unsigned int *v12; // r8
  __int64 v13; // rcx
  char v14[8]; // [rsp+30h] [rbp-78h]
  unsigned int v15; // [rsp+C0h] [rbp+18h] BYREF

  v15 = NumberOfErrorValues;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)NdisAdapterHandle,
      ErrorCode);
    NumberOfErrorValues = v15;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 482);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v8 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v8 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1905),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 477),
            v8 = v6 + 48 + 4LL * NumberOfErrorValues,
            v8 <= 0xFFFFFFFF)
        && (unsigned int)v8 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 478), v8);
        v10 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *(_WORD *)ErrorLogEntry = 0;
          v11 = 0LL;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v15;
          if ( v15 )
          {
            v12 = &v15;
            do
            {
              v13 = (unsigned int)v11;
              v12 += 2;
              v11 = (unsigned int)(v11 + 1);
              *(_DWORD *)&ErrorLogEntry[4 * v13 + 40] = *v12;
            }
            while ( (unsigned int)v11 < v15 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v15 + 12);
            memmove(&ErrorLogEntry[4 * v15 + 48], v7, (unsigned int)v6);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (byte_1C00F7644 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5_EtwWriteTransfer(
              *((_QWORD *)NdisAdapterHandle + 482),
              v11,
              (const GUID *)((char *)NdisAdapterHandle + 4008),
              (__int64)NdisAdapterHandle + 4008,
              *((_DWORD *)NdisAdapterHandle + 1014),
              *((_QWORD *)NdisAdapterHandle + 503),
              *(const wchar_t **)(*((_QWORD *)NdisAdapterHandle + 482) + 8LL),
              ErrorCode,
              v15,
              (__int64)v10 + 40);
          IoWriteErrorLogEntry(v10);
        }
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = ErrorCode;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)NdisAdapterHandle,
      *(_QWORD *)v14);
  }
}
