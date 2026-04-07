/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180007CF8
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x1800063E0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180005E0C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180007EF0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180008020 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180016D44 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EC2C (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  PSRWLOCK v4; // rcx
  _DWORD *v5; // rdi
  int v6; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                       v3,
                       _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v2 + 8);
  *(_DWORD *)v2 = 1;
  v4 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = *(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                      v4,
                      _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v8 = 0LL;
    v6 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    p_SRWLock = &SRWLock;
    v14 = 4;
    v15 = 0;
    v10 = &v8;
    v11 = 8;
    v12 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer(
      (_DWORD)v5,
      (unsigned int)&unk_1801273EA,
      *((_QWORD *)this + 6) + 8,
      v6,
      4,
      (__int64)v9);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
