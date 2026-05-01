/*
 * XREFs of ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1803F2A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180098650 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1803E76B0 (-erase@-$vector@V-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr@UViewEven.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::UnregisterForViewEvents(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *Ptr; // r14
  _QWORD *v7; // r12
  __int64 v8; // r15
  PVOID v9; // r15
  __int64 (__fastcall *v10)(PVOID, _QWORD, _QWORD); // r13
  unsigned int *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  RTL_SRWLOCK *v21; // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents((__int64)this);
  *(_OWORD *)v16 = 0LL;
  wil::AcquireSRWLockExclusive(&v21, this + 59);
  v4 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  try
  {
    while ( v4 )
    {
      v5 = (char *)this[53].Ptr + 16 * v4 - 16;
      if ( *(_QWORD *)(*v5 + 32LL) == a2.value )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(v16, v5);
        std::vector<std::shared_ptr<ViewEventRegistration>>::erase(
          (__int64)&this[53],
          &v22,
          (__int64)this[53].Ptr + 16 * v4 - 16);
        Ptr = this[46].Ptr;
        v7 = this[47].Ptr;
        while ( Ptr != v7 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Ptr + 264LL))(*Ptr, v17)
                         + 32LL);
          if ( v18 )
            std::_Ref_count_base::_Decref(v18);
          if ( v8 == a2.value )
          {
            v9 = this[39].Ptr;
            v10 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v9 + 64LL);
            v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*Ptr + 288LL))(*Ptr, &v20);
            v12 = v10(v9, *v11, 0LL);
            if ( v12 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x221,
                (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v12);
          }
          ++Ptr;
        }
      }
      --v4;
    }
    v13 = v16[0] == 0LL ? 0x80070490 : 0;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    result = v13;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x228,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v14);
  }
  return result;
}
