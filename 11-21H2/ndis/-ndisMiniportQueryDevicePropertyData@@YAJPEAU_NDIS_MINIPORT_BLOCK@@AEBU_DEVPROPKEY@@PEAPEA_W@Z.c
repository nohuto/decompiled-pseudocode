/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C01155F0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _DEVPROPKEY *a2,
        wchar_t **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rsi
  char v5; // bp
  unsigned int DevicePropertyData; // ebx
  wchar_t *Data; // rax
  wchar_t *v8; // rbx
  NTSTATUS v9; // eax
  unsigned int v10; // edi
  size_t v11; // rdi
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-20h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-20h]
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+68h] [rbp+10h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  LODWORD(RequiredSize) = 0;
  v15 = 0;
  v5 = (char)a1;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v15);
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
        &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
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
      *Data = 0;
      v9 = IoGetDevicePropertyData(
             PhysicalDeviceObject,
             &DEVPKEY_Device_InstanceId,
             0,
             0,
             (ULONG)RequiredSize,
             Data,
             (PULONG)&RequiredSize,
             &v15);
      v10 = v9;
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
            &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
            v5,
            (char)PhysicalDeviceObject,
            Typea);
        }
      }
      else if ( v15 == 18 || v15 == 25 )
      {
        v11 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
        if ( v11 - 1 == wcsnlen(v8, v11) )
        {
          *a3 = v8;
          return 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Au,
            &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
            v5,
            PhysicalDeviceObject);
        v10 = -1073741762;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(Typea) = v15;
          WPP_RECORDER_SF_qqL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x19u,
            &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
            v5,
            (char)PhysicalDeviceObject,
            Typea);
        }
        v10 = -1073741811;
      }
    }
    else
    {
      v8 = 0LL;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x17u,
          &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
          v5,
          PhysicalDeviceObject);
      v10 = -1073741670;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return v10;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x16u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      v5,
      PhysicalDeviceObject);
  return 3221225534LL;
}
