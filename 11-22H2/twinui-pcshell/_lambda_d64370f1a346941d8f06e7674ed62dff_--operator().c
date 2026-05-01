/*
 * XREFs of _lambda_d64370f1a346941d8f06e7674ed62dff_::operator() @ 0x18064CF8C
 * Callers:
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D7E8 (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIImmersiveMonitor@@AEBU2@@?$com_ptr@UIRudeWindowManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIImmersiveMonitor@@1@Z @ 0x18064C8A8 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIImmersiveMonitor@@AEBU2@@-$com_ptr@UIRude.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_d64370f1a346941d8f06e7674ed62dff_::operator()(wil::details::in1diag3 *a1)
{
  int v1; // eax
  _DWORD *v2; // rcx
  ULONG v4; // [rsp+20h] [rbp-60h]
  bool v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-38h] BYREF
  bool *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v6 = 0;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 344LL) )
  {
    v7 = 0LL;
    v8 = **((_QWORD **)a1 + 1);
    winrt::com_ptr<IRudeWindowManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IImmersiveMonitor *,_GUID const &>(
      &v7,
      (__int64 (__fastcall *)(_QWORD, GUID *, GUID *, __int64 *))IUnknown_QueryService,
      &v8);
    v1 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 40LL))(v7, &v6);
    a1 = retaddr;
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v1,
        v4);
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  }
  v2 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   (__int64)a1,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    v5 = v6 != 0;
    v10 = &v5;
    v11 = 1;
    v12 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_180870F5E, 0LL, 0LL, 3u, &v9);
  }
  return v6 != 0;
}
