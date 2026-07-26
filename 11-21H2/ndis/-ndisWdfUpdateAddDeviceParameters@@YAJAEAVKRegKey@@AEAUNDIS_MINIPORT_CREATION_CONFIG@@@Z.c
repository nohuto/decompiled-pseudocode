/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0120E74
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C00584F0 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0111174 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  NTSTATUS SubkeyName; // edi
  void *m_ptr; // rdx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int16 v8; // cx
  ULONG i; // esi
  HANDLE v10; // rbx
  HANDLE v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-31h]
  char v14[4]; // [rsp+28h] [rbp-31h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  HANDLE v16; // [rsp+38h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  GUID Guid; // [rsp+70h] [rbp+17h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Au,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
  if ( IsIfBlockAvailable(a2) )
  {
    SubkeyName = 0;
  }
  else
  {
    m_ptr = a1->m_ptr;
    v16 = 0LL;
    Guid = 0LL;
    v6 = L"NetworkInterface";
    v7 = 0x7FFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v7;
    }
    while ( v7 );
    SubkeyName = v7 == 0 ? 0xC000000D : 0;
    if ( v7 )
    {
      v8 = 2 * v7;
      *(_QWORD *)Guid.Data4 = L"NetworkInterface";
      LOWORD(Guid.Data1) = -2 - v8;
      HIWORD(Guid.Data1) = -v8;
    }
    if ( SubkeyName < 0 )
      goto LABEL_12;
    ObjectAttributes.RootDirectory = m_ptr;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SubkeyName = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    v16 = KeyHandle;
    if ( SubkeyName >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        KeyHandle = 0LL;
        SubkeyName = KRegKey::GetSubkeyName(&v16, i, &KeyHandle);
        if ( SubkeyName < 0 )
          break;
        v10 = KeyHandle;
        Guid = 0LL;
        if ( RtlGUIDFromString((PCUNICODE_STRING)KeyHandle, &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
        {
          SubkeyName = 0;
          *a2 = Guid;
          if ( !v10 )
            goto LABEL_26;
          v11 = v10;
          goto LABEL_25;
        }
        if ( v10 )
          ExFreePoolWithTag(v10, 0x7274534Bu);
      }
      v11 = KeyHandle;
      if ( !KeyHandle )
        goto LABEL_26;
LABEL_25:
      ExFreePoolWithTag(v11, 0x7274534Bu);
    }
    else
    {
LABEL_12:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v14 = SubkeyName;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x3Bu,
          (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
          *(_DWORD *)v14);
      }
    }
LABEL_26:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = SubkeyName;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      v13);
  }
  return (unsigned int)SubkeyName;
}
