/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01121F4
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0112258 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0120188 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(HANDLE *a1, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v7; // rcx
  __int64 v8; // rbx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  signed int v11; // ecx
  __int16 v12; // dx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  signed int v15; // ecx
  __int16 v16; // dx
  HANDLE v17; // rcx
  const wchar_t *v18; // rax
  signed int v19; // ecx
  __int16 v20; // bx
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
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (*a2)->Buffer);
    v7 = *a2;
    Guid = 0LL;
    v8 = 0x7FFFLL;
    if ( RtlGUIDFromString(v7, &Guid) >= 0 )
    {
      ValueName = 0LL;
      v9 = L"SuggestedInstanceId";
      v10 = 0x7FFFLL;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v10;
      }
      while ( v10 );
      v11 = v10 == 0 ? 0xC000000D : 0;
      if ( v10 )
      {
        v12 = 2 * v10;
        ValueName.Buffer = L"SuggestedInstanceId";
        ValueName.Length = -2 - v12;
        ValueName.MaximumLength = -v12;
      }
      if ( v11 >= 0 )
        ZwSetValueKey(*a1, &ValueName, 0, 3u, &Guid, 0x10u);
    }
    ValueName = 0LL;
    v13 = L"MigratedFromNetSetupV1";
    v14 = 0x7FFFLL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    v15 = v14 == 0 ? 0xC000000D : 0;
    if ( v14 )
    {
      v16 = 2 * v14;
      ValueName.Buffer = L"MigratedFromNetSetupV1";
      ValueName.Length = -2 - v16;
      ValueName.MaximumLength = -v16;
    }
    if ( v15 >= 0 )
    {
      v17 = *a1;
      Data = 1;
      ZwSetValueKey(v17, &ValueName, 0, 4u, &Data, 4u);
    }
    ValueName = 0LL;
    v18 = L"NetCfgInstanceId";
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v8;
    }
    while ( v8 );
    v19 = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
    {
      v20 = 2 * v8;
      ValueName.Buffer = L"NetCfgInstanceId";
      ValueName.Length = -2 - v20;
      ValueName.MaximumLength = -v20;
    }
    if ( v19 >= 0 )
      ZwDeleteValueKey(*a1, &ValueName);
    *a3 = 1;
  }
  return 0LL;
}
