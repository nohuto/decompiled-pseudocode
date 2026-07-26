/*
 * XREFs of ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C010DD50
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C010E340 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsUpdates(KRegKey *this, bool *a2)
{
  unsigned int v4; // r9d
  __int64 v5; // r8
  const wchar_t *v6; // rax
  signed int v7; // ecx
  __int16 v8; // r8
  signed int v9; // eax
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = 0;
  v5 = 0x7FFFLL;
  v6 = L"DriverUpdated";
  v11 = 0LL;
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
    v11.Buffer = L"DriverUpdated";
    v11.Length = -2 - v8;
    v11.MaximumLength = -v8;
  }
  if ( v7 >= 0 )
  {
    v9 = KRegKey::QueryValueUlong(this, &v11, &v12);
    v4 = v12;
    v7 = v9;
  }
  if ( v7 == -1073741772 )
  {
    *a2 = 0;
    return 0LL;
  }
  if ( !v7 )
  {
    *a2 = v4 != 0;
    return 0LL;
  }
  return (unsigned int)v7;
}
