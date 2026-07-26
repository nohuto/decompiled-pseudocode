/*
 * XREFs of ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0BC
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0017254 (WPP_RECORDER_SF_qqd_ea_1C0017254.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C002B930 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002EAB8 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0036228 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C011B32C (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C011B42C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C011B4B8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D088 (ndisMiniportQueryInterfaceProperty.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _UNICODE_STRING **a2,
        struct _UNICODE_STRING **a3)
{
  struct _UNICODE_STRING **v3; // r14
  __int64 v6; // rax
  _DEVICE_OBJECT *PhysicalDeviceObject; // r14
  __int64 v8; // r12
  NTSTATUS DeviceProperty; // edi
  PUNICODE_STRING v10; // rbx
  NTSTATUS inited; // eax
  struct _UNICODE_STRING *v12; // rbx
  struct _UNICODE_STRING *v13; // rcx
  char v14; // r10
  unsigned __int16 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  wchar_t *Buffer; // r9
  unsigned __int16 v20; // r9
  struct _UNICODE_STRING *v21; // rax
  char v22[8]; // [rsp+30h] [rbp-38h]
  void **v23; // [rsp+40h] [rbp-28h] BYREF
  void *v24; // [rsp+48h] [rbp-20h]
  char v25; // [rsp+50h] [rbp-18h]
  ULONG BufferLength; // [rsp+B0h] [rbp+48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+50h] BYREF
  PVOID v28; // [rsp+C0h] [rbp+58h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+C8h] [rbp+60h] BYREF

  v28 = a3;
  v3 = a3;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x1Eu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  P = 0LL;
  v6 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v23, (__int64)&P);
  if ( (a1->Flags & 0x180) == 0 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v8 = v6;
    BufferLength = 0;
    DeviceProperty = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyFriendlyName, 0, 0LL, &BufferLength);
    if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x10u,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          (char)a1,
          (char)PhysicalDeviceObject,
          DeviceProperty);
      goto LABEL_10;
    }
    if ( (unsigned __int64)BufferLength + 16 < BufferLength )
    {
      DeviceProperty = -1073741675;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x11u,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          (char)a1,
          PhysicalDeviceObject);
      goto LABEL_10;
    }
    MakeSizedPoolPtr<_UNICODE_STRING>(&DestinationString, 1851868238LL);
    v10 = DestinationString;
    if ( !DestinationString )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x12u,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          (char)a1,
          PhysicalDeviceObject);
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&DestinationString);
      DeviceProperty = -1073741670;
      goto LABEL_10;
    }
    inited = IoGetDeviceProperty(
               PhysicalDeviceObject,
               DevicePropertyFriendlyName,
               BufferLength,
               &DestinationString[1],
               &BufferLength);
    DeviceProperty = inited;
    if ( inited < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = 19;
LABEL_36:
        WPP_RECORDER_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v20,
          &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
          (char)a1,
          (char)PhysicalDeviceObject,
          inited);
      }
    }
    else
    {
      inited = WdmlibRtlInitUnicodeStringEx(v10, (PCWSTR)&v10[1]);
      DeviceProperty = inited;
      if ( inited >= 0 )
      {
        *(_QWORD *)(v8 + 8) = v10;
        DeviceProperty = 0;
LABEL_10:
        if ( v25 )
          wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v23, v24);
        if ( DeviceProperty )
        {
          wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v23, (__int64)&P);
          DeviceProperty = ndisMiniportQueryDeviceProperty((char)a1, DevicePropertyDeviceDescription);
          if ( v25 )
            wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v23, v24);
        }
        v3 = (struct _UNICODE_STRING **)v28;
        goto LABEL_14;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = 20;
        goto LABEL_36;
      }
    }
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&DestinationString);
    goto LABEL_10;
  }
  DeviceProperty = ndisMiniportQueryInterfaceProperty((char)a1);
  if ( v25 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v23, v24);
LABEL_14:
  if ( DeviceProperty < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v22 = DeviceProperty;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Fu,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        (char)a1,
        *(_QWORD *)v22);
    }
    goto LABEL_53;
  }
  Rtl::DuplicateUnicodeString(&v28, P);
  v12 = (struct _UNICODE_STRING *)v28;
  if ( !v28 )
  {
    DeviceProperty = -1073741670;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x20u,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        a1);
LABEL_53:
    v13 = (struct _UNICODE_STRING *)P;
    goto LABEL_26;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x21u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (unsigned __int16 *)v28);
  v13 = (struct _UNICODE_STRING *)P;
  v14 = 0;
  v15 = 0;
  v16 = (unsigned __int64)*(unsigned __int16 *)P >> 1;
  if ( v16 )
  {
    v17 = 0LL;
    do
    {
      Buffer = v13->Buffer;
      if ( Buffer[v17] == 47 )
      {
        v14 = 1;
        Buffer[v17] = 45;
        v13 = (struct _UNICODE_STRING *)P;
      }
      v17 = ++v15;
    }
    while ( v15 < v16 );
    if ( v14 )
    {
      v21 = v13;
      v13 = 0LL;
      *v3 = v21;
    }
  }
  *a2 = v12;
LABEL_26:
  P = 0LL;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = DeviceProperty;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x22u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      *(_QWORD *)v22);
  }
  return (unsigned int)DeviceProperty;
}
