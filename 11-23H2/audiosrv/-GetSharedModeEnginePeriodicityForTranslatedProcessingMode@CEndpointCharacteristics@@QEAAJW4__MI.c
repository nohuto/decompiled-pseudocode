/*
 * XREFs of ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18000E418
 * Callers:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180060938 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000E654 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180054774 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        __int64 a4,
        CAudioSignalProcessingModeMap *a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v10; // rbx
  __int64 v11; // rbx
  struct _GUID *v12; // rdx
  struct _GUID *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rax
  const struct tWAVEFORMATEX ***v18; // rbx
  const struct tWAVEFORMATEX ***v19; // rsi
  const struct tWAVEFORMATEX **v20; // rax
  int v21; // eax
  struct _GUID v24; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v25; // [rsp+40h] [rbp-58h] BYREF

  v10 = 264LL;
  if ( a2 != 3 )
    v10 = 240LL;
  v11 = a1 + v10;
  if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(a5, a4) == -1 )
  {
    v24 = *v12;
    v13 = &v24;
  }
  else
  {
    v24 = *v12;
    v13 = CAudioSignalProcessingModeMap::Lookup(a5, &v25, &v24);
  }
  v14 = *(_QWORD **)v11;
  v15 = *(_QWORD **)(v11 + 8);
  v24 = *v13;
  while ( v14 != v15 )
  {
    v16 = (_QWORD *)*v14;
    v17 = *(_QWORD *)*v14 - *(_QWORD *)&v24.Data1;
    if ( !v17 )
      v17 = v16[1] - *(_QWORD *)v24.Data4;
    if ( !v17 )
    {
      v18 = (const struct tWAVEFORMATEX ***)v16[2];
      v19 = (const struct tWAVEFORMATEX ***)v16[3];
      while ( v18 != v19 )
      {
        if ( (unsigned int)CompareWaveFormat(a3, **v18) )
        {
          if ( a7 )
            *a7 = *((_DWORD *)*v18 + 3);
          if ( a8 )
            *a8 = *((_DWORD *)*v18 + 2);
          if ( a9 )
            *a9 = *((_DWORD *)*v18 + 4);
          if ( a10 )
          {
            v20 = *v18;
            if ( a6 )
              v21 = *((_DWORD *)v20 + 6);
            else
              v21 = *((_DWORD *)v20 + 5);
            *a10 = v21;
          }
          return 0LL;
        }
        ++v18;
      }
    }
    ++v14;
  }
  return 2290679816LL;
}
