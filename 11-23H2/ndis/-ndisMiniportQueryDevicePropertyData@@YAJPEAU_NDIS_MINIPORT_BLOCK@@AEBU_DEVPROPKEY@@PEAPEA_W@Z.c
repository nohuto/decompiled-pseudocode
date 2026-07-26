/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C0119E2C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0017254 (WPP_RECORDER_SF_qqd_ea_1C0017254.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _DEVPROPKEY *a2,
        wchar_t **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdi
  char v5; // si
  unsigned int DevicePropertyData; // ebx
  wchar_t *Data; // rax
  wchar_t *v8; // r14
  NTSTATUS v9; // eax
  size_t v10; // rbx
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-8h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-8h]
  ULONG v14; // [rsp+70h] [rbp+30h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+78h] [rbp+38h] BYREF
  wchar_t *v16; // [rsp+80h] [rbp+40h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  LODWORD(RequiredSize) = 0;
  v14 = 0;
  v5 = (char)a1;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v14);
  if ( (int)(DevicePropertyData + 0x80000000) >= 0 && DevicePropertyData != -1073741789 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Type) = DevicePropertyData;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x15u,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        v5,
        (char)PhysicalDeviceObject,
        Type);
    }
    return DevicePropertyData;
  }
  if ( (unsigned int)RequiredSize >= 2 && ((unsigned __int8)RequiredSize & 1) == 0 )
  {
    Data = (wchar_t *)ExAllocatePool2(64LL, (unsigned int)RequiredSize, 1851868238);
    v8 = Data;
    if ( Data )
    {
      v16 = Data;
      *Data = 0;
      v9 = IoGetDevicePropertyData(
             PhysicalDeviceObject,
             &DEVPKEY_Device_InstanceId,
             0,
             0,
             (ULONG)RequiredSize,
             Data,
             (PULONG)&RequiredSize,
             &v14);
      DevicePropertyData = v9;
      if ( v9 < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(Typea) = v9;
          WPP_RECORDER_SF_qqd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x18u,
            &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
            v5,
            (char)PhysicalDeviceObject,
            Typea);
        }
      }
      else if ( v14 == 18 || v14 == 25 )
      {
        v10 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
        if ( v10 - 1 == wcsnlen(v8, v10) )
        {
          *a3 = v8;
          return 0LL;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Au,
            &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
            v5,
            PhysicalDeviceObject);
        DevicePropertyData = -1073741762;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(Typea) = v14;
          WPP_RECORDER_SF_qqD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x19u,
            &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
            v5,
            (char)PhysicalDeviceObject,
            Typea);
        }
        DevicePropertyData = -1073741811;
      }
    }
    else
    {
      v16 = 0LL;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x17u,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          v5,
          PhysicalDeviceObject);
      DevicePropertyData = -1073741670;
    }
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&v16);
    return DevicePropertyData;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x16u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      v5,
      PhysicalDeviceObject);
  return 3221225534LL;
}
