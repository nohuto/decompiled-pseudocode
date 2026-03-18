/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C03A827C
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C01BC4FC (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C006A608 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C02CC908 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  DXGADAPTER **v5; // rdi
  __int64 v6; // r8
  D3DDDI_VIDEO_PRESENT_TARGET_ID v7; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v12; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(DXGADAPTER ***)(v4 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(DXGADAPTER ***)(v4 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v5[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v5, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v7 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v12.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v8 = *((_DWORD *)this + 43);
  v12.TargetId = v7;
  v12.CopyProtectionType = v8;
  if ( v8 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v12.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v12.APSTriggerBits = 0;
  v9 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v5, &v12, v6);
  v10 = v9;
  if ( v9 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  if ( v9 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v9);
  return v10;
}
