/*
 * XREFs of ??$com_weak_query_nothrow@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEAPEAUIWeakReference@@@Z @ 0x180392CA0
 * Callers:
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803965E8 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::com_weak_query_nothrow<wil::com_ptr_t<IInspectable,wil::err_exception_policy> &>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  *a2 = 0LL;
  v4 = *v3;
  v8 = 0LL;
  v5 = (*v4)(v3, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, a2);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70B,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
