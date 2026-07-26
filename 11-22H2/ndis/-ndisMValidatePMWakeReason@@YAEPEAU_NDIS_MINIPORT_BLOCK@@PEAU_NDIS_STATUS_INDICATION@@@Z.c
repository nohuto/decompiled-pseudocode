/*
 * XREFs of ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0094534
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0016750 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C005B244 (McTemplateK0xq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C008B1A0 (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1C008D55C (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0094300 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

bool __fastcall ndisMValidatePMWakeReason(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_STATUS_INDICATION *a2,
        __int64 a3)
{
  __int64 StatusBufferSize; // rdx
  unsigned __int16 *StatusBuffer; // rbx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // ecx
  unsigned __int16 v15; // r9

  StatusBufferSize = a2->StatusBufferSize;
  if ( (unsigned int)StatusBufferSize < 0x14 )
  {
    NdisTraceLoggingMiniportWakeBufferTooLarge(a1);
    a1->LastWakeReason = 0xFFFF;
    return 0;
  }
  StatusBuffer = (unsigned __int16 *)a2->StatusBuffer;
  a1->LastWakeReason = *((_DWORD *)StatusBuffer + 2);
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0xq_EtwWriteTransfer(
      (__int64)a1,
      &NicWakeReason,
      &a1->InterfaceGuid,
      a1->NetLuid.Value,
      *((_DWORD *)StatusBuffer + 2));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      StatusBufferSize,
      a3,
      0x8Au,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *((_DWORD *)StatusBuffer + 2),
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( *(_BYTE *)StatusBuffer != 0x80
    || *((_BYTE *)StatusBuffer + 1) != 1
    || (v7 = StatusBuffer[1], (unsigned __int16)v7 < 0x14u)
    || (v8 = a2->StatusBufferSize, v7 > v8) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v15 = 139;
    goto LABEL_40;
  }
  if ( *((_DWORD *)StatusBuffer + 1) )
    return 0;
  v9 = *((unsigned int *)StatusBuffer + 3);
  if ( (v9 & 7) != 0 )
    return 0;
  if ( (unsigned int)v9 > v8
    || (unsigned __int16 *)((char *)StatusBuffer + v9) < StatusBuffer
    || (v10 = *((_DWORD *)StatusBuffer + 4), v10 + (int)v9 < (unsigned int)v9)
    || v10 + (int)v9 > v8 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v15 = 140;
LABEL_40:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      v15,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a1);
    return 0;
  }
  v11 = *((unsigned int *)StatusBuffer + 2);
  if ( (int)v11 > 4099 )
  {
    if ( (_DWORD)v11 == 0x2000 || (_DWORD)v11 == 8193 || (_DWORD)v11 == 8194 )
      goto LABEL_26;
    v13 = v11 - 8196;
    v12 = (_DWORD)v11 == 8196;
  }
  else
  {
    switch ( (_DWORD)v11 )
    {
      case 0x1003:
        goto LABEL_26;
      case 1:
        return ndisMValidatePMWakePacket(a1, a2);
      case 2:
      case 3:
      case 0x1000:
        goto LABEL_26;
    }
    v13 = v11 - 4097;
    v12 = (_DWORD)v11 == 4097;
  }
  if ( !v12 && v13 != 1 )
    return 0;
LABEL_26:
  if ( (_DWORD)v9 || v10 )
    return 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0xEu,
      0x8Du,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v11,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  return 1;
}
