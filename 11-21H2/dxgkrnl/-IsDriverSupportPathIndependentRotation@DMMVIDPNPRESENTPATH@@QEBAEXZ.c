/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01899C8
 * Callers:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000C448 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000C7EC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v1 + 40);
  }
  v4 = *(_QWORD *)(v3 + 72);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *(_QWORD *)(v3 + 72);
  }
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(v7 + 2792);
  if ( *(_BYTE *)(v8 + 289) && *(_BYTE *)(v8 + 290)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v2;
}
