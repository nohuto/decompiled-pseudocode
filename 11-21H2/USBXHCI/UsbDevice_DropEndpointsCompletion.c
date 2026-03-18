/*
 * XREFs of UsbDevice_DropEndpointsCompletion @ 0x1C00465E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_DropEndpointsCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  unsigned __int16 v4; // r9
  unsigned int v5; // edi

  v2 = *(_QWORD **)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *((unsigned __int8 *)v2 + 135);
      v4 = 73;
LABEL_9:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v2[1] + 72LL),
        4u,
        0xCu,
        v4,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        v3,
        *v2);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v5 = 1;
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 75;
      goto LABEL_9;
    }
LABEL_10:
    if ( *((_DWORD *)v2 + 112) == 259 )
      *((_DWORD *)v2 + 112) = -1073741823;
    v5 = 2;
    return UsbDevice_QueueConfigureEndpointEvent((__int64)v2, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 72LL),
      4u,
      0xCu,
      0x4Au,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *v2);
  return UsbDevice_QueueConfigureEndpointEvent((__int64)v2, v5);
}
