/*
 * XREFs of ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C018A274
 * Callers:
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000C794 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0010AC8 (-IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALIN.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0010B2C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *(_QWORD *)(v1 + 40);
  }
  v3 = *(_QWORD *)(v2 + 72);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
      WdLogSingleEntry0(1LL);
  }
  return *(_DWORD *)(*(_QWORD *)(v5 + 16) + 2692LL) >= 1105;
}
