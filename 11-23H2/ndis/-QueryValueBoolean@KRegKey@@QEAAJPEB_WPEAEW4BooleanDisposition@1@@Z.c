/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0119118
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C013A644 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisBindBuilderLoadSettings @ 0x1C0160358 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C01191A0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  __int64 v4; // r10
  wchar_t *v5; // rax
  __int64 result; // rax
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueBoolean(this, &v7, a3, a4);
  v4 = 0x7FFFLL;
  v5 = a2;
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
    v7.Buffer = a2;
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
    return KRegKey::QueryValueBoolean(this, &v7, a3, a4);
  }
  return result;
}
