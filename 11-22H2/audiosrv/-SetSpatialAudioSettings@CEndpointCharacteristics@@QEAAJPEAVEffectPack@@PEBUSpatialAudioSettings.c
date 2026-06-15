/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x1800605B8
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cc8545399a300f832261433c2fbaac5d_::operator() @ 0x180075540 (_lambda_cc8545399a300f832261433c2fbaac5d_--operator().c)
 * Callees:
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800301F4 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z @ 0x180044C90 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612A0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        const struct SpatialAudioSettings *a3,
        const struct tWAVEFORMATEX *a4,
        bool a5)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v14; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v12 = 7022LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a4 )
  {
    v12 = 7023LL;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 53) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((struct _RTL_CRITICAL_SECTION *)((char *)this + 416), 1);
    return 0LL;
  }
  v14 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
         g_policyConfigInternal,
         &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CSpatialProperties::SetSpatialAudioSettings(
      (CEndpointCharacteristics *)((char *)this + 416),
      a2,
      a3,
      a4,
      (struct SpatialAudioRelatedGlobalSettings *)&v14,
      a5);
    EffectPack::MarkSystemEffectsForResolution(a2, 0xEu);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B76,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
