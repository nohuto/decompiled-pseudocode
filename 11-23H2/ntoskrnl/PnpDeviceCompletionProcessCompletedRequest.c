/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x14079529C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406CBC58 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140322C94 (PnpDeviceCompletionRequestDestroy.c)
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x140368050 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1407E1118 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 776 || v3 == 781 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(a1);
  return *(unsigned int *)(v2 + 392);
}
