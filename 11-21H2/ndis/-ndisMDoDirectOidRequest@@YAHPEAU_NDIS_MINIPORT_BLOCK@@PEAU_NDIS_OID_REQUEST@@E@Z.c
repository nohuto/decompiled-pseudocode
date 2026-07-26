/*
 * XREFs of ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFC6C
 * Callers:
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C0039FF8 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AF524 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8234 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00B0010 (ndisMInvokeDirectOidRequest.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char a3)
{
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rbp
  unsigned int v7; // edi
  unsigned int DirectOidRequestCount; // edx
  KIRQL v9; // dl
  unsigned int PnPFlags; // ecx
  NDIS_REQUEST_TYPE RequestType; // eax
  int v12; // ecx
  unsigned int v13; // eax
  KIRQL v14; // dl
  bool v15; // zf
  KIRQL v16; // dl
  __int64 v18; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+90h] [rbp+18h] BYREF

  NewIrql = 0;
  AllDirectRequestsCompletedEvent = 0LL;
  v7 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      a2);
  if ( a3 || !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync((__int64)a1) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    DirectOidRequestCount = a1->DirectOidRequestCount;
    if ( DirectOidRequestCount < 0x4E20 )
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x20000) != 0 )
      {
        v7 = -1073676276;
      }
      else if ( (a1->Flags & 0x80000) != 0 )
      {
        v7 = -1073676275;
      }
      else
      {
        RequestType = a2->RequestType;
        if ( RequestType == NdisRequestQueryStatistics
          && ((PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
        {
          v7 = -2147483633;
        }
        else
        {
          v12 = PnPFlags & 0x20100;
          if ( v12 || a1->CurrentDevicePowerState > PowerDeviceD0 )
          {
            if ( (RequestType & 0xFFFFFFFD) != 0 )
            {
              if ( RequestType == NdisRequestSetInformation )
              {
                a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
                v7 = v12 == 0 ? 0xC023002F : 0;
              }
              else if ( RequestType == NdisRequestMethod )
              {
                a2->DATA.METHOD_INFORMATION.BytesRead = 0;
              }
            }
            else
            {
              a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
            }
          }
          else
          {
            v13 = DirectOidRequestCount + 1;
            v14 = NewIrql;
            a1->DirectOidRequestCount = v13;
            *(_DWORD *)&a2->NdisReserved[16] |= 0x10000u;
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v14);
            v7 = ndisMInvokeDirectOidRequest(&a1->Header, a2);
            if ( v7 == 259 )
              goto LABEL_39;
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
            v15 = a1->DirectOidRequestCount-- == 1;
            if ( v15 && a1->AllDirectRequestsCompletedEvent )
            {
              AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
              a1->AllDirectRequestsCompletedEvent = 0LL;
            }
          }
        }
      }
      v16 = NewIrql;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v16);
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x14u,
          (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
          (char)a1,
          (char)a2,
          32,
          a1->DirectOidRequestCount);
      v9 = NewIrql;
      v7 = -1073741670;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
    }
    if ( !a3 && a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 50);
    if ( AllDirectRequestsCompletedEvent )
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x13u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        a2);
    v7 = 259;
  }
LABEL_39:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v7;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      v18);
  }
  return v7;
}
