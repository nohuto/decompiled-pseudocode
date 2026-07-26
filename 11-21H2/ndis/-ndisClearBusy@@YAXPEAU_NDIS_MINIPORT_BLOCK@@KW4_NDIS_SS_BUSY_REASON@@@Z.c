/*
 * XREFs of ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0001BA0 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00091D0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C00251E8 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0035930 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C005FD70 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     NdisMResetComplete @ 0x1C006A5D0 (NdisMResetComplete.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1C00AB210 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00AEF10 (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFC6C (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00B0854 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00B096C (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A0D0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C013C890 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisClearBusy(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v7; // ebp
  KIRQL v8; // r15
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi

  v4 = *(_QWORD *)(a1 + 4448);
  v7 = *(_DWORD *)(a1 + 120) & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( a3 > 49 )
  {
    v13 = a3 - 50;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 == 1 )
              *(_DWORD *)(v4 + 576) -= a2;
          }
          else
          {
            *(_DWORD *)(v4 + 524) -= a2;
          }
        }
        else
        {
          *(_DWORD *)(v4 + 520) -= a2;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 532) -= a2;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 528) -= a2;
    }
  }
  else if ( a3 == 49 )
  {
    *(_DWORD *)(v4 + 512) &= ~0x10u;
  }
  else
  {
    v9 = a3 - 33;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              --*(_DWORD *)(v4 + 516);
          }
          else
          {
            *(_DWORD *)(v4 + 512) &= ~8u;
          }
        }
        else
        {
          *(_DWORD *)(v4 + 512) &= ~4u;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 512) &= ~2u;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 512) &= ~1u;
    }
  }
  if ( v7
    && !*(_DWORD *)(v4 + 512)
    && !*(_DWORD *)(v4 + 516)
    && !*(_DWORD *)(v4 + 528)
    && !*(_DWORD *)(v4 + 532)
    && !*(_DWORD *)(v4 + 520)
    && !*(_DWORD *)(v4 + 524)
    && !*(_DWORD *)(v4 + 576)
    && !*(_DWORD *)(v4 + 508) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 360LL) + 48LL))(*(_QWORD *)(a1 + 24));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
}
