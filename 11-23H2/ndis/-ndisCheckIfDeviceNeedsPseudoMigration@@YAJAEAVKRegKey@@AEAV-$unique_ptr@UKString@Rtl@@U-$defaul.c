/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0118E18
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00358BC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C011BA84 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C012BE98 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(HANDLE *a1, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v7; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  const wchar_t *v10; // rax
  __int64 v11; // rdx
  HANDLE v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-30h] BYREF
  int Data; // [rsp+40h] [rbp-20h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  if ( ndisIsNetSetupV2Interface(*a2) || !ndisIsNetSetupV1Interface(*a2) )
  {
    *a3 = 0;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x38u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        (*a2)->Buffer);
    v7 = *a2;
    Guid = 0LL;
    if ( RtlGUIDFromString(v7, &Guid) >= 0 )
    {
      ValueName = 0LL;
      v8 = L"SuggestedInstanceId";
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( v9 )
      {
        ValueName.Buffer = L"SuggestedInstanceId";
        ValueName.Length = 2 * (0x7FFF - v9);
        ValueName.MaximumLength = ValueName.Length + 2;
        ZwSetValueKey(*a1, &ValueName, 0, 3u, &Guid, 0x10u);
      }
    }
    ValueName = 0LL;
    v10 = L"MigratedFromNetSetupV1";
    v11 = 0x7FFFLL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( v11 )
    {
      ValueName.Buffer = L"MigratedFromNetSetupV1";
      ValueName.Length = 2 * (0x7FFF - v11);
      ValueName.MaximumLength = ValueName.Length + 2;
      v12 = *a1;
      Data = 1;
      ZwSetValueKey(v12, &ValueName, 0, 4u, &Data, 4u);
    }
    ValueName = 0LL;
    v13 = L"NetCfgInstanceId";
    v14 = 0x7FFFLL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    if ( v14 )
    {
      ValueName.Buffer = L"NetCfgInstanceId";
      ValueName.Length = 2 * (0x7FFF - v14);
      ValueName.MaximumLength = ValueName.Length + 2;
      ZwDeleteValueKey(*a1, &ValueName);
    }
    *a3 = 1;
  }
  return 0LL;
}
