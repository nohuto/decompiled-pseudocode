/*
 * XREFs of Isoch_MapTransfers @ 0x1C000A788
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_EvtDmaCallback @ 0x1C0009060 (Isoch_EvtDmaCallback.c)
 *     Isoch_EP_StartMapping @ 0x1C000A800 (Isoch_EP_StartMapping.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C000A880 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_CommonBufferCallback @ 0x1C0041CA0 (Isoch_CommonBufferCallback.c)
 * Callees:
 *     Isoch_MappingLoop @ 0x1C000A6A0 (Isoch_MappingLoop.c)
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v4,
        14,
        67,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    Isoch_MappingLoop((_QWORD *)a1);
    result = *(unsigned int *)(a1 + 108);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 344) )
      return result;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_14:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 348) )
    {
      result = TR_AttemptStateChange(a1, 4, 3);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 320),
          0LL);
        goto LABEL_14;
      }
    }
  }
  return result;
}
