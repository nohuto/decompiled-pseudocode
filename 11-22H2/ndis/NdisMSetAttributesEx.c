/*
 * XREFs of NdisMSetAttributesEx @ 0x1C01492A0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00182A0 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C006FAF0 (NdisMSetAttributes.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C0018AE0 (NdisInitializeTimer.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014950C (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  __int64 i; // rcx
  UINT v10; // edi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  KIRQL v16; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Eu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) != 0 )
  {
    if ( MiniportAdapterContext && *((NDIS_HANDLE *)MiniportAdapterHandle + 3) != MiniportAdapterContext )
      __int2c();
  }
  else
  {
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  }
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, NewIrql);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    v10 = 2;
  }
  else if ( CheckForHangTimeInSeconds > 0x40 )
  {
    v10 = 64;
  }
  else
  {
    v10 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v10;
  v11 = *((_DWORD *)MiniportAdapterHandle + 30);
  v12 = *((_DWORD *)MiniportAdapterHandle + 468) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  if ( (AttributeFlags & 8) != 0 )
  {
    v11 |= 8u;
    v12 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  v13 = v11;
  if ( (AttributeFlags & 1) != 0 )
  {
    v13 = v11 | 0x800;
    v12 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11 | 0x800;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
    v11 |= 0x800u;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v13 = v11 | 0x1000;
    v12 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11 | 0x1000;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v13 |= 0x8000u;
    v12 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v13;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v13 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v14 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v14 | 0x40000;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v15 & 0x20000) != 0 )
  {
    ndisReferencePackage((struct _PKG_REF *)&dword_1C00F4168);
    v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) > 5u
    || *((_BYTE *)MiniportAdapterHandle + 32) == 5 && *((_BYTE *)MiniportAdapterHandle + 33)
    || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) = v15 | 0x10000;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  v16 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Fu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      MiniportAdapterHandle);
}
