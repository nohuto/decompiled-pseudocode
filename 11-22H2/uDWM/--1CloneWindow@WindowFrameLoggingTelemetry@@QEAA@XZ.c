/*
 * XREFs of ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180006698
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x1800063E0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     _CTopLevelWindow::CloneVisualTreeForLivePreview_::_1_::dtor$0 @ 0x1800671E2 (_CTopLevelWindow--CloneVisualTreeForLivePreview_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180005E0C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180005EA0 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800080BC (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180016108 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  int v6; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 312);
  v3 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      LODWORD(SRWLock) = v5[22];
      v6 = -2147024322;
      if ( (int)SRWLock < 0 )
        v6 = (int)SRWLock;
      wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v5,
        v6,
        (int *)&SRWLock);
      wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        this,
        (unsigned int)SRWLock);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
