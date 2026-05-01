/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1804CB800
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
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  const char *v4; // r9
  RTL_SRWLOCK *v5; // r12
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *Ptr; // r14
  _QWORD *v9; // rax
  __int64 v10; // r13
  PVOID v11; // r13
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+28h] [rbp-60h] BYREF
  char v18[8]; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 (__fastcall *v21)(PVOID, _QWORD, _QWORD); // [rsp+90h] [rbp+8h]
  _QWORD *v22; // [rsp+A0h] [rbp+18h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents((__int64)this);
  *(_OWORD *)v17 = 0LL;
  AcquireSRWLockExclusive(this + 59);
  v5 = this + 53;
  v6 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  try
  {
    while ( v6 )
    {
      v7 = (char *)v5->Ptr + 16 * v6 - 16;
      if ( *(_QWORD *)(*v7 + 32LL) == a2.value )
      {
        std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v17, v7);
        std::vector<std::shared_ptr<ViewEventRegistration>>::erase(
          (__int64)&this[53],
          &v16,
          (__int64)v5->Ptr + 16 * v6 - 16);
        if ( (*((_BYTE *)v17[0] + 16) & 0x20) == 0 )
        {
          Ptr = this[46].Ptr;
          v9 = this[47].Ptr;
          v22 = v9;
          while ( Ptr != v9 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*Ptr + 264LL))(
                                           *Ptr,
                                           v18)
                            + 32LL);
            if ( v19 )
              std::_Ref_count_base::_Decref(v19);
            if ( v10 == a2.value )
            {
              v11 = this[39].Ptr;
              v21 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL);
              v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr);
              v13 = v21(v11, v12, 0LL);
              if ( v13 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1E4,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v13);
            }
            ++Ptr;
            v9 = v22;
          }
        }
      }
      --v6;
    }
    v14 = v17[0] == 0LL ? 0x80070490 : 0;
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockExclusive(this + 59);
    if ( v17[1] )
      std::_Ref_count_base::_Decref(v17[1]);
    result = v14;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
