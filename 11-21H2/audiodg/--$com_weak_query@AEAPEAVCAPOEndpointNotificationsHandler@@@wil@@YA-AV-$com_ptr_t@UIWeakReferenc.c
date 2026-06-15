/*
 * XREFs of ??$com_weak_query@AEAPEAVCAPOEndpointNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140069220
 * Callers:
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006A150 (-RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHa.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140056454 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall wil::com_weak_query<CAPOEndpointNotificationsHandler * &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  v4 = *v3;
  v8 = 0LL;
  v5 = (*v4)(v3, &GUID_00000038_0000_0000_c000_000000000046, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, a1);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      1781LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
