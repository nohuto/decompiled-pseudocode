/*
 * XREFs of ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x1800A2E08
 * Callers:
 *     ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0B70 (-UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180084E48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue(const unsigned __int16 *a1, char a2)
{
  bool v2; // bl
  int Policy; // eax
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-30h]
  _DWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  LOBYTE(v15) = a2;
  v12 = 0LL;
  v14 = 0LL;
  v2 = 1;
  v11[1] = 2;
  v11[0] = 1;
  Policy = PolicyManager_GetPolicy(L"TextInput", L"AllowTextInputSuggestionUpdate", v11, &v14);
  if ( Policy < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)Policy,
      v10);
  }
  else if ( *(_DWORD *)(v14 + 4) )
  {
    v2 = *(_DWORD *)(v14 + 16) != 0;
  }
  v5 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v4,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u && (unsigned __int8)tlgKeywordOn(v5, 0x400000000000LL) )
  {
    v16 = 0x2000000LL;
    LOBYTE(v15) = v2;
    v17 = (__int64)L"AllowTextInputSuggestionUpdate";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v6,
      (int)&dword_180864144,
      v7,
      v8,
      (const WCHAR **)&v17,
      (__int64)&v15,
      (__int64)&v16);
  }
  if ( v14 )
    PolicyManager_FreeGetPolicyData();
  return v2;
}
