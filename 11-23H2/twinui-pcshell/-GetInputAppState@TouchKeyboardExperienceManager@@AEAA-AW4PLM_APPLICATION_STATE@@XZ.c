/*
 * XREFs of ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18020A518
 * Callers:
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@UEAAJPEAW4ApplicationState@Text@Shell@Internal@Windows@@@Z @ 0x18006C6E0 (-GetInputAppState@TouchKeyboardExperienceManager@@UEAAJPEAW4ApplicationState@Text@Shell@Internal.c)
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::operator() @ 0x180207574 (_lambda_4b0775d64c2392808fe7dff402e255dc_--operator().c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180050328 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputAppState(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  wil::srwlock::lock_shared(a1 + 72, &v3);
  LODWORD(v1) = HIDWORD(v1[70].Ptr);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v3);
  return (unsigned int)v1;
}
