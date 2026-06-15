/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0
 * Callers:
 *     _lambda_cffaa754e23da3c99fec38207043a1d7_::operator() @ 0x180023CA4 (_lambda_cffaa754e23da3c99fec38207043a1d7_--operator().c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F2D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002575C (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXU_GUID@@@Z @ 0x1800258C0 (-PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXU_GUID@@@Z.c)
 *     ?GetLastSetEffectPackId@CEndpointCharacteristics@@AEBA?AU_GUID@@XZ @ 0x180025E88 (-GetLastSetEffectPackId@CEndpointCharacteristics@@AEBA-AU_GUID@@XZ.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18014B75C (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18014BE7C (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x180150A5C (-UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        CEndpointCharacteristics *this,
        struct EffectPack **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  _DWORD *v5; // r10
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  struct _GUID *v8; // r8
  __int64 v9; // rax
  int v10; // ecx
  struct _GUID *LastSetEffectPackId; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  struct _GUID *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v19; // eax
  unsigned int v20; // r15d
  int updated; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int EffectPackContexts; // eax
  int v27; // [rsp+20h] [rbp-D8h]
  struct _GUID v28; // [rsp+40h] [rbp-B8h] BYREF
  struct _GUID v29; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v31[32]; // [rsp+70h] [rbp-88h] BYREF
  struct _GUID *v32; // [rsp+90h] [rbp-68h]
  __int64 v33; // [rsp+98h] [rbp-60h]
  struct _GUID *v34; // [rsp+A0h] [rbp-58h]
  __int64 v35; // [rsp+A8h] [rbp-50h]
  const WCHAR *v36; // [rsp+B0h] [rbp-48h]
  int v37; // [rsp+B8h] [rbp-40h]
  int v38; // [rsp+BCh] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v5 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( *v5 > 5u )
  {
    v6 = (const WCHAR *)*((_QWORD *)this + 6);
    v7 = *((_QWORD *)this + 44);
    if ( v7 )
    {
      v30 = *(_OWORD *)*(_QWORD *)(v7 + 1272);
      v8 = (struct _GUID *)&v30;
    }
    else
    {
      v29 = GUID_00000000_0000_0000_0000_000000000000;
      v8 = &v29;
    }
    v28 = *(struct _GUID *)*((_QWORD *)*a2 + 159);
    if ( v6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v6[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v6 = &String2;
      v10 = 2;
    }
    v36 = v6;
    v37 = v10;
    v38 = 0;
    v34 = v8;
    v35 = 16LL;
    v32 = &v28;
    v33 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v5, byte_18019655D, 0LL, 0LL, 5, (__int64)v31);
  }
  LastSetEffectPackId = CEndpointCharacteristics::GetLastSetEffectPackId(this, &v29);
  v28 = *(struct _GUID *)*((_QWORD *)*a2 + 159);
  v12 = *(_QWORD *)&v28.Data1 - *(_QWORD *)&LastSetEffectPackId->Data1;
  if ( *(_QWORD *)&v28.Data1 == *(_QWORD *)&LastSetEffectPackId->Data1 )
    v12 = *(_QWORD *)v28.Data4 - *(_QWORD *)LastSetEffectPackId->Data4;
  if ( v12 )
  {
    v13 = (_DWORD *)*((_QWORD *)this + 1036);
    if ( *v13 > 5u )
    {
      v14 = CEndpointCharacteristics::GetLastSetEffectPackId(this, &v29);
      v28 = *(struct _GUID *)*((_QWORD *)*a2 + 159);
      v34 = v14;
      v35 = 16LL;
      v32 = &v28;
      v33 = 16LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v13, byte_1801964F8, 0LL, 0LL, 4, (__int64)v31);
    }
    v15 = CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x613,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
    v28 = *(struct _GUID *)*((_QWORD *)*a2 + 159);
    v16 = *(_QWORD *)&v28.Data1 - DRIVER_APO_EFFECTPACK_ID;
    if ( *(_QWORD *)&v28.Data1 == (_QWORD)DRIVER_APO_EFFECTPACK_ID )
      v16 = *(_QWORD *)v28.Data4 - *((_QWORD *)&DRIVER_APO_EFFECTPACK_ID + 1);
    if ( v16 )
    {
      v19 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x619,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19,
          v27);
        if ( v4 )
          LeaveCriticalSection(v4);
        return v20;
      }
      updated = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                  this,
                  *(struct _GUID **)(*((_QWORD *)*a2 + 159) + 1320LL),
                  *(_DWORD *)(*((_QWORD *)*a2 + 159) + 1312LL),
                  (const unsigned __int16 *)(*((_QWORD *)*a2 + 159) + 544LL));
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x61E,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated);
      v22 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
              this,
              *(struct _GUID **)(*((_QWORD *)*a2 + 159) + 1352LL),
              *(_DWORD *)(*((_QWORD *)*a2 + 159) + 1344LL),
              (const unsigned __int16 *)(*((_QWORD *)*a2 + 159) + 544LL));
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x621,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v22);
      v23 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
              this,
              *(struct _GUID **)(*((_QWORD *)*a2 + 159) + 1384LL),
              *(_DWORD *)(*((_QWORD *)*a2 + 159) + 1376LL),
              (const unsigned __int16 *)(*((_QWORD *)*a2 + 159) + 544LL));
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x624,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v23);
      v24 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
              this,
              *(struct _GUID **)(*((_QWORD *)*a2 + 159) + 1416LL),
              *(_DWORD *)(*((_QWORD *)*a2 + 159) + 1408LL),
              (const unsigned __int16 *)(*((_QWORD *)*a2 + 159) + 544LL));
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x628,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v24);
      v25 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
              this,
              *(struct _GUID **)(*((_QWORD *)*a2 + 159) + 1448LL),
              *(_DWORD *)(*((_QWORD *)*a2 + 159) + 1440LL),
              (const unsigned __int16 *)(*((_QWORD *)*a2 + 159) + 544LL));
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x62B,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v25);
      EffectPackContexts = CEndpointCharacteristics::CreateEffectPackContexts(this, *a2);
      if ( EffectPackContexts < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x62E,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)EffectPackContexts);
    }
  }
  v17 = EffectPack::DeriveEffectiveConnectorAndEffectPackCapabilities(*a2);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x633,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17);
  std::shared_ptr<EffectPack>::operator=((_QWORD *)this + 44, a2);
  v28 = *(struct _GUID *)*((_QWORD *)*a2 + 159);
  CEndpointCharacteristics::PersistLastSetEffectPack(this, &v28);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 56LL))(
    g_policyConfigInternal,
    *((_QWORD *)this + 6));
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
