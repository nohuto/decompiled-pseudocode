/*
 * XREFs of ?OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@3456@@Z @ 0x18059C940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z @ 0x18059C15C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z.c)
 *     ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18059CA9C (-QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::OnWindowMigrationEvent(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  bool v7; // zf
  bool v8; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *, int *))(*(_QWORD *)a3 + 88LL))(
         a3,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !v10 )
    {
      AcquireSRWLockShared(this + 19);
      v7 = this[25].Ptr == this[26].Ptr;
      v11 = this + 19;
      v8 = !v7;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
      if ( v8 )
      {
        CSnapAssistControllerBase::EndGuidedSnapAssist((__int64)this, 0);
        CSnapAssistControllerBase::QueueSnapAssistDismissal((CSnapAssistControllerBase *)this);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34A,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
