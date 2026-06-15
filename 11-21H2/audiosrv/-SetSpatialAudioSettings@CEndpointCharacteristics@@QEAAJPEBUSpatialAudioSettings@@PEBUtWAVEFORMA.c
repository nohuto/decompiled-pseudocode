/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18006A144
 * Callers:
 *     _lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator() @ 0x1800685CC (_lambda_4434e4183b7615ee6f5c6d72834eba6f_--operator().c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ @ 0x18013D594 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ.c)
 *     ?MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18014B758 (-MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3,
        bool a4)
{
  __int64 v8; // rdx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v14; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v8 = 6568LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v12);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v8 = 6569LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 47) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CEndpointCharacteristics *)((char *)this + 1904));
  }
  else
  {
    v14 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
            g_policyConfigInternal,
            &v14);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19B0,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        v12);
      return v11;
    }
    CSpatialProperties::SetSpatialAudioSettings(
      (CEndpointCharacteristics *)((char *)this + 1904),
      a2,
      a3,
      (struct SpatialAudioRelatedGlobalSettings *)&v14,
      a4);
    CEndpointCharacteristics::MarkSystemEffectsForResolution(this, 14LL);
  }
  return 0LL;
}
