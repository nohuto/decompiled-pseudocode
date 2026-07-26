/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115D8C
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(HANDLE *a1, __int64 a2, char *a3)
{
  void *v4; // rbx
  __int64 v6; // r9
  const wchar_t *v7; // rax
  char v8; // si
  signed int v9; // edi
  __int16 v10; // r9
  signed int v11; // eax
  _UNICODE_STRING v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v6 = 0x7FFFLL;
  v13 = 0LL;
  v7 = L"RetiredNetCfgInstanceId";
  v8 = 1;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v9 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
  {
    v10 = 2 * v6;
    v13.Buffer = L"RetiredNetCfgInstanceId";
    v13.Length = -2 - v10;
    v13.MaximumLength = -v10;
  }
  if ( v9 >= 0 )
  {
    v11 = KRegKey::QueryValueString(a1, &v13, &v14);
    v4 = v14;
    v9 = v11;
  }
  if ( v9 == -1073741772 )
  {
    v8 = 0;
LABEL_10:
    *a3 = v8;
    v9 = 0;
    goto LABEL_11;
  }
  if ( !v9 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    goto LABEL_10;
  }
LABEL_11:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  return (unsigned int)v9;
}
