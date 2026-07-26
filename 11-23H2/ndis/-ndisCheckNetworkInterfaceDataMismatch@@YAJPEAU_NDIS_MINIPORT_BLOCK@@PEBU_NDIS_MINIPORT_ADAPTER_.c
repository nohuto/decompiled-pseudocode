/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119200
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B7DC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0069D7C (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C011945C (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01196F8 (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BCC4 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C011BDF4 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  bool v4; // zf
  char v5; // r15
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  wchar_t *v7; // rdi
  NTSTATUS ValueUlong; // ebx
  unsigned __int16 IfType; // bx
  const wchar_t *v10; // rdi
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v11; // rbx
  unsigned int v12; // r8d
  _NDIS_MEDIUM MediaType; // eax
  NTSTATUS v14; // edi
  HANDLE v15; // rbx
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v17; // r15
  unsigned __int16 v18; // r9
  const wchar_t *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+38h] [rbp-81h]
  char v22[4]; // [rsp+38h] [rbp-81h]
  char v23[4]; // [rsp+38h] [rbp-81h]
  unsigned __int16 v24; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  unsigned int Data; // [rsp+50h] [rbp-69h] BYREF
  char v27[4]; // [rsp+58h] [rbp-61h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v28; // [rsp+60h] [rbp-59h]
  wchar_t *v29; // [rsp+68h] [rbp-51h]
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-49h] BYREF
  HANDLE DeviceRegKey; // [rsp+80h] [rbp-39h] BYREF
  __int128 v32; // [rsp+88h] [rbp-31h] BYREF
  int v33; // [rsp+98h] [rbp-21h]
  wchar_t v34; // [rsp+9Ch] [rbp-1Dh]
  wchar_t v35[8]; // [rsp+A0h] [rbp-19h] BYREF
  _OWORD v36[2]; // [rsp+B0h] [rbp-9h] BYREF
  int v37; // [rsp+D0h] [rbp+17h]
  wchar_t v38; // [rsp+D4h] [rbp+1Bh]

  v33 = *(_DWORD *)L"pe";
  v34 = aMediatype_0[10];
  v4 = (a1->Flags & 0x100) == 0;
  v5 = 0;
  wcscpy(v35, L"*IfType");
  v37 = *(_DWORD *)L"pe";
  v32 = *(_OWORD *)L"*MediaType";
  v38 = aPhysicalmediat_0[18];
  v28 = a2;
  v36[0] = *(_OWORD *)L"*PhysicalMediaType";
  v24 = 0;
  v36[1] = *(_OWORD *)L"lMediaType";
  *(_DWORD *)v27 = 0;
  Data = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  if ( v4 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    *(_QWORD *)&ValueName.Length = &v32;
    v7 = v35;
    v29 = (wchar_t *)v36;
    ValueUlong = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( ValueUlong < 0 )
      goto LABEL_18;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
  }
  else
  {
    *(_QWORD *)&ValueName.Length = (char *)&v32 + 2;
    v29 = (wchar_t *)v36 + 1;
    v7 = &v35[1];
    ValueUlong = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&Handle, 1u, 1);
    if ( ValueUlong < 0 )
      goto LABEL_18;
  }
  ValueUlong = KRegKey::QueryValueUshort((KRegKey *)&Handle, v7, &v24);
  if ( ValueUlong < 0 )
    goto LABEL_18;
  IfType = a2->IfType;
  if ( v24 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      v17 = v28;
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, v28) != 1 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v23 = v24;
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xC9u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            (char)a1,
            IfType,
            *(_DWORD *)v23);
        }
        goto LABEL_40;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v22 = v24;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xC8u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          (char)a1,
          IfType,
          *(_DWORD *)v22);
        IfType = v17->IfType;
      }
    }
    ValueUlong = KRegKey::SetValueUlong((KRegKey *)&Handle, v7, IfType);
    if ( ValueUlong < 0 )
      goto LABEL_18;
    v5 = 1;
  }
  v10 = *(const wchar_t **)&ValueName.Length;
  ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&Handle, *(const wchar_t **)&ValueName.Length, (unsigned int *)v27);
  if ( ValueUlong >= 0 )
  {
    v11 = v28;
    v12 = *(_DWORD *)v27;
    MediaType = v28->MediaType;
    if ( *(_DWORD *)v27 == MediaType )
      goto LABEL_8;
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 202;
LABEL_39:
        LODWORD(v21) = v12;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v18,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          (char)a1,
          MediaType,
          v21);
      }
LABEL_40:
      v14 = -1073741823;
      goto LABEL_36;
    }
    if ( !v5 )
    {
LABEL_8:
      v14 = KRegKey::QueryValueUlong((KRegKey *)&Handle, v29, &Data);
      if ( v14 < 0 )
        goto LABEL_36;
      MediaType = v11->PhysicalMediumType;
      v12 = Data;
      v15 = Handle;
      if ( Data == MediaType )
      {
        if ( !v5 )
          goto LABEL_14;
        goto LABEL_42;
      }
      if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
      {
        if ( !v5 )
          goto LABEL_14;
        v14 = KRegKey::SetValueUlong((KRegKey *)&Handle, v29, MediaType);
        if ( v14 < 0 )
        {
LABEL_36:
          KRegKey::~KRegKey((KRegKey *)&Handle);
          return (unsigned int)v14;
        }
LABEL_42:
        v19 = L"NdisUpdatedNetworkInterface";
        ValueName = 0LL;
        v20 = 0x7FFFLL;
        do
        {
          if ( !*v19 )
            break;
          ++v19;
          --v20;
        }
        while ( v20 );
        v14 = v20 == 0 ? 0xC000000D : 0;
        if ( !v20 )
          goto LABEL_36;
        ValueName.Buffer = L"NdisUpdatedNetworkInterface";
        ValueName.Length = 2 * (0x7FFF - v20);
        ValueName.MaximumLength = ValueName.Length + 2;
        Data = 1;
        v14 = ZwSetValueKey(v15, &ValueName, 0, 4u, &Data, 4u);
        if ( v14 < 0 )
          goto LABEL_36;
        ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
LABEL_14:
        if ( v15 )
          ZwClose(v15);
        return (unsigned int)v14;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 203;
        goto LABEL_39;
      }
      goto LABEL_40;
    }
    ValueUlong = KRegKey::SetValueUlong((KRegKey *)&Handle, v10, MediaType);
    if ( ValueUlong >= 0 )
    {
      v11 = v28;
      goto LABEL_8;
    }
  }
LABEL_18:
  KRegKey::~KRegKey((KRegKey *)&Handle);
  return (unsigned int)ValueUlong;
}
