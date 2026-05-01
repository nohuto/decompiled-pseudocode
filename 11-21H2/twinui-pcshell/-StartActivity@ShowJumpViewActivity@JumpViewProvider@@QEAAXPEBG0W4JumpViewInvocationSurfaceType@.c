/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180374160
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x18037186C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@544@Z @ 0x1803710BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x180371C54 (-CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1803747C4 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4,
        int a5)
{
  unsigned __int64 v9; // rax
  const WCHAR *v10; // rsi
  const WCHAR *v11; // r14
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // rdi
  const GUID *v19; // rax
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
    goto LABEL_7;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( v9 >= 0x10 && (v10 = L"Microsoft.Edge.?", CompareStringOrdinal(L"Microsoft.Edge.?", 16, a2, 16, 1) == 2) )
  {
    v11 = &LocaleName;
  }
  else
  {
LABEL_7:
    v10 = JumpViewTelemetryHelper::CensorPath(a2, a2);
    v11 = JumpViewTelemetryHelper::CensorPath(a3, v12);
  }
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (RTL_SRWLOCK **)&v24);
  v13 = *(_QWORD *)(a1 + 48);
  v15 = *(_DWORD **)(wil::details::static_lazy<JumpViewProvider>::get(
                       v14,
                       _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v13 + 8));
  else
    *(_OWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)v13 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v24);
  v17 = wil::details::static_lazy<JumpViewProvider>::get(
          v16,
          _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  v18 = *(_DWORD **)(v17 + 8);
  if ( *v18 > 5u && tlgKeywordOn(*(_QWORD *)(v17 + 8), 0x400000000000LL) )
  {
    LODWORD(v24) = a5;
    LODWORD(v25) = a4;
    v21 = (__int64)v11;
    v22 = (__int64)v10;
    v23 = 0LL;
    LODWORD(v20) = GetCurrentThreadId();
    v19 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v18,
      (unsigned __int8 *)dword_1806A753F,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v19,
      (__int64)&v23,
      (__int64)&v20,
      (const WCHAR **)&v22,
      (const WCHAR **)&v21,
      (__int64)&v25,
      (__int64)&v24);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
