/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x1C0037458
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0036FE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C0035458 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0036BDC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C0037190 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C00376E8 (USBParseGetMIDIStreamingEndpointDescriptor.c)
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
  PUSB_INTERFACE_DESCRIPTOR FirstStreamingAudioInterface; // rsi
  __int64 v11; // r15
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  _QWORD *v14; // rax
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rcx
  __int64 j; // rbp
  unsigned __int8 *v17; // rdx
  __int64 v18; // rbp
  int v19; // r14d
  __int64 MIDIStreamingEndpointDescriptor; // rax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned __int8 *v23; // r8
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *v27; // rax
  int v28; // eax
  bool v29; // zf
  __int64 (__fastcall **v30)(); // rax
  _QWORD *v31; // [rsp+60h] [rbp+8h] BYREF
  int v32; // [rsp+70h] [rbp+18h]

  v32 = a3;
  v8 = -1073741438;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(a2, a4, 3);
  if ( !FirstStreamingAudioInterface )
    return (unsigned int)v8;
  v11 = a6;
  v12 = (_QWORD *)(v9 + 192);
  for ( i = (_QWORD *)*v12; ; i = (_QWORD *)*i )
  {
    v31 = i;
    if ( i == v12 )
      break;
    if ( FirstStreamingAudioInterface == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      *(_QWORD *)(a6 + 200) = i;
      v8 = 0;
      break;
    }
  }
  if ( i != v12 )
  {
LABEL_18:
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_19;
  }
  v8 = USBHwAllocateAndBag(
         (PVOID *)&v31,
         8 * (unsigned int)FirstStreamingAudioInterface->bNumEndpoints + 56,
         64LL,
         *(void **)(a1 + 8));
  if ( v8 < 0 )
    return (unsigned int)v8;
  v14 = (_QWORD *)*v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 )
    __fastfail(3u);
  i = v31;
  *v31 = v14;
  i[1] = v12;
  v14[1] = i;
  *v12 = i;
  i[3] = FirstStreamingAudioInterface;
  i[6] = i + 7;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                (unsigned __int16 *)&a2->bLength,
                                (char *)FirstStreamingAudioInterface,
                                36,
                                7uLL);
  if ( DescriptorInConfiguration )
  {
    for ( j = 0LL;
          (unsigned int)j < FirstStreamingAudioInterface->bNumEndpoints;
          DescriptorInConfiguration = (PUSB_COMMON_DESCRIPTOR)&v17[*v17] )
    {
      *(_QWORD *)(i[6] + 8 * j) = USBParseFindDescriptorInConfiguration(
                                    (unsigned __int16 *)&a2->bLength,
                                    (char *)DescriptorInConfiguration,
                                    5,
                                    7uLL);
      v17 = *(unsigned __int8 **)(i[6] + 8 * j);
      if ( !v17 )
        break;
      j = (unsigned int)(j + 1);
    }
    if ( (_DWORD)j != FirstStreamingAudioInterface->bNumEndpoints )
      return (unsigned int)-1073741438;
    v8 = USBHwSelectStreamingMIDIInterface(a1, (__int64)i, 1);
    goto LABEL_18;
  }
LABEL_19:
  v18 = 0LL;
  if ( !FirstStreamingAudioInterface->bNumEndpoints )
    return (unsigned int)-1073741438;
  v19 = v32;
  while ( 1 )
  {
    MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(a2, i, (unsigned int)v18);
    if ( !MIDIStreamingEndpointDescriptor )
      goto LABEL_27;
    v21 = *(unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 3);
    v22 = 0;
    if ( *(_BYTE *)(MIDIStreamingEndpointDescriptor + 3) )
      break;
LABEL_26:
    if ( v22 < v21 )
      goto LABEL_30;
LABEL_27:
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= FirstStreamingAudioInterface->bNumEndpoints )
      return (unsigned int)-1073741438;
  }
  v23 = (unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 4);
  while ( v19 != *v23 )
  {
    ++v22;
    ++v23;
    if ( v22 >= v21 )
      goto LABEL_26;
  }
LABEL_30:
  *(_DWORD *)(v11 + 208) = v19;
  *(_DWORD *)(v11 + 212) = v22;
  *(_QWORD *)(v11 + 136) = FirstStreamingAudioInterface;
  v25 = *(_QWORD *)(i[6] + 8 * v18);
  *(_QWORD *)(v11 + 168) = v25;
  *(_QWORD *)(v11 + 200) = i;
  v26 = *(char *)(v25 + 2);
  *(_OWORD *)v11 = MIDIStreamingPinDataFormat;
  *(_OWORD *)(v11 + 16) = xmmword_1C001C2D0;
  *(_DWORD *)(v11 + 96) = ((v26 >> 7) & 8) + 8;
  v27 = a5;
  *(_OWORD *)(v11 + 32) = xmmword_1C001C2E0;
  *(_OWORD *)(v11 + 48) = xmmword_1C001C2F0;
  *(_OWORD *)(v11 + 64) = xmmword_1C001C300;
  *(_OWORD *)(v11 + 80) = xmmword_1C001C310;
  *v27 = v11;
  v28 = 32864;
  v29 = *(_DWORD *)(v11 + 96) == 16;
  if ( *(_DWORD *)(v11 + 96) != 16 )
    v28 = 88;
  *(_DWORD *)(v11 + 112) = v28;
  v30 = USBMidiInPinDispatch;
  if ( !v29 )
    v30 = USBMidiOutPinDispatch;
  *(_QWORD *)(v11 + 128) = v30;
  return (unsigned int)v8;
}
