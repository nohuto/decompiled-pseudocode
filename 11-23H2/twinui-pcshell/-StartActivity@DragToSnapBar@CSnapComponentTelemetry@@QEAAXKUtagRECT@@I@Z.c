/*
 * XREFs of ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x180663B90
 * Callers:
 *     ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180662F50 (-SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV-$com_ptr_t@UIAp.c)
 *     ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x180663058 (-SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRE.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444444@Z @ 0x18065E22C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 */

void __fastcall CSnapComponentTelemetry::DragToSnapBar::StartActivity(
        CSnapComponentTelemetry::DragToSnapBar *this,
        int a2,
        struct tagRECT *a3,
        int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  RTL_SRWLOCK *v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rdi
  LONG left; // eax
  DWORD CurrentThreadId; // eax
  const GUID *v16; // rax
  int v17; // [rsp+78h] [rbp+17h] BYREF
  int v18; // [rsp+7Ch] [rbp+1Bh] BYREF
  LONG bottom; // [rsp+80h] [rbp+1Fh] BYREF
  LONG right; // [rsp+84h] [rbp+23h] BYREF
  LONG top; // [rsp+88h] [rbp+27h] BYREF
  LONG v22; // [rsp+8Ch] [rbp+2Bh] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v24; // [rsp+98h] [rbp+37h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+3Fh] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  v10 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    v9,
                    (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  v11 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = wil::details::static_lazy<WindowManagementLogging>::get(
          (__int64)v11,
          (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
  {
    bottom = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    v24 = 0x2000000LL;
    v17 = a4;
    v18 = a2;
    v22 = left;
    CurrentThreadId = GetCurrentThreadId();
    v25 = 0x2000000LL;
    LODWORD(SRWLock) = CurrentThreadId;
    v16 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v13,
      byte_18087191B,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v16,
      (__int64)&v25,
      (__int64)&SRWLock,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom,
      (__int64)&v18,
      (__int64)&v17);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CSnapComponentTelemetry::DragToSnapBar *)((char *)this + 8));
}
