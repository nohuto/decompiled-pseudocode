/*
 * XREFs of ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x180375720
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1803794F0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x180375D5C (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18037B9D4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>(
        __int64 a1,
        char *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  __int64 v14; // rax
  int v15; // r9d
  int v16; // r10d
  int v17; // r8d
  int v18; // xmm1_4
  int v20; // [rsp+70h] [rbp-9h] BYREF
  int v21; // [rsp+74h] [rbp-5h] BYREF
  int v22; // [rsp+78h] [rbp-1h] BYREF
  int v23; // [rsp+7Ch] [rbp+3h] BYREF
  int v24; // [rsp+80h] [rbp+7h] BYREF
  int v25; // [rsp+84h] [rbp+Bh] BYREF
  int v26; // [rsp+88h] [rbp+Fh] BYREF
  int v27; // [rsp+8Ch] [rbp+13h] BYREF
  char v28; // [rsp+B0h] [rbp+37h] BYREF

  v14 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
          a1,
          _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v14 + 8) > 5u )
  {
    LOBYTE(v14) = tlgKeywordOn(*(_QWORD *)(v14 + 8), 0x200000000000LL);
    if ( (_BYTE)v14 )
    {
      v17 = *(_QWORD *)(a1 + 48) + 8;
      v20 = *a10;
      v21 = *a9;
      v22 = *a8;
      v23 = *a7;
      v24 = *a6;
      v26 = *a4;
      v18 = *a5;
      v28 = *a2;
      v25 = v18;
      v27 = *a3;
      LOBYTE(v14) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v16,
                      (unsigned int)&unk_1806A7C39,
                      v17,
                      v15,
                      (__int64)&v28,
                      (__int64)&v27,
                      (__int64)&v26,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20);
    }
  }
  return v14;
}
