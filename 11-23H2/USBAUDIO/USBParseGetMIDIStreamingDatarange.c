/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x1C0034EB0
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0034AE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C003318C (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C0035174 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingDatarange(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        int a3,
        LONG a4,
        _QWORD *a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v9; // r14
  PUSB_INTERFACE_DESCRIPTOR v10; // rsi
  _QWORD *v11; // r14
  _QWORD *i; // rdi
  __int64 v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 DescriptorInConfiguration; // rcx
  __int64 j; // rbp
  unsigned __int8 *v18; // rdx
  __int64 v19; // rbp
  int v20; // r14d
  __int64 MIDIStreamingEndpointDescriptor; // rax
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  unsigned __int8 *v24; // rdx
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rax
  int v29; // eax
  bool v30; // zf
  __int64 (__fastcall **v31)(); // rax
  _QWORD *v32; // [rsp+80h] [rbp+8h] BYREF
  int v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v8 = -1073741438;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v10 = USBD_ParseConfigurationDescriptorEx(a2, a2, a4, -1, 1, 3, -1);
  if ( !v10 )
    return (unsigned int)v8;
  v11 = (_QWORD *)(v9 + 192);
  for ( i = (_QWORD *)*v11; ; i = (_QWORD *)*i )
  {
    v13 = a6;
    v32 = i;
    v14 = i;
    if ( i == v11 )
      break;
    if ( v10 == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      *(_QWORD *)(a6 + 200) = i;
      v8 = 0;
      v14 = i;
      break;
    }
  }
  if ( v14 != v11 )
  {
LABEL_17:
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_18;
  }
  v8 = USBHwAllocateAndBag(&v32, 8 * (unsigned int)v10->bNumEndpoints + 56, 64LL, *(_QWORD *)(a1 + 8));
  if ( v8 < 0 )
    return (unsigned int)v8;
  v15 = (_QWORD *)*v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 )
    __fastfail(3u);
  i = v32;
  *v32 = v15;
  i[1] = v11;
  v15[1] = i;
  *v11 = i;
  i[3] = v10;
  i[6] = i + 7;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a2, v10, 36LL, 7LL);
  if ( DescriptorInConfiguration )
  {
    for ( j = 0LL; (unsigned int)j < v10->bNumEndpoints; DescriptorInConfiguration = (__int64)&v18[*v18] )
    {
      *(_QWORD *)(i[6] + 8 * j) = USBParseFindDescriptorInConfiguration(a2, DescriptorInConfiguration, 5LL, 7LL);
      v18 = *(unsigned __int8 **)(i[6] + 8 * j);
      if ( !v18 )
        break;
      j = (unsigned int)(j + 1);
    }
    if ( (_DWORD)j != v10->bNumEndpoints )
      return (unsigned int)-1073741438;
    v8 = USBHwSelectStreamingMIDIInterface(a1, (__int64)i, 1);
    goto LABEL_17;
  }
LABEL_18:
  v19 = 0LL;
  if ( !v10->bNumEndpoints )
    return (unsigned int)-1073741438;
  v20 = v33;
  while ( 1 )
  {
    MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(a2, i, (unsigned int)v19);
    if ( MIDIStreamingEndpointDescriptor )
    {
      v22 = *(unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 3);
      v23 = 0;
      if ( *(_BYTE *)(MIDIStreamingEndpointDescriptor + 3) )
      {
        v24 = (unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 4);
        do
        {
          if ( v20 == *v24 )
            break;
          ++v23;
          ++v24;
        }
        while ( v23 < v22 );
      }
      if ( v23 < v22 )
        break;
    }
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v10->bNumEndpoints )
      return (unsigned int)-1073741438;
  }
  *(_DWORD *)(v13 + 208) = v20;
  *(_DWORD *)(v13 + 212) = v23;
  *(_QWORD *)(v13 + 136) = v10;
  v26 = *(_QWORD *)(i[6] + 8 * v19);
  *(_QWORD *)(v13 + 168) = v26;
  *(_QWORD *)(v13 + 200) = i;
  v27 = *(char *)(v26 + 2);
  *(_OWORD *)v13 = MIDIStreamingPinDataFormat;
  *(_OWORD *)(v13 + 16) = xmmword_1C001E420;
  *(_DWORD *)(v13 + 96) = ((v27 >> 7) & 8) + 8;
  v28 = a5;
  *(_OWORD *)(v13 + 32) = xmmword_1C001E430;
  *(_OWORD *)(v13 + 48) = xmmword_1C001E440;
  *(_OWORD *)(v13 + 64) = xmmword_1C001E450;
  *(_OWORD *)(v13 + 80) = xmmword_1C001E460;
  *v28 = v13;
  v29 = 32864;
  v30 = *(_DWORD *)(v13 + 96) == 16;
  if ( *(_DWORD *)(v13 + 96) != 16 )
    v29 = 88;
  *(_DWORD *)(v13 + 112) = v29;
  v31 = USBMidiInPinDispatch;
  if ( !v30 )
    v31 = USBMidiOutPinDispatch;
  *(_QWORD *)(v13 + 128) = v31;
  return (unsigned int)v8;
}
