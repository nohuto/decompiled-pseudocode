/*
 * XREFs of ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F89C
 * Callers:
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x180119080 (s_epmSetCurrentEffectPackForEndpoint.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___ @ 0x18014A6B0 (wil--details--lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___--_lambda_call__lambda_ef11.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18014BE2C (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F280 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::SetUserSelectedEffectPack(CEndpointCharacteristics *this, IID *rclsid)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax
  LPOLESTR v9; // rax
  int v10; // eax
  LPOLESTR lpsz[2]; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-20h] BYREF
  CEndpointCharacteristics *v15; // [rsp+58h] [rbp-18h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &lpCriticalSection,
    *((_QWORD *)this + 6));
  v15 = this;
  v16 = 1;
  v4 = *(_QWORD *)&rclsid->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&rclsid->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *(_QWORD *)rclsid->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v4 )
  {
    *(IID *)pvar = *rclsid;
    v5 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, (struct _GUID *)pvar);
    if ( v5 < 0 )
    {
      v6 = 1457LL;
      goto LABEL_6;
    }
    lpsz[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)lpsz,
      0LL);
    if ( StringFromCLSID(rclsid, lpsz) >= 0 )
    {
      pvar[0] = (PROPVARIANT)31;
      v13 = 0LL;
      v9 = lpsz[0];
      lpsz[0] = 0LL;
      pvar[1] = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9)
                                                                                             + 48LL))(
              *((_QWORD *)this + 9),
              &PKEY_AudioEndpoint_UserSelectedEffectPack,
              pvar);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5BB,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v10);
      PropVariantClear(pvar);
    }
    if ( lpsz[0] )
      CoTaskMemFree(lpsz[0]);
  }
  else
  {
    v5 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
    if ( v5 < 0 )
    {
      v6 = 1446LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v5);
      wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___(&v15);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)v5;
    }
    *(_OWORD *)pvar = 0LL;
    v13 = 0LL;
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
           *((_QWORD *)this + 11),
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5AD,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
    PropVariantClear(pvar);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
    g_policyConfigInternal,
    *((_QWORD *)this + 6));
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
