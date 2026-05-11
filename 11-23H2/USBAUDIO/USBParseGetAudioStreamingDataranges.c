/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C0034858
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0034AE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C001AF80 (memset.c)
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     IsSupportedFormat @ 0x1C00338F8 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0033AE8 (USBParseConvertInterfaceToDataRange.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 *     IsZeroBWInterface @ 0x1C003898C (IsZeroBWInterface.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        LONG a3,
        _QWORD *a4,
        __int64 a5)
{
  PUSB_INTERFACE_DESCRIPTOR i; // rax
  unsigned __int8 *p_bLength; // rbp
  int v11; // esi
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // r14
  __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  __int64 (__fastcall **v16)(PVOID *); // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD v21[18]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v22[22]; // [rsp+D0h] [rbp-D8h] BYREF

  for ( i = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
        ;
        i = USBParseGetNextAudioInterface(a2, p_bLength) )
  {
    p_bLength = &i->bLength;
    if ( !i )
    {
      v11 = -1073741438;
      goto LABEL_6;
    }
    if ( (unsigned __int8)IsZeroBWInterface(a2, i) )
      break;
  }
  memset(v21, 0, 0x88uLL);
  memset(v22, 0, sizeof(v22));
  v22[2] = a1;
  v21[2] = v22;
  v11 = USBHwSelectStreamingAudioInterface(v21, p_bLength, v17, v18);
LABEL_6:
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    v13 = a5 + 128;
    while ( 1 )
    {
      if ( v11 < 0 )
        return (unsigned int)v11;
      if ( !(unsigned __int8)IsZeroBWInterface(a2, NextAudioInterface) )
      {
        if ( IsSupportedFormat((__int64)a2, (__int64)NextAudioInterface, v14) )
        {
          *(_QWORD *)(v13 + 16) = p_bLength;
          v11 = USBParseConvertInterfaceToDataRange(a2, &NextAudioInterface->bLength, v13 - 128);
          if ( v11 >= 0 )
            break;
        }
      }
LABEL_28:
      NextAudioInterface = USBParseGetNextAudioInterface(a2, &NextAudioInterface->bLength);
      if ( !NextAudioInterface )
        return (unsigned int)v11;
    }
    v15 = *(_DWORD *)(v13 + 88) & 0xF000;
    if ( v15 )
    {
      if ( v15 == 4096 )
      {
        v16 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v13 - 16) = 896;
LABEL_22:
        *(_QWORD *)v13 = v16;
LABEL_23:
        if ( *(_DWORD *)(v13 - 20) )
        {
          v11 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v13 - 8), ExFreePool);
          if ( v11 < 0 )
            ExFreePool(*(PVOID *)(v13 - 8));
        }
        if ( a4 )
        {
          *a4 = v13 - 128;
          *(_DWORD *)(v13 - 124) |= 2u;
          a4[1] = &unk_1C00223A8;
          a4 += 2;
          v13 += 232LL;
        }
        goto LABEL_28;
      }
      if ( v15 != 0x2000 )
        goto LABEL_23;
      v16 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v13 + 40) + 2LL) < 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v13 = &USBCapturePinDispatch;
        *(_DWORD *)(v13 - 16) = 12 * (*(_DWORD *)(v19 + 208) * (*(_DWORD *)(v13 + 92) + 12) + 232);
        goto LABEL_23;
      }
      v16 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v13 - 16) = 984;
    goto LABEL_22;
  }
  return (unsigned int)v11;
}
