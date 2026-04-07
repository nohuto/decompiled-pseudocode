/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800E60D8
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800401D8 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800628FC (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800A2428 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  RTL_SRWLOCK **v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive((__int64)this, &v8);
  v2 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                    v3,
                    _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v2 + 8);
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  v6 = (_DWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                   v4,
                   _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    LODWORD(v8) = GetCurrentThreadId();
    v9 = 0LL;
    v7 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v14 = &v8;
    v15 = 4;
    v16 = 0;
    v11 = &v9;
    v12 = 8;
    v13 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer(
      (__int64)v6,
      byte_1801208FE,
      *((_QWORD *)this + 6) + 8LL,
      v7,
      4,
      (__int64)v10);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8),
      v5);
}
