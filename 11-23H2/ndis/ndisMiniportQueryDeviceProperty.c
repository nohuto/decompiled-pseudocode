/*
 * XREFs of ndisMiniportQueryDeviceProperty @ 0x1C011B32C
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0BC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0017254 (WPP_RECORDER_SF_qqd_ea_1C0017254.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002EAB8 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C011B4B8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisMiniportQueryDeviceProperty(
        __int64 a1,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        PUNICODE_STRING *a3)
{
  char v5; // si
  _DEVICE_OBJECT *v6; // rbp
  unsigned int v7; // ebx
  PUNICODE_STRING v8; // rbx
  NTSTATUS inited; // edi
  bool v11; // zf
  unsigned __int16 v12; // r9
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = a1;
  if ( DeviceProperty > DevicePropertyFriendlyName )
  {
    if ( DeviceProperty == DevicePropertyLocationInformation
      || DeviceProperty == DevicePropertyPhysicalDeviceObjectName
      || DeviceProperty == DevicePropertyEnumeratorName )
    {
      goto LABEL_3;
    }
    v11 = DeviceProperty == DevicePropertyContainerID;
  }
  else
  {
    if ( DeviceProperty == DevicePropertyFriendlyName
      || DeviceProperty == DevicePropertyDeviceDescription
      || DeviceProperty == DevicePropertyClassName
      || DeviceProperty == DevicePropertyClassGuid
      || DeviceProperty == DevicePropertyDriverKeyName )
    {
      goto LABEL_3;
    }
    v11 = DeviceProperty == DevicePropertyManufacturer;
  }
  if ( !v11 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xFu,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        a1);
    return 3221225485LL;
  }
LABEL_3:
  v6 = *(_DEVICE_OBJECT **)(a1 + 3832);
  BufferLength = 0;
  v7 = IoGetDeviceProperty(v6, DeviceProperty, 0, 0LL, &BufferLength);
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x10u,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        v5,
        (char)v6,
        v7);
    return v7;
  }
  if ( (unsigned __int64)BufferLength + 16 >= BufferLength )
  {
    MakeSizedPoolPtr<_UNICODE_STRING>(&DestinationString, 1851868238LL);
    v8 = DestinationString;
    if ( !DestinationString )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x12u,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          v5,
          v6);
      inited = -1073741670;
      goto LABEL_34;
    }
    inited = IoGetDeviceProperty(v6, DeviceProperty, BufferLength, &DestinationString[1], &BufferLength);
    if ( inited < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_34:
        wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&DestinationString);
        return (unsigned int)inited;
      }
      v12 = 19;
    }
    else
    {
      inited = WdmlibRtlInitUnicodeStringEx(v8, (PCWSTR)&v8[1]);
      if ( inited >= 0 )
      {
        *a3 = v8;
        return 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v12 = 20;
    }
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v12,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      v5,
      (char)v6,
      inited);
    goto LABEL_34;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x11u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      v5,
      v6);
  return 3221225621LL;
}
