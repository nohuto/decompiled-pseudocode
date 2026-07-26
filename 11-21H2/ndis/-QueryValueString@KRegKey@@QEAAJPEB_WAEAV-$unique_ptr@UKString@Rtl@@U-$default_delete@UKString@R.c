/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B5F0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01531F8 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r9
  _WORD *v4; // rax
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
  if ( v3 )
  {
    *((_QWORD *)&v6 + 1) = a2;
    LOWORD(v6) = -2 - 2 * v3;
    WORD1(v6) = -2 * v3;
    return KRegKey::QueryValueString(a1, &v6, a3);
  }
  return 3221225485LL;
}
