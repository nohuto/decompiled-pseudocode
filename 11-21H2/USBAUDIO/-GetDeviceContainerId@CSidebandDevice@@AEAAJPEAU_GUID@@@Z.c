/*
 * XREFs of ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009F68
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C0011158 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceContainerId(CSidebandDevice *this, struct _GUID *a2)
{
  __int64 Pool2; // rax
  void *v5; // rsi
  NTSTATUS DeviceProperty; // edi
  char v7; // bl
  char v8; // bl
  unsigned __int64 v9; // rcx
  _WORD *v10; // rdx
  unsigned __int64 v11; // r8
  char *v12; // rdi
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  char v17; // r8
  int v18; // edx
  int v19; // r8d
  int ResultLength; // [rsp+20h] [rbp-58h]
  unsigned __int16 v22; // [rsp+30h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  ULONG v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-0000-000000000000}");
  Pool2 = ExAllocatePool2(64LL, DestinationString.MaximumLength, 878868549LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v8 = 1;
    v9 = (unsigned __int64)DestinationString.MaximumLength >> 1;
    if ( v9 )
    {
      v10 = (_WORD *)Pool2;
      v11 = 2147483646 - v9;
      v12 = (char *)L"{00000000-0000-0000-0000-000000000000}" - Pool2;
      do
      {
        if ( !(v11 + v9) )
          break;
        v13 = *(_WORD *)((char *)v10 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v10++ = v13;
        --v9;
      }
      while ( v9 );
      v14 = v10 - 1;
      if ( v9 )
        v14 = v10;
      v15 = -(__int64)v9;
      DeviceProperty = v15 == 0 ? 0x80000005 : 0;
      *v14 = 0;
      if ( v15 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           *(PDEVICE_OBJECT *)(*((_QWORD *)this + 5) + 32LL),
                           DevicePropertyContainerID,
                           DestinationString.MaximumLength,
                           v5,
                           &v24);
        if ( DeviceProperty < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v8 = 0;
          }
          if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v8,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              ResultLength,
              9u,
              0x1Eu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          goto LABEL_51;
        }
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
        DeviceProperty = RtlGUIDFromString(&DestinationString, a2);
        if ( DeviceProperty >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v8 = 0;
          }
          if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = v8;
            LOBYTE(v19) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_s(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              WPP_GLOBAL_Control->DeviceExtension,
              ResultLength);
          }
          goto LABEL_51;
        }
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_51:
          ExFreePool(v5);
          return (unsigned int)DeviceProperty;
        }
        v22 = 31;
LABEL_26:
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)v16->AttachedDevice,
          v8,
          v17,
          (__int64)v16->DeviceExtension,
          ResultLength,
          9u,
          v22,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        goto LABEL_51;
      }
    }
    else
    {
      DeviceProperty = -1073741811;
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v22 = 29;
    goto LABEL_26;
  }
  DeviceProperty = -1073741664;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      ResultLength,
      9u,
      0x1Cu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)DeviceProperty;
}
