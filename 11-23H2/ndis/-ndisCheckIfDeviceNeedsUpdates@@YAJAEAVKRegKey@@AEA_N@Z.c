/*
 * XREFs of ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C0119578
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01194DC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall ndisCheckIfDeviceNeedsUpdates(struct KRegKey *a1, bool *a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r8
  const wchar_t *v5; // rax
  NTSTATUS result; // eax
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = 0;
  v4 = 0x7FFFLL;
  v5 = L"DriverUpdated";
  v7 = 0LL;
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
    v7.Buffer = L"DriverUpdated";
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
    result = KRegKey::QueryValueUlong(a1, &v7, &v8);
    v3 = v8;
  }
  if ( result == -1073741772 )
  {
    *a2 = 0;
    return 0;
  }
  if ( !result )
  {
    *a2 = v3 != 0;
    return 0;
  }
  return result;
}
