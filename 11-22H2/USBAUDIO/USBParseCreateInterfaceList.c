/*
 * XREFs of USBParseCreateInterfaceList @ 0x1C0034148
 * Callers:
 *     USBHwCreateInterfaceList @ 0x1C0031D58 (USBHwCreateInterfaceList.c)
 * Callees:
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v4; // r15
  UCHAR *v6; // r14
  unsigned int v7; // edi
  __int64 AudioSpecificInterface; // rax
  __int64 v9; // rbp
  __int64 v11; // r14
  PUSB_INTERFACE_DESCRIPTOR v12; // rcx
  __int64 v13; // rax

  v3 = 0;
  v4 = (_QWORD *)*a3;
  v6 = &StartPosition->bLength + StartPosition->wTotalLength;
  *(_QWORD *)*a3 = a2;
  v7 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, a3, 8LL);
  v9 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return (unsigned int)-1073741438;
  if ( (unsigned __int64)*(unsigned __int8 *)(AudioSpecificInterface + 7) + AudioSpecificInterface + 8 > (unsigned __int64)v6 )
    return 3221225858LL;
  v11 = 0LL;
  while ( (unsigned int)v11 < *(unsigned __int8 *)(v9 + 7) )
  {
    v12 = USBD_ParseConfigurationDescriptorEx(
            StartPosition,
            StartPosition,
            *(unsigned __int8 *)(v11 + v9 + 8),
            -1,
            1,
            2,
            -1);
    if ( v12
      || (v12 = USBD_ParseConfigurationDescriptorEx(
                  StartPosition,
                  StartPosition,
                  *(unsigned __int8 *)(v11 + v9 + 8),
                  -1,
                  1,
                  3,
                  -1)) != 0LL )
    {
      v13 = 2LL * v7++;
      v4[v13] = v12;
    }
    else
    {
      v3 = -1073741438;
    }
    if ( v7 > StartPosition->bNumInterfaces )
      return (unsigned int)-1073741438;
    v11 = (unsigned int)(v11 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( v7 == StartPosition->bNumInterfaces )
    v4[2 * v7] = 0LL;
  else
    return (unsigned int)-1073741438;
  return (unsigned int)v3;
}
