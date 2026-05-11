/*
 * XREFs of ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C00094E0
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159C4 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000A924 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 */

__int64 __fastcall CSidebandDevice::CreateKsPin(
        CSidebandDevice *this,
        unsigned int a2,
        union KSDATAFORMAT *Src,
        struct _KSPIN **a4)
{
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *v5; // rsi
  char v9; // di
  char v10; // dl
  char v11; // r8
  NTSTATUS FilterInstance; // ebx
  PDEVICE_OBJECT v13; // rcx
  char v14; // dl
  char v15; // r8
  unsigned __int16 v16; // ax
  __int64 Pool2; // rax
  char v18; // dl
  char v19; // dl
  struct _KSPIN *ObjectFromFileObject; // rax
  char v21; // dl
  __int64 v22; // rdx
  char v23; // dl
  int Object; // [rsp+28h] [rbp-39h]
  void *ConnectionHandle; // [rsp+58h] [rbp-9h] BYREF
  PVOID v27; // [rsp+60h] [rbp-1h] BYREF
  HANDLE FilterHandle; // [rsp+68h] [rbp+7h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v29; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+27h]
  unsigned int v31; // [rsp+E0h] [rbp+7Fh] BYREF

  v31 = -1;
  v5 = 0LL;
  ConnectionHandle = 0LL;
  v29 = 0LL;
  FilterHandle = 0LL;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Object,
      9u,
      0x54u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  *a4 = 0LL;
  FilterInstance = CSidebandDevice::GetFilterInstance(this, &FilterHandle);
  if ( FilterInstance >= 0 )
  {
    FilterInstance = CSidebandDevice::GetPinFromEpIndex(this, a2, &v31, &v29);
    if ( FilterInstance >= 0 )
    {
      Pool2 = ExAllocatePool2(64LL, Src->FormatSize + 72LL, 929200197LL);
      v5 = (struct $58C2C1BF6568EE28BD9B872E6BA03976 *)Pool2;
      if ( Pool2 )
      {
        v30 = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(GUID *)Pool2 = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        *(_DWORD *)(Pool2 + 64) = 0x40000000;
        *(_QWORD *)(Pool2 + 16) = v30;
        *(GUID *)(Pool2 + 24) = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        *(_DWORD *)(Pool2 + 68) = 1;
        v30 = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_DWORD *)(Pool2 + 48) = v31;
        memmove((void *)(Pool2 + 72), Src, Src->FormatSize);
        FilterInstance = KsCreatePin(FilterHandle, v5, 0xC0000000, &ConnectionHandle);
        if ( FilterInstance >= 0 )
        {
          v27 = 0LL;
          FilterInstance = ObReferenceObjectByHandle(
                             ConnectionHandle,
                             0x1F01FFu,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &v27,
                             0LL);
          if ( FilterInstance >= 0 )
          {
            ZwClose(ConnectionHandle);
            ObjectFromFileObject = (struct _KSPIN *)KsGetObjectFromFileObject((PFILE_OBJECT)v27);
            *a4 = ObjectFromFileObject;
            if ( ObjectFromFileObject )
            {
              KsAddItemToObjectBag(ObjectFromFileObject->Bag, v5, ExFreePool);
              v22 = (__int64)*a4;
              *(_BYTE *)(*(_QWORD *)(v22 + 16) + 47LL) = 1;
              *(_QWORD *)(*(_QWORD *)(v22 + 16) + 48LL) = v27;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                v21 = 0;
              }
              if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v21,
                  *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  Object,
                  9u,
                  0x5Au,
                  (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
              ObfDereferenceObject(v27);
              FilterInstance = -1073741275;
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              v19 = 0;
            }
            if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v19,
                *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                Object,
                9u,
                0x59u,
                (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
            ZwClose(ConnectionHandle);
          }
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v14 = 0;
          }
          v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v16 = 88;
            goto LABEL_20;
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v18 = 0;
        }
        if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v18,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            Object,
            9u,
            0x57u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        FilterInstance = -1073741664;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = 86;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = 85;
LABEL_20:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v13->AttachedDevice,
        v14,
        v15,
        (__int64)v13->DeviceExtension,
        Object,
        9u,
        v16,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
  if ( FilterHandle )
    ZwClose(FilterHandle);
  if ( FilterInstance < 0 && v5 )
    ExFreePool(v5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v23 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( v23 || v9 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Object,
      9u,
      0x5Bu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)FilterInstance;
}
