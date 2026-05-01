/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801758E0
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_5164db1b048cc09dc1373863a8819d39__void___cdecl(void)_::operator() @ 0x18045B860 (wistd--__function--__func__lambda_5164db1b048cc09dc1373863a8819d39__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     wil::details::ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___::_ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___ @ 0x1801AF708 (wil--details--ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___--_ScopeExitFn__lambda_9da6.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rcx
  bool v3; // bl
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-10h] BYREF
  char v11; // [rsp+48h] [rbp-8h]
  char v12; // [rsp+60h] [rbp+10h] BYREF
  bool v13; // [rsp+68h] [rbp+18h] BYREF
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 92) )
  {
    v9[0] = 1;
    v9[1] = 2;
    v14 = 0LL;
    v10 = &v14;
    v11 = 1;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v9, &v14) >= 0 )
    {
      v2 = *((_QWORD *)this + 92);
      v3 = *(_DWORD *)(v14 + 16) != 0;
      *(_BYTE *)(*(_QWORD *)(v2 + 112) + 511LL) = v3;
      v4 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                       v2,
                       _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
      if ( *v4 > 5u )
      {
        if ( tlgKeywordOn((__int64)v4, 16LL) )
        {
          v12 = 0;
          v13 = v3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            v5,
            (int)&unk_1806BCE5E,
            v6,
            v7,
            (__int64)&v13,
            (__int64)&v12);
        }
      }
    }
    wil::details::ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___::_ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___(&v10);
  }
  return 0LL;
}
