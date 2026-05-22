/*
 * XREFs of ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x1800643B0
 * Callers:
 *     _lambda_48f152b7375fc54a16cdd7806e5a908e_::operator() @ 0x180062238 (_lambda_48f152b7375fc54a16cdd7806e5a908e_--operator().c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x180062EDC (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800010E0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempl.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NXZ @ 0x1800631FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NX.c)
 */

void __fastcall LampArrayDevice::SetAmbientPids(LampArrayDevice *this, int a2, int a3, char a4)
{
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v12[4]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  int v14; // [rsp+48h] [rbp-20h] BYREF
  const char *v15; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      v8);
  *((_DWORD *)this + 54) = a2;
  *((_DWORD *)this + 55) = a3;
  *((_BYTE *)this + 224) = a4;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DL55030749>::GetImpl'::`2'::impl) )
  {
    if ( (unsigned int)dword_180275498 > 5 )
    {
      v12[0] = a4;
      v13 = a3;
      v14 = a2;
      v15 = "SetAmbientPids";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v9,
        (int)&unk_18023309E,
        v10,
        v11,
        (const unsigned __int16 **)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)v12);
    }
  }
}
