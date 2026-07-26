/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0111810
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C0132638 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C005B994 (WPP_RECORDER_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  unsigned int v1; // esi
  _GUID *p_InterfaceGuid; // r13
  signed int v4; // edi
  _NDIS_MEDIUM MediaType; // edx
  __int64 v6; // r14
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  HANDLE v9; // rbx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // edx
  const wchar_t *v11; // rax
  __int64 v12; // rcx
  __int16 v13; // cx
  ULONG DataSize; // edx
  const char *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // cx
  ULONG Length; // ecx
  const wchar_t *v19; // rax
  __int16 v20; // r14
  unsigned __int16 v22; // r9
  char v23[4]; // [rsp+30h] [rbp-20h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  __int32 Data; // [rsp+98h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0;
  if ( !*((_BYTE *)qword_1C00EC738 + 96) )
  {
    p_InterfaceGuid = &a1->InterfaceGuid;
    KeyHandle = 0LL;
    v4 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 2u, 3);
    if ( v4 < 0 )
      goto LABEL_31;
    MediaType = a1->MediaType;
    v6 = 0x7FFFLL;
    ValueName = 0LL;
    v7 = 0x7FFFLL;
    v8 = L"MediaType";
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v7;
    }
    while ( v7 );
    v4 = v7 == 0 ? 0xC000000D : 0;
    if ( v7
      && (ValueName.Buffer = L"MediaType",
          ValueName.Length = -2 - 2 * v7,
          ValueName.MaximumLength = -2 * v7,
          v9 = KeyHandle,
          Data = MediaType,
          v4 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u),
          v4 >= 0) )
    {
      PhysicalMediumType = a1->PhysicalMediumType;
      v11 = L"PhysicalMediaType";
      ValueName = 0LL;
      v12 = 0x7FFFLL;
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v12;
      }
      while ( v12 );
      v4 = v12 == 0 ? 0xC000000D : 0;
      if ( v12 )
      {
        v13 = 2 * v12;
        ValueName.Buffer = L"PhysicalMediaType";
        ValueName.Length = -2 - v13;
        ValueName.MaximumLength = -v13;
      }
      if ( v4 < 0 || (Data = PhysicalMediumType, v4 = ZwSetValueKey(v9, &ValueName, 0, 4u, &Data, 4u), v4 < 0) )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v22 = 23;
      }
      else
      {
        DataSize = a1->ifPhysAddress.Length;
        v15 = L"CurrentAddress";
        ValueName = 0LL;
        v16 = 0x7FFFLL;
        do
        {
          if ( !*(_WORD *)v15 )
            break;
          v15 += 2;
          --v16;
        }
        while ( v16 );
        v4 = v16 == 0 ? 0xC000000D : 0;
        if ( v16 )
        {
          v17 = 2 * v16;
          ValueName.Buffer = (wchar_t *)L"CurrentAddress";
          ValueName.Length = -2 - v17;
          ValueName.MaximumLength = -v17;
        }
        if ( v4 >= 0 )
        {
          v4 = ZwSetValueKey(v9, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize);
          if ( v4 >= 0 )
          {
            Length = a1->PermanentPhysAddress.Length;
            v19 = L"PermanentAddress";
            ValueName = 0LL;
            do
            {
              if ( !*v19 )
                break;
              ++v19;
              --v6;
            }
            while ( v6 );
            v4 = v6 == 0 ? 0xC000000D : 0;
            if ( v6 )
            {
              v20 = 2 * v6;
              ValueName.Buffer = L"PermanentAddress";
              ValueName.Length = -2 - v20;
              ValueName.MaximumLength = -v20;
            }
            if ( v4 >= 0 )
            {
              v4 = ZwSetValueKey(v9, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
              if ( v4 >= 0 )
                goto LABEL_29;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v22 = 25;
              goto LABEL_40;
            }
LABEL_31:
            v1 = v4;
LABEL_29:
            wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
            return v1;
          }
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v22 = 24;
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v22 = 22;
    }
LABEL_40:
    *(_DWORD *)v23 = v4;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v22,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)p_InterfaceGuid,
      *(_DWORD *)v23);
    goto LABEL_31;
  }
  return 0LL;
}
