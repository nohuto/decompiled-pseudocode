/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116DF8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C0160358 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E78 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r9
  _WORD *v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueString(a1, &v6, a3);
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    *((_QWORD *)&v6 + 1) = a2;
    LOWORD(v6) = 2 * (0x7FFF - v3);
    WORD1(v6) = v6 + 2;
    return KRegKey::QueryValueString(a1, &v6, a3);
  }
  return result;
}
