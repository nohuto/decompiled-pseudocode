/*
 * XREFs of ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180522364
 * Callers:
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x180527DF8 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802D4466 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?StartTextInputManagementService@@YA_NXZ @ 0x18074B25C (-StartTextInputManagementService@@YA_NXZ.c)
 *     ?_SetSessionEvent@@YA_NPEBG@Z @ 0x18074B324 (-_SetSessionEvent@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::EnsureTabTip(KeyboardHosting::TabTipAdapter *this)
{
  bool v1; // bl
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  char v6; // bl
  int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  KeyboardHosting::TabTipAdapter *v9; // [rsp+40h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v9 = this;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v1 = CoCreateInstance(
         &GUID_4ce576fa_83dc_4f88_951c_9d0782b4e376,
         0LL,
         6u,
         &GUID_37c994e7_432b_4834_a2f7_dce1f13b834b,
         &ppv) >= 0;
  v3 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   v2,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u && tlgKeywordOn((__int64)v3, 256LL) )
  {
    v11 = 0x1000000LL;
    LOBYTE(v9) = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v4,
      byte_18086153E,
      0LL,
      v5,
      (__int64)&v9,
      (__int64)&v11);
  }
  if ( !v1 )
  {
    if ( !_SetSessionEvent(L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-crashed") )
    {
      v6 = 1;
      if ( !StartTextInputManagementService() )
        goto LABEL_13;
      if ( !_SetSessionEvent(L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-crashed") )
      {
        v7 = 0;
        while ( !_SetSessionEvent(L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-crashed") )
        {
          Sleep(0x64u);
          if ( ++v7 >= 50 )
            goto LABEL_13;
        }
      }
    }
    v6 = 0;
LABEL_13:
    if ( v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC03,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x80004005LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
}
