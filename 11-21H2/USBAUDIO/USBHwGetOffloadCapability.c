/*
 * XREFs of USBHwGetOffloadCapability @ 0x1C0033A44
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x1C0032800 (USBDeviceGetOffloadCapability.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     USBD_CloseHandle @ 0x1C0016FEC (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x1C0017070 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00174F8 (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall USBHwGetOffloadCapability(__int64 a1, int *a2, ULONG a3)
{
  int v3; // esi
  const GUID *v5; // rdx
  NTSTATUS v6; // edi
  ULONG v7; // r8d
  PDEVICE_OBJECT v8; // r10
  char v9; // bl
  char v10; // r8
  unsigned __int16 v11; // cx
  NTSTATUS v12; // eax
  char v13; // bl
  char v14; // dl
  __int64 result; // rax
  int USBDHandle; // [rsp+20h] [rbp-48h]
  int OutputBuffer; // [rsp+70h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  USBD_HANDLE v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0LL;
  v3 = 0;
  OutputBuffer = 0;
  ResultLength = 0;
  v6 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(a1 + 24), *(PDEVICE_OBJECT *)(a1 + 40), a3, 0x38627845u, &v19);
  if ( v6 >= 0 )
  {
    v12 = USBD_QueryUsbCapability(v19, v5, v7, (PUCHAR)&OutputBuffer, &ResultLength);
    v6 = v12;
    if ( v12 >= 0 )
    {
      if ( ResultLength == 4 )
      {
        v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v14,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            USBDHandle,
            9u,
            0x1Cu,
            (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
        if ( OutputBuffer )
        {
          if ( OutputBuffer == 1 )
          {
            v3 = 1;
          }
          else if ( OutputBuffer == 2 )
          {
            v3 = 2;
          }
        }
      }
      else
      {
        v6 = -1073741823;
        v8 = WPP_GLOBAL_Control;
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v11 = 27;
          goto LABEL_10;
        }
      }
    }
    else
    {
      if ( v12 != -1073741637 && v12 != -1073741822 )
      {
        v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v13,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            USBDHandle,
            9u,
            0x1Au,
            (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
      }
      v6 = 0;
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 25;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v8->AttachedDevice,
        v9,
        v10,
        (__int64)v8->DeviceExtension,
        USBDHandle,
        9u,
        v11,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    }
  }
  if ( v19 )
    USBD_CloseHandle(v19);
  result = (unsigned int)v6;
  *a2 = v3;
  return result;
}
