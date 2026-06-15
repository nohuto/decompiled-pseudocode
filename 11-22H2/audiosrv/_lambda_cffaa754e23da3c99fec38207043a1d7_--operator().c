/*
 * XREFs of _lambda_cffaa754e23da3c99fec38207043a1d7_::operator() @ 0x180023CA4
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F2D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cffaa754e23da3c99fec38207043a1d7_::operator()(__int64 a1)
{
  CEndpointCharacteristics *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  struct _GUID v10; // xmm0
  __int64 v11; // rax
  GUID *v12; // rdi
  int v13; // eax
  int v14; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  struct _GUID v17; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(CEndpointCharacteristics **)a1;
  if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)a1) )
  {
    *(_OWORD *)pvar = 0LL;
    v16 = 0LL;
    v3 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)v2 + 9) + 40LL))(
           *((_QWORD *)v2 + 9),
           &PKEY_AudioEndpoint_UserSelectedEffectPack,
           pvar);
    v4 = v3;
    v5 = *(int **)(a1 + 8);
    *v5 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v3,
        (int)pvar[0]);
LABEL_21:
      PropVariantClear(pvar);
      return v4;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v12 = *(GUID **)(a1 + 16);
      if ( CLSIDFromString((LPCOLESTR)pvar[1], v12) >= 0 )
      {
        v17 = *v12;
        v13 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2, &v17);
        *v5 = v13;
        if ( v13 >= 0 )
        {
LABEL_20:
          v4 = 0;
          goto LABEL_21;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x69A,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
      }
    }
    v6 = *((_QWORD *)v2 + 41);
    v7 = *((_QWORD *)v2 + 42);
    while ( 1 )
    {
      if ( v6 == v7 )
        goto LABEL_6;
      v10 = *(struct _GUID *)*(_QWORD *)(*(_QWORD *)v6 + 1272LL);
      v17 = v10;
      v11 = *(_QWORD *)&v10.Data1 - *(_QWORD *)&CLSID_MEPAudioEffectPackID.Data1;
      if ( *(_QWORD *)&v10.Data1 == *(_QWORD *)&CLSID_MEPAudioEffectPackID.Data1 )
        v11 = *(_QWORD *)v17.Data4 - *(_QWORD *)CLSID_MEPAudioEffectPackID.Data4;
      if ( !v11 )
        break;
      v6 += 16LL;
    }
    *(struct _GUID *)*(_QWORD *)(a1 + 16) = v10;
    v14 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6AD,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
LABEL_6:
      PropVariantClear(pvar);
      goto LABEL_7;
    }
    goto LABEL_20;
  }
LABEL_7:
  *(_OWORD *)*(_QWORD *)(a1 + 16) = *(_OWORD *)*(_QWORD *)(*((_QWORD *)v2 + 46) + 1272LL);
  v8 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6BE,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
