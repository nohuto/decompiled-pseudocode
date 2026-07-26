/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C012CC04
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C005D75C (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011C6B4 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  NTSTATUS SubkeyName; // edi
  void *m_ptr; // r8
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  HANDLE v8; // rbx
  NTSTATUS v9; // eax
  ULONG i; // esi
  HANDLE v11; // rbx
  HANDLE v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-41h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  GUID Guid; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Au,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids);
  if ( IsIfBlockAvailable(a2) )
  {
    SubkeyName = 0;
  }
  else
  {
    m_ptr = a1->m_ptr;
    *(_OWORD *)Handle = 0LL;
    v6 = 0x7FFFLL;
    v7 = L"NetworkInterface";
    v8 = 0LL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    SubkeyName = v6 == 0 ? 0xC000000D : 0;
    if ( !v6 )
      goto LABEL_10;
    Handle[1] = L"NetworkInterface";
    LOWORD(Handle[0]) = 2 * (0x7FFF - v6);
    WORD1(Handle[0]) = LOWORD(Handle[0]) + 2;
    ObjectAttributes.RootDirectory = m_ptr;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)Handle;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    v8 = KeyHandle;
    SubkeyName = v9;
    Handle[0] = KeyHandle;
    if ( v9 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        KeyHandle = 0LL;
        SubkeyName = KRegKey::GetSubkeyName(Handle, i, &KeyHandle);
        if ( SubkeyName < 0 )
          break;
        v11 = KeyHandle;
        Guid = 0LL;
        if ( RtlGUIDFromString((PCUNICODE_STRING)KeyHandle, &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
        {
          SubkeyName = 0;
          *a2 = Guid;
          if ( !v11 )
            goto LABEL_25;
          v12 = v11;
          goto LABEL_24;
        }
        if ( v11 )
          ExFreePoolWithTag(v11, 0x7274534Bu);
      }
      v12 = KeyHandle;
      if ( !KeyHandle )
        goto LABEL_25;
LABEL_24:
      ExFreePoolWithTag(v12, 0x7274534Bu);
LABEL_25:
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
    else
    {
LABEL_10:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x3Bu,
          (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
          SubkeyName);
      if ( v8 )
        ZwClose(v8);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = SubkeyName;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      v14);
  }
  return (unsigned int)SubkeyName;
}
