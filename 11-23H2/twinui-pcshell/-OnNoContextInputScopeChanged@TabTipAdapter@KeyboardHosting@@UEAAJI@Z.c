/*
 * XREFs of ?OnNoContextInputScopeChanged@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x1802DD9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlKeyboardLogon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011651C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlKeyboardLogon@@@details@wil@@QEAAX_NW.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18051EE6C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnNoContextInputScopeChanged(
        RTL_SRWLOCK *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  _BYTE *v7; // rbx
  _DWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlKeyboardLogon>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlKeyboardLogon>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v7 = (char *)&this[45].Ptr + 6;
  v8 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   v6,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    LOBYTE(v14) = *v7;
    LODWORD(v15) = a2;
    v12[0] = (__int64)"TabTipAdapter::OnNoContextInputScopeChanged";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (int)v8,
      (__int64)v12,
      (__int64)&v15,
      (__int64)&v14);
  }
  if ( *v7
    && (v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[3].Ptr + 640LL))(this[3].Ptr, a2),
        v10 = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  else
  {
    AcquireSRWLockExclusive(this + 49);
    LODWORD(v14) = a2;
    BYTE4(v14) = 1;
    this[58].Ptr = (PVOID)v14;
    if ( this != (RTL_SRWLOCK *)-392LL )
      ReleaseSRWLockExclusive(this + 49);
    return 0LL;
  }
}
