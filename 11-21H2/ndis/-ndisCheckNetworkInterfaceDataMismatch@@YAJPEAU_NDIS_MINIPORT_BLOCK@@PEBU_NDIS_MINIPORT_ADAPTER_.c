/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010DFC0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0064AEC (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C010DE08 (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C010E2B4 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C0111B14 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  bool v4; // zf
  char v5; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  wchar_t *v7; // rsi
  NTSTATUS ValueUlong; // ebx
  unsigned __int16 IfType; // bx
  int v10; // r13d
  __int64 v11; // r13
  unsigned int v12; // r8d
  unsigned int v13; // eax
  __int64 v15; // r14
  unsigned __int16 v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // cx
  __int64 v20; // [rsp+38h] [rbp-91h]
  char v21[4]; // [rsp+38h] [rbp-91h]
  char v22[4]; // [rsp+38h] [rbp-91h]
  unsigned __int16 v23; // [rsp+40h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-81h] BYREF
  unsigned int Data; // [rsp+50h] [rbp-79h] BYREF
  char v26[4]; // [rsp+58h] [rbp-71h] BYREF
  wchar_t *v27; // [rsp+60h] [rbp-69h]
  wchar_t *v28; // [rsp+68h] [rbp-61h]
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-59h] BYREF
  HANDLE DeviceRegKey; // [rsp+80h] [rbp-49h] BYREF
  wchar_t *v31; // [rsp+88h] [rbp-41h]
  __int128 v32; // [rsp+90h] [rbp-39h] BYREF
  int v33; // [rsp+A0h] [rbp-29h]
  wchar_t v34; // [rsp+A4h] [rbp-25h]
  wchar_t v35[8]; // [rsp+A8h] [rbp-21h] BYREF
  _OWORD v36[2]; // [rsp+B8h] [rbp-11h] BYREF
  int v37; // [rsp+D8h] [rbp+Fh]
  wchar_t v38; // [rsp+DCh] [rbp+13h]

  v33 = *(_DWORD *)L"pe";
  v34 = aMediatype_0[10];
  v4 = (a1->Flags & 0x100) == 0;
  v5 = 0;
  wcscpy(v35, L"*IfType");
  v37 = *(_DWORD *)L"pe";
  v32 = *(_OWORD *)L"*MediaType";
  v38 = aPhysicalmediat_0[18];
  *(_QWORD *)&ValueName.Length = a2;
  v36[0] = *(_OWORD *)L"*PhysicalMediaType";
  v23 = 0;
  v36[1] = *(_OWORD *)L"lMediaType";
  *(_DWORD *)v26 = 0;
  Data = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  if ( v4 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v7 = v35;
    v27 = (wchar_t *)&v32;
    v31 = v35;
    v28 = (wchar_t *)v36;
    ValueUlong = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( ValueUlong < 0 )
      goto LABEL_14;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      DeviceRegKey);
  }
  else
  {
    v27 = (wchar_t *)&v32 + 1;
    v7 = &v35[1];
    v31 = &v35[1];
    v28 = (wchar_t *)v36 + 1;
    ValueUlong = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 1u, 1);
    if ( ValueUlong < 0 )
      goto LABEL_14;
  }
  ValueUlong = KRegKey::QueryValueUshort((KRegKey *)&KeyHandle, v7, &v23);
  if ( ValueUlong < 0 )
    goto LABEL_14;
  IfType = a2->IfType;
  v10 = v23;
  if ( v23 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      v15 = *(_QWORD *)&ValueName.Length;
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(
             a1,
             *(const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&ValueName.Length) != 1 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v22 = v10;
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xC9u,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            (char)a1,
            IfType,
            *(_DWORD *)v22);
        }
        goto LABEL_26;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v21 = v10;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xC8u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          (char)a1,
          IfType,
          *(_DWORD *)v21);
        IfType = *(_WORD *)(v15 + 180);
      }
    }
    ValueUlong = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v31, IfType);
    if ( ValueUlong < 0 )
      goto LABEL_14;
    v5 = 1;
  }
  ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, v27, (unsigned int *)v26);
  if ( ValueUlong < 0 )
    goto LABEL_14;
  v11 = *(_QWORD *)&ValueName.Length;
  v12 = *(_DWORD *)v26;
  v13 = *(_DWORD *)(*(_QWORD *)&ValueName.Length + 8LL);
  if ( *(_DWORD *)v26 != v13 )
  {
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v16 = 202;
      goto LABEL_25;
    }
    if ( v5 )
    {
      ValueUlong = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v27, v13);
      if ( ValueUlong < 0 )
        goto LABEL_14;
    }
  }
  ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, v28, &Data);
  if ( ValueUlong < 0 )
    goto LABEL_14;
  v13 = *(_DWORD *)(v11 + 12);
  v12 = Data;
  if ( Data != v13 )
  {
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v5 )
        goto LABEL_14;
      ValueUlong = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v28, v13);
      if ( ValueUlong < 0 )
        goto LABEL_14;
      goto LABEL_40;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_26:
      ValueUlong = -1073741823;
      goto LABEL_14;
    }
    v16 = 203;
LABEL_25:
    LODWORD(v20) = v12;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v16,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      v13,
      v20);
    goto LABEL_26;
  }
  if ( !v5 )
    goto LABEL_14;
LABEL_40:
  ValueName = 0LL;
  v17 = L"NdisUpdatedNetworkInterface";
  v18 = 0x7FFFLL;
  do
  {
    if ( !*v17 )
      break;
    ++v17;
    --v18;
  }
  while ( v18 );
  ValueUlong = v18 == 0 ? 0xC000000D : 0;
  if ( v18 )
  {
    v19 = 2 * v18;
    ValueName.Buffer = L"NdisUpdatedNetworkInterface";
    ValueName.Length = -2 - v19;
    ValueName.MaximumLength = -v19;
  }
  if ( ValueUlong >= 0 )
  {
    Data = 1;
    ValueUlong = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    if ( ValueUlong >= 0 )
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  }
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)ValueUlong;
}
