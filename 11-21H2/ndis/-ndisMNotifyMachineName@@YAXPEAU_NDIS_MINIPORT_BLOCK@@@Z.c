/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B30C
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  signed int v5; // ecx
  __int16 v6; // dx
  NTSTATUS v7; // eax
  HANDLE v8; // rbx
  const wchar_t *v9; // rax
  signed int v10; // ecx
  __int16 v11; // si
  int v12; // eax
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE v16; // [rsp+B8h] [rbp+38h] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (a1->Flags & 0x80u) == 0
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    v16 = 0LL;
    v2 = 0x7FFFLL;
    v13 = 0LL;
    v3 = 0x7FFFLL;
    v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    v5 = v3 == 0 ? 0xC000000D : 0;
    if ( v3 )
    {
      v6 = 2 * v3;
      *((_QWORD *)&v13 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      LOWORD(v13) = -2 - v6;
      WORD1(v13) = -v6;
    }
    if ( v5 >= 0 )
    {
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v16 = KeyHandle;
      if ( !v7 )
      {
        v8 = 0LL;
        KeyHandle = 0LL;
        v13 = 0LL;
        v9 = L"HostName";
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v2;
        }
        while ( v2 );
        v10 = v2 == 0 ? 0xC000000D : 0;
        if ( v2 )
        {
          v11 = 2 * v2;
          *((_QWORD *)&v13 + 1) = L"HostName";
          LOWORD(v13) = -2 - v11;
          WORD1(v13) = -v11;
        }
        if ( v10 >= 0 )
        {
          v12 = KRegKey::QueryValueString(&v16, &v13, &KeyHandle);
          v8 = KeyHandle;
          if ( !v12 )
            ndisMDoMiniportOp(a1, 0, 0x1021Au, *((void **)KeyHandle + 1), *(unsigned __int16 *)KeyHandle, 1, 0);
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0x7274534Bu);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
  }
}
