/*
 * XREFs of ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059C840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z @ 0x18059C15C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::OnWindowArrangementEvent(
        CSnapAssistControllerBase *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  RTL_SRWLOCK *v5; // rbx
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_WORD *)a3 + 4) == 1 )
  {
    v5 = (RTL_SRWLOCK *)((char *)this + 152);
    AcquireSRWLockShared((PSRWLOCK)this + 19);
    v6 = *((_QWORD *)this + 24) == 0LL;
    v11 = v5;
    LOBYTE(v5) = !v6;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    if ( (_BYTE)v5 )
    {
      if ( *(_QWORD *)a3 == *((_QWORD *)this + 33) )
      {
        *((_QWORD *)this + 33) = 0LL;
      }
      else
      {
        *((_QWORD *)this + 33) = *(_QWORD *)a3;
        v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 5) + 56LL))(
               (char *)this + 40,
               *(_QWORD *)a3);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x335,
            (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v7);
          return v8;
        }
      }
    }
    else if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 28) )
    {
      CSnapAssistControllerBase::EndGuidedSnapAssist((__int64)this, 1);
    }
  }
  return 0LL;
}
