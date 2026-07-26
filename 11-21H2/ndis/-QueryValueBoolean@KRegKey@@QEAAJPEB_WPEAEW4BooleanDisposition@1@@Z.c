/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C010E1C0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C012E91C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01531F8 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C010E254 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  __int64 v4; // r10
  wchar_t *v5; // rax
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
  if ( v4 )
  {
    v7.Buffer = a2;
    v7.Length = -2 - 2 * v4;
    v7.MaximumLength = -2 * v4;
    return KRegKey::QueryValueBoolean(this, &v7, a3, a4);
  }
  return 3221225485LL;
}
