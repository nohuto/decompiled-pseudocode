/*
 * XREFs of USBParseCreateInterfaceList @ 0x1C00365A8
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C0034778 (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // ebx
  unsigned int v6; // edi
  __int64 AudioSpecificInterface; // r12
  __int64 v8; // r14
  PUSB_INTERFACE_DESCRIPTOR v9; // rcx
  __int64 v10; // rax

  v3 = (_QWORD *)*a3;
  v4 = 0;
  *(_QWORD *)*a3 = a2;
  v6 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, a3, 8LL);
  if ( !AudioSpecificInterface )
    return (unsigned int)-1073741438;
  v8 = 0LL;
  while ( (unsigned int)v8 < *(unsigned __int8 *)(AudioSpecificInterface + 7) )
  {
    v9 = USBD_ParseConfigurationDescriptorEx(
           StartPosition,
           StartPosition,
           *(unsigned __int8 *)(AudioSpecificInterface + v8 + 8),
           -1,
           1,
           2,
           -1);
    if ( v9
      || (v9 = USBD_ParseConfigurationDescriptorEx(
                 StartPosition,
                 StartPosition,
                 *(unsigned __int8 *)(AudioSpecificInterface + v8 + 8),
                 -1,
                 1,
                 3,
                 -1)) != 0LL )
    {
      v10 = 2LL * v6++;
      v3[v10] = v9;
    }
    else
    {
      v4 = -1073741438;
    }
    if ( v6 > StartPosition->bNumInterfaces )
      return (unsigned int)-1073741438;
    v8 = (unsigned int)(v8 + 1);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  if ( v6 == StartPosition->bNumInterfaces )
    v3[2 * v6] = 0LL;
  else
    return (unsigned int)-1073741438;
  return (unsigned int)v4;
}
