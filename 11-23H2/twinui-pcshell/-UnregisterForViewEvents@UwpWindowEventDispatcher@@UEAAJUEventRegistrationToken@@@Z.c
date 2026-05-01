/*
 * XREFs of ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x18009DF70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18009E08C (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?erase@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@@Z @ 0x18009E294 (-erase@-$vector@V-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr@UViewEven.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::UnregisterForViewEvents(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v4; // r12
  char *Ptr; // rcx
  __int64 i; // rsi
  char *v7; // rdx
  unsigned int v8; // edi
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r13
  PVOID v13; // r13
  unsigned int *v14; // rax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-68h]
  char v17[8]; // [rsp+28h] [rbp-60h] BYREF
  std::_Ref_count_base *v18[2]; // [rsp+30h] [rbp-58h] BYREF
  char v19[8]; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall *v23)(PVOID, _QWORD, _QWORD); // [rsp+A0h] [rbp+18h]
  _QWORD *v24; // [rsp+A8h] [rbp+20h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v18 = 0LL;
  AcquireSRWLockExclusive(this + 61);
  v16 = (_DWORD)this + 488;
  v4 = this + 55;
  Ptr = (char *)this[55].Ptr;
  for ( i = ((char *)this[56].Ptr - (char *)Ptr) >> 4; i; --i )
  {
    v7 = &Ptr[16 * i - 16];
    if ( *(_QWORD *)(*(_QWORD *)v7 + 32LL) == a2.value )
    {
      std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v18, v7);
      std::vector<std::shared_ptr<ViewEventRegistration>>::erase(&this[55], v17, (char *)v4->Ptr + 16 * i - 16);
      v10 = this[48].Ptr;
      v11 = this[49].Ptr;
      v24 = v11;
      while ( v10 != v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 264LL))(*v10, v19)
                        + 32LL);
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        if ( v12 == a2.value )
        {
          v13 = this[40].Ptr;
          v23 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v13 + 64LL);
          v14 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v10 + 288LL))(*v10, &v22);
          v15 = v23(v13, *v14, 0LL);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x22F,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v15,
              v16);
        }
        ++v10;
        v11 = v24;
      }
      Ptr = (char *)v4->Ptr;
    }
  }
  v8 = v18[0] == 0LL ? 0x80070490 : 0;
  if ( this != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockExclusive(this + 61);
  if ( v18[1] )
    std::_Ref_count_base::_Decref(v18[1]);
  return v8;
}
