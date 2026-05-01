/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180097A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180098650 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  __int64 v4; // r14
  std::_Ref_count_base *v5; // r15
  char *Ptr; // r15
  __int64 *v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // r13
  __int64 v16; // r12
  PVOID v17; // r12
  unsigned int v18; // eax
  int v19; // eax
  std::_Ref_count_base *v20[2]; // [rsp+20h] [rbp-48h] BYREF
  char v21[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall *v24)(PVOID, _QWORD, _QWORD); // [rsp+70h] [rbp+8h]
  RTL_SRWLOCK *v25; // [rsp+80h] [rbp+18h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v20 = 0LL;
  AcquireSRWLockExclusive(this + 59);
  v25 = this + 59;
  v4 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  v5 = 0LL;
  while ( v4 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this[53].Ptr + 2 * v4 - 2) + 32LL) == a2.value )
    {
      std::shared_ptr<ViewEventRegistration>::operator=(v20);
      Ptr = (char *)this[54].Ptr;
      v8 = (__int64 *)((char *)this[53].Ptr + 16 * v4);
      v9 = Ptr;
      if ( v8 != (__int64 *)Ptr )
      {
        do
        {
          v10 = *v8;
          v11 = v8[1];
          *v8 = 0LL;
          v8[1] = 0LL;
          *(v8 - 2) = v10;
          v12 = (std::_Ref_count_base *)*(v8 - 1);
          *(v8 - 1) = v11;
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          v8 += 2;
        }
        while ( v8 != (__int64 *)Ptr );
        Ptr = (char *)this[54].Ptr;
        v9 = Ptr;
      }
      v13 = (std::_Ref_count_base *)*((_QWORD *)Ptr - 1);
      if ( v13 )
      {
        std::_Ref_count_base::_Decref(v13);
        v9 = (char *)this[54].Ptr;
      }
      this[54].Ptr = v9 - 16;
      v5 = v20[0];
      if ( (*((_BYTE *)v20[0] + 16) & 0x20) == 0 )
      {
        v14 = this[46].Ptr;
        v15 = this[47].Ptr;
        while ( v14 != v15 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 264LL))(*v14, v21)
                          + 32LL);
          if ( v22 )
            std::_Ref_count_base::_Decref(v22);
          if ( v16 == a2.value )
          {
            v17 = this[39].Ptr;
            v24 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v17 + 56LL);
            v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 288LL))(*v14);
            v19 = v24(v17, v18, 0LL);
            if ( v19 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1E4,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                (const char *)(unsigned int)v19,
                (int)v20[0]);
          }
          ++v14;
        }
      }
    }
    --v4;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
  return v5 == 0LL ? 0x80070490 : 0;
}
