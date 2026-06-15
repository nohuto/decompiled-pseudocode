/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC
 * Callers:
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000BE24 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18000E1AC (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033DE4 (-ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

GUID *__fastcall EffectPack::GetDefaultConnectorProcessingModeInternal(EffectPack *a1, GUID *a2, int a3, int a4)
{
  int v4; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  BOOL v10; // ebp
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  _QWORD *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // r9
  __int64 v18; // r8
  GUID v19; // xmm0
  GUID *result; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( a3 != 2 )
    v4 = a3;
  if ( v4 )
    goto LABEL_10;
  v8 = *((_QWORD *)a1 + 161);
  if ( *(_BYTE *)(v8 + 8235) )
    goto LABEL_10;
  v9 = *(_QWORD *)(v8 + 80);
  v10 = 1;
  if ( !v9 )
    goto LABEL_10;
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v10 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v10 )
  {
LABEL_10:
    if ( !a4 )
      EffectPack::ResolveAllOverridingChains(a1, v4);
    if ( (unsigned __int64)v4 >= *((_QWORD *)a1 + 174) )
    {
      _o_terminate(v4);
      __debugbreak();
      JUMPOUT(0x1800991AALL);
    }
    v11 = *((_QWORD *)a1 + 175) + 16LL * v4;
  }
  else
  {
    v11 = (__int64)a1 + 1632;
  }
  v12 = *(_DWORD *)(v11 + 8);
  if ( v12 )
  {
    v13 = 0;
    if ( v12 <= 0 )
      goto LABEL_20;
    while ( 1 )
    {
      v14 = (_QWORD *)(*(_QWORD *)v11 + 16LL * v13);
      v15 = *v14 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
      if ( *v14 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
        v15 = v14[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
      if ( !v15 )
        break;
      if ( ++v13 >= v12 )
        goto LABEL_20;
    }
    if ( v13 == -1 )
    {
LABEL_20:
      v16 = 0;
      if ( v12 <= 0 )
        goto LABEL_28;
      while ( 1 )
      {
        v17 = (_QWORD *)(*(_QWORD *)v11 + 16LL * v16);
        v18 = *v17 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v17 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v18 = v17[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v18 )
          break;
        if ( ++v16 >= v12 )
          goto LABEL_28;
      }
      if ( v16 == -1 )
LABEL_28:
        v19 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v11, 0);
      else
        v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v19 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = a2;
  *a2 = v19;
  return result;
}
