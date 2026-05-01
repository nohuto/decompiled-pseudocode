/*
 * XREFs of ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x180517144
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444@Z @ 0x180001F60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@@-$_tlgWrit.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ @ 0x18020C248 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802DC980 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this,
        const unsigned __int16 *a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = TouchKeyboardExperienceTraceLogging::Provider(v8);
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = 0;
    if ( tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v13 = a4;
      v14 = a3;
      LOBYTE(v11) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) != 0;
      v16 = (__int64)a2;
      LODWORD(v18) = v11;
      v17 = 0x1000000LL;
      LODWORD(v15) = GetCurrentThreadId();
      v12 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (int)&dword_18085FD1A,
        *((_QWORD *)this + 6) + 8,
        v12,
        (__int64)&v17,
        (__int64)&v15,
        (const WCHAR **)&v16,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v18);
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
