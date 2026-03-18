/*
 * XREFs of PipProcessStartPhase2 @ 0x140768EA8
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14055FE50 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405643B8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     IopDoDeferredSetInterfaceState @ 0x140768F5C (IopDoDeferredSetInterfaceState.c)
 *     PnpUpdateRebootRequiredReason @ 0x140947274 (PnpUpdateRebootRequiredReason.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14094FBA0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x14094FCD4 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x140AF7328 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  int v8; // esi

  if ( (byte_140C0DD4B & 0x10) != 0 )
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
        v7 = *(unsigned int *)(a1 + 448);
        if ( (_DWORD)v7 != -1 )
        {
          if ( (_DWORD)v7 == 1 )
          {
            IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
            v7 = *(unsigned int *)(a1 + 448);
          }
          IopAllocateLegacyBootResources(v7, *(unsigned int *)(a1 + 452));
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
  PnpRequestDeviceRemoval(a1, 0, v8, v4);
  if ( *(_DWORD *)(a1 + 568) )
    IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
LABEL_7:
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v5,
      2,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
