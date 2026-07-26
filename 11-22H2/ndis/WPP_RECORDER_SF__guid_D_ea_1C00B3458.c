/*
 * XREFs of WPP_RECORDER_SF__guid_D @ 0x1C00B3458
 * Callers:
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C011475C (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C0114A24 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C01150E8 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01154C4 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0115C18 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_D(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids, a4, a6, 16LL, va, 4LL, 0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 5LL, 28LL, &WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids, v9, a6);
}
