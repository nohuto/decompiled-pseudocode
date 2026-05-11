/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C0036CB8
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0036FE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C0019940 (memset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     IsSupportedFormat @ 0x1C0035D24 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0035F24 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C0037190 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C0037A00 (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(__int64 a1, void *a2, LONG a3, _QWORD *a4, __int64 a5)
{
  __int64 i; // rax
  _BYTE *v10; // rdi
  char v11; // al
  __int64 EndpointDescriptor; // rax
  int v13; // ebp
  __int64 FirstStreamingAudioInterface; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // rax
  int v19; // eax
  __int64 (__fastcall **v20)(PVOID *); // rax
  __int64 v21; // rcx
  _QWORD v23[18]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v24[22]; // [rsp+B0h] [rbp-D8h] BYREF

  for ( i = USBParseGetFirstStreamingAudioInterface(a2, a3, 2); ; i = USBParseGetNextAudioInterface(a2, v10) )
  {
    v10 = (_BYTE *)i;
    if ( !i )
      break;
    v11 = *(_BYTE *)(i + 4);
    if ( v11 )
    {
      if ( v11 != 1 )
        continue;
      EndpointDescriptor = USBParseGetEndpointDescriptor(a2, v10, 0LL);
      if ( EndpointDescriptor )
      {
        if ( *(_WORD *)(EndpointDescriptor + 4) )
          continue;
      }
    }
    if ( v10 )
    {
      memset(v23, 0, 0x88uLL);
      memset(v24, 0, sizeof(v24));
      v24[2] = a1;
      v23[2] = v24;
      v13 = USBHwSelectStreamingAudioInterface((__int64)v23, v10);
      goto LABEL_11;
    }
    break;
  }
  v13 = -1073741438;
LABEL_11:
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(a2, a3, 2);
  if ( FirstStreamingAudioInterface )
  {
    v16 = a5 + 128;
    while ( 1 )
    {
      if ( v13 < 0 )
        return (unsigned int)v13;
      v17 = *(_BYTE *)(FirstStreamingAudioInterface + 4);
      if ( v17 )
      {
        if ( (v17 != 1
           || (v18 = USBParseGetEndpointDescriptor(a2, FirstStreamingAudioInterface, 0LL)) != 0 && *(_WORD *)(v18 + 4))
          && IsSupportedFormat((__int64)a2, FirstStreamingAudioInterface, v15) )
        {
          *(_QWORD *)(v16 + 16) = v10;
          v13 = USBParseConvertInterfaceToDataRange((__int64)a2, FirstStreamingAudioInterface, v16 - 128);
          if ( v13 >= 0 )
            break;
        }
      }
LABEL_35:
      FirstStreamingAudioInterface = USBParseGetNextAudioInterface(a2, FirstStreamingAudioInterface);
      if ( !FirstStreamingAudioInterface )
        return (unsigned int)v13;
    }
    v19 = *(_DWORD *)(v16 + 88) & 0xF000;
    if ( v19 )
    {
      if ( v19 == 4096 )
      {
        v20 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v16 - 16) = 896;
LABEL_29:
        *(_QWORD *)v16 = v20;
LABEL_30:
        if ( *(_DWORD *)(v16 - 20) )
        {
          v13 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v16 - 8), ExFreePool);
          if ( v13 < 0 )
            ExFreePool(*(PVOID *)(v16 - 8));
        }
        if ( a4 )
        {
          *a4 = v16 - 128;
          *(_DWORD *)(v16 - 124) |= 2u;
          a4[1] = &unk_1C00203A8;
          a4 += 2;
          v16 += 232LL;
        }
        goto LABEL_35;
      }
      if ( v19 != 0x2000 )
        goto LABEL_30;
      v20 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v16 + 40) + 2LL) < 0 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v16 = &USBCapturePinDispatch;
        *(_DWORD *)(v16 - 16) = 12 * (*(_DWORD *)(v21 + 208) * (*(_DWORD *)(v16 + 92) + 12) + 232);
        goto LABEL_30;
      }
      v20 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v16 - 16) = 984;
    goto LABEL_29;
  }
  return (unsigned int)v13;
}
