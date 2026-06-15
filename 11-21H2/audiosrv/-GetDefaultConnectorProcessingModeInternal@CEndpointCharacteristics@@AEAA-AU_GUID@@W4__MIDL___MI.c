/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000CB2C
 * Callers:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180002444 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180032E20 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        __int64 a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v4; // ebx
  __int64 v8; // rcx
  BOOL v9; // ebp
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // eax
  _QWORD *v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  GUID v18; // xmm0
  GUID *result; // rax
  SystemEffectDescriptor *v20; // rax
  SystemEffectDescriptor *v21; // rax
  SystemEffectDescriptor *v22; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( a3 != 2 )
    v4 = a3;
  if ( v4 )
    goto LABEL_10;
  if ( *(_BYTE *)(a1 + 9727) )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = 1;
  if ( !v8 )
    goto LABEL_10;
  *(_OWORD *)pvar = 0LL;
  v24 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v9 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v9 )
  {
LABEL_10:
    if ( !a4 )
    {
      v20 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 1792, v4);
      SystemEffectDescriptor::ResolveAllOverridingChains(v20);
      v21 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 1808, v4);
      SystemEffectDescriptor::ResolveAllOverridingChains(v21);
      v22 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 1824, v4);
      SystemEffectDescriptor::ResolveAllOverridingChains(v22);
    }
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 152) )
    {
      _o_terminate();
      __debugbreak();
      JUMPOUT(0x180076F3BLL);
    }
    v10 = *(_QWORD *)(a1 + 160) + 16LL * v4;
  }
  else
  {
    v10 = a1 + 168;
  }
  v11 = *(_DWORD *)(v10 + 8);
  if ( v11 )
  {
    v12 = 0;
    if ( v11 <= 0 )
      goto LABEL_20;
    while ( 1 )
    {
      v13 = (_QWORD *)(*(_QWORD *)v10 + 16LL * v12);
      v14 = *v13 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
      if ( *v13 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
        v14 = v13[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
      if ( !v14 )
        break;
      if ( ++v12 >= v11 )
        goto LABEL_20;
    }
    if ( v12 == -1 )
    {
LABEL_20:
      v15 = 0;
      if ( v11 <= 0 )
        goto LABEL_31;
      while ( 1 )
      {
        v16 = (_QWORD *)(*(_QWORD *)v10 + 16LL * v15);
        v17 = *v16 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v16 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v17 = v16[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v17 )
          break;
        if ( ++v15 >= v11 )
          goto LABEL_31;
      }
      if ( v15 == -1 )
LABEL_31:
        v18 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v10, 0LL);
      else
        v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v18 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = a2;
  *a2 = v18;
  return result;
}
