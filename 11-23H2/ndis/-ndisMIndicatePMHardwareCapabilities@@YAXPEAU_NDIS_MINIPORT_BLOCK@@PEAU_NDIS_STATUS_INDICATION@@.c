/*
 * XREFs of ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093EB8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E1D0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092C9C (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicatePMHardwareCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned __int16 *StatusBuffer; // rdi
  unsigned int StatusBufferSize; // ecx
  KIRQL v5; // dl
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  StatusBuffer = (unsigned __int16 *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  NewIrql = 0;
  if ( StatusBufferSize >= 0x34 && StatusBufferSize >= StatusBuffer[1] )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( StatusBuffer[1] >= 0x3Cu )
    {
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)StatusBuffer;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *((_OWORD *)StatusBuffer + 1);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *((_OWORD *)StatusBuffer + 2);
      *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *((_QWORD *)StatusBuffer + 6);
      a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents = *((_DWORD *)StatusBuffer + 14);
    }
    else
    {
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = 0LL;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = 0LL;
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = 0LL;
      *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp = 0LL;
      a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents = 0;
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)StatusBuffer;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *((_OWORD *)StatusBuffer + 1);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *((_OWORD *)StatusBuffer + 2);
      a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *((_DWORD *)StatusBuffer + 12);
    }
    ndisCheckMiniportWakeUpCapable(a1);
    v5 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
  }
}
