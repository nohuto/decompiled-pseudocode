/*
 * XREFs of ?UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B8B98
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateAllowInputPanelMdmPolicy(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  int v3; // edx
  __int64 v4; // rdi
  bool v5; // si
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v15; // [rsp+50h] [rbp+8h] BYREF
  bool v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 1;
  PolicyInt = PolicyManager_GetPolicyInt(L"TextInput", L"AllowInputPanel", &v17);
  v3 = v17;
  if ( PolicyInt < 0 )
    v3 = 1;
  v4 = *((_QWORD *)this + 92);
  v17 = v3;
  v5 = v3 != 0;
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 112);
  *(_BYTE *)(v7 + 617) = v3 != 0;
  if ( !*(_BYTE *)(v7 + 617)
    && KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
         (KeyboardHosting::TabTipAdapterPolicy *)v7,
         *(_DWORD *)(v7 + 612)) )
  {
    v6 = 2;
  }
  v8 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v7,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 16LL) )
  {
    v15 = v6;
    v16 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v9,
      (int)&unk_1806BCE06,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( v6 == 2 )
  {
    v12 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(v4, 2LL, *(unsigned int *)(v4 + 528));
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD38,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xACE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v13);
    }
  }
}
