/*
 * XREFs of PipProcessStartPhase2 @ 0x140791088
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x140560470 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140564BB8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     IopDoDeferredSetInterfaceState @ 0x1407913C4 (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     PnpUpdateRebootRequiredReason @ 0x140958FC0 (PnpUpdateRebootRequiredReason.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140963C90 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x140963DC4 (PpProfileCommitTransitioningDock.c)
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
