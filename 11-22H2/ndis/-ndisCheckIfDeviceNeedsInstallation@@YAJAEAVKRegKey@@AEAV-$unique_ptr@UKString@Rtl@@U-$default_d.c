/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01197E8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002AF64 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(HANDLE *a1, void **a2, _BYTE *a3)
{
  __int64 v4; // r9
  const wchar_t *v5; // rax
  __int64 result; // rax
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0x7FFFLL;
  v7 = 0LL;
  v5 = L"NetCfgInstanceId";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v7.Buffer = L"NetCfgInstanceId";
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
    result = KRegKey::QueryValueString(a1, &v7, a2);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    *a3 = 1;
  }
  else
  {
    if ( (_DWORD)result )
      return result;
    *a3 = 0;
  }
  return 0LL;
}
