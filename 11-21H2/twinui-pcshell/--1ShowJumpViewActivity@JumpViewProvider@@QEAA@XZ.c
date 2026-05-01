/*
 * XREFs of ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18012DAE0
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D560 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180371714 (--4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180372FF0 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     _CJumpViewExperienceManager::OnIdleStateChanged_::_1_::dtor$0 @ 0x180373096 (_CJumpViewExperienceManager--OnIdleStateChanged_--_1_--dtor$0.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373170 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::OnSetForegroundFailed_::_1_::dtor$0 @ 0x180373211 (_CJumpViewExperienceManager--OnSetForegroundFailed_--_1_--dtor$0.c)
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373610 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180373BC0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     _CJumpViewExperienceManager::Show_::_1_::dtor$3 @ 0x180374092 (_CJumpViewExperienceManager--Show_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801816E4 (-reset@-$shared_object@V-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18022A4D4 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity(
        JumpViewProvider::ShowJumpViewActivity *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 312);
  v3 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &v7);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  if ( v4 )
  {
LABEL_2:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      LODWORD(v7) = v5[22];
      v6 = 2147942974LL;
      if ( (int)v7 < 0 )
        v6 = (unsigned int)v7;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v5,
        v6,
        &v7);
      (*(void (__fastcall **)(JumpViewProvider::ShowJumpViewActivity *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
