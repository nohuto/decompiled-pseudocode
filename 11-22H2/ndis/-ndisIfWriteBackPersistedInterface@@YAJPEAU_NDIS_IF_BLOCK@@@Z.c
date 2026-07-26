/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011BF1C
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C4B0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C013E218 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1C0060BE4 (WPP_RECORDER_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BD04 (ndisIfOpenInterfaceRegistryKey.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // r15
  int v3; // ebx
  _NDIS_MEDIUM MediaType; // edx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  NTSTATUS v7; // edi
  HANDLE v8; // rbx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // edx
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  ULONG DataSize; // edx
  const char *v13; // rax
  __int64 v14; // rcx
  ULONG Length; // edx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  unsigned __int16 v19; // r9
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  __int32 Data; // [rsp+98h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+50h] BYREF

  if ( *((_BYTE *)qword_1C00F5730 + 96) )
    return 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 2u, 3LL);
  if ( v3 < 0 )
  {
    KRegKey::~KRegKey((KRegKey *)&KeyHandle);
    return (unsigned int)v3;
  }
  MediaType = a1->MediaType;
  ValueName = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"MediaType";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    ValueName.Buffer = L"MediaType";
    ValueName.Length = 2 * (0x7FFF - v5);
    ValueName.MaximumLength = ValueName.Length + 2;
    v8 = KeyHandle;
    Data = MediaType;
    v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    if ( v7 >= 0 )
    {
      PhysicalMediumType = a1->PhysicalMediumType;
      v10 = L"PhysicalMediaType";
      ValueName = 0LL;
      v11 = 0x7FFFLL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      v7 = v11 == 0 ? 0xC000000D : 0;
      if ( v11
        && (ValueName.Buffer = L"PhysicalMediaType",
            ValueName.Length = 2 * (0x7FFF - v11),
            ValueName.MaximumLength = ValueName.Length + 2,
            Data = PhysicalMediumType,
            v7 = ZwSetValueKey(v8, &ValueName, 0, 4u, &Data, 4u),
            v7 >= 0) )
      {
        DataSize = a1->ifPhysAddress.Length;
        v13 = L"CurrentAddress";
        ValueName = 0LL;
        v14 = 0x7FFFLL;
        do
        {
          if ( !*(_WORD *)v13 )
            break;
          v13 += 2;
          --v14;
        }
        while ( v14 );
        v7 = v14 == 0 ? 0xC000000D : 0;
        if ( v14
          && (ValueName.Buffer = (wchar_t *)L"CurrentAddress",
              ValueName.Length = 2 * (0x7FFF - v14),
              ValueName.MaximumLength = ValueName.Length + 2,
              v7 = ZwSetValueKey(v8, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize),
              v7 >= 0) )
        {
          Length = a1->PermanentPhysAddress.Length;
          v16 = L"PermanentAddress";
          ValueName = 0LL;
          v17 = 0x7FFFLL;
          do
          {
            if ( !*v16 )
              break;
            ++v16;
            --v17;
          }
          while ( v17 );
          v7 = v17 == 0 ? 0xC000000D : 0;
          if ( v17 )
          {
            ValueName.Buffer = L"PermanentAddress";
            ValueName.Length = 2 * (0x7FFF - v17);
            ValueName.MaximumLength = ValueName.Length + 2;
            v7 = ZwSetValueKey(v8, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
            if ( v7 >= 0 )
            {
              if ( v8 )
                ZwClose(v8);
              return 0LL;
            }
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v19 = 25;
        }
        else
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v19 = 24;
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v19 = 23;
      }
      goto LABEL_29;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v19 = 22;
LABEL_29:
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v19,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)p_InterfaceGuid,
      v7);
  }
LABEL_30:
  KRegKey::~KRegKey((KRegKey *)&KeyHandle);
  return (unsigned int)v7;
}
