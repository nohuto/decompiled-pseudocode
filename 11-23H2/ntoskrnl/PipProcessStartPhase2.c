/*
 * XREFs of PipProcessStartPhase2 @ 0x140790E98
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AE84 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14055FDB0 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405644F8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     IopDoDeferredSetInterfaceState @ 0x1407911D4 (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x1408673BC (PnpRequestDeviceRemoval.c)
 *     PnpUpdateRebootRequiredReason @ 0x140958DC0 (PnpUpdateRebootRequiredReason.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140963A90 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x140963BC4 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x140B3A148 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  int v7; // eax
  unsigned int v8; // ebp

  if ( (byte_140C0E20B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      2,
      *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 >= 0 )
    {
      PpProfileCommitTransitioningDock(a1);
LABEL_5:
      IopDoDeferredSetInterfaceState(a1);
      if ( !IopBootConfigsReserved )
      {
        v7 = *(_DWORD *)(a1 + 448);
        if ( v7 != -1 )
        {
          if ( v7 == 1 )
            IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
          IopAllocateLegacyBootResources(*(unsigned int *)(a1 + 448), *(unsigned int *)(a1 + 452));
        }
      }
      PipSetDevNodeState(a1, 777);
      goto LABEL_7;
    }
    PpProfileCancelHardwareProfileTransition();
  }
  else if ( v4 >= 0 )
  {
    goto LABEL_5;
  }
  if ( v4 == -1073741102 )
  {
    v8 = 14;
    PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), a2, 0x40000000LL);
  }
  else
  {
    v8 = 10;
  }
  PnpRequestDeviceRemoval(a1, 0LL, v8, (unsigned int)v4);
  if ( *(_DWORD *)(a1 + 568) )
    IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
LABEL_7:
  if ( (byte_140C0E20B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v5,
      2,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
