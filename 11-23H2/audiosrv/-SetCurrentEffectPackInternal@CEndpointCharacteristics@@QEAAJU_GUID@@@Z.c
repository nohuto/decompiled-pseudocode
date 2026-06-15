/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F280
 * Callers:
 *     _lambda_cffaa754e23da3c99fec38207043a1d7_::operator() @ 0x180023CA4 (_lambda_cffaa754e23da3c99fec38207043a1d7_--operator().c)
 *     ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F89C (-SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x180149E04 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180149ED8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18014BE2C (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        CEndpointCharacteristics *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rax
  PROPVARIANT *v12; // rax
  int v13; // eax
  unsigned int v14; // esi
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // rcx
  const WCHAR *v19; // [rsp+40h] [rbp-88h] BYREF
  struct _GUID *v20; // [rsp+48h] [rbp-80h] BYREF
  struct EffectPack *v21; // [rsp+50h] [rbp-78h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+60h] [rbp-68h]
  int v24[4]; // [rsp+68h] [rbp-60h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v26; // [rsp+88h] [rbp-40h]
  __int128 v27; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v23 = v4;
  v7 = (_QWORD *)*((_QWORD *)this + 41);
  v8 = (_QWORD *)*((_QWORD *)this + 42);
  while ( v7 != v8 )
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v21, v7);
    *(_OWORD *)v24 = *(_OWORD *)*((_QWORD *)v21 + 159);
    v9 = *(_QWORD *)v24 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)v24 == *(_QWORD *)&a2->Data1 )
      v9 = *(_QWORD *)&v24[2] - *(_QWORD *)a2->Data4;
    if ( !v9 )
    {
      v10 = (_DWORD *)*((_QWORD *)this + 1036);
      if ( *v10 > 5u )
      {
        v19 = (const WCHAR *)*((_QWORD *)this + 6);
        v11 = *((_QWORD *)this + 44);
        if ( v11 )
        {
          v27 = *(_OWORD *)*(_QWORD *)(v11 + 1272);
          v12 = (PROPVARIANT *)&v27;
        }
        else
        {
          *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
          v12 = pvar;
        }
        v20 = (struct _GUID *)v12;
        *(_QWORD *)v24 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          (__int64)v10,
          byte_180196498,
          v5,
          v6,
          (__int64 *)v24,
          (__int64 *)&v20,
          &v19);
      }
      v13 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
      v14 = v13;
      if ( v13 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v26 = 0LL;
        LOWORD(pvar[0]) = 0;
        v16 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
                *((_QWORD *)this + 11),
                &PKEY_AudioEndpoint_Disable_SysFx,
                pvar);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5E1,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v16);
        PropVariantClear(pvar);
        v17 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, &v21);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5E4,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v17);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5DB,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        if ( v4 )
          LeaveCriticalSection(v4);
        return v14;
      }
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v7 += 2;
  }
  v18 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( *v18 > 5u )
  {
    *(_QWORD *)v24 = *((_QWORD *)this + 6);
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (__int64)v18,
      byte_180196574,
      v5,
      v6,
      (__int64 *)&v20,
      (const WCHAR **)v24);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 2147942487LL;
}
