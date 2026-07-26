/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115F44
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(HANDLE *a1, void **a2, _BYTE *a3)
{
  __int64 v5; // r9
  const wchar_t *v6; // rax
  signed int v7; // ecx
  __int16 v8; // r9
  _UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0x7FFFLL;
  v10 = 0LL;
  v6 = L"NetCfgInstanceId";
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
    v8 = 2 * v5;
    v10.Buffer = L"NetCfgInstanceId";
    v10.Length = -2 - v8;
    v10.MaximumLength = -v8;
  }
  if ( v7 >= 0 )
    v7 = KRegKey::QueryValueString(a1, &v10, a2);
  if ( v7 == -1073741772 )
  {
    *a3 = 1;
    return 0LL;
  }
  if ( !v7 )
  {
    *a3 = 0;
    return 0LL;
  }
  return (unsigned int)v7;
}
