/*
 * XREFs of ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180015A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1GetInputReportResult@@QEAA@XZ @ 0x1800E1E08 (--1GetInputReportResult@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::DeliverDeviceEnumerationCompleted(DWMInputTarget *this)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  ULONG v7; // [rsp+20h] [rbp-60h]
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *v11; // [rsp+48h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v10 = 40;
  v2 = operator new[](0x28uLL);
  v11 = v2;
  *v2 = 4;
  v3 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, _DWORD *, __int64))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                           + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v2,
         40LL);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v12.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180268F98;
    qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v12.Size = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v6 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                       v4,
                       _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      tlgWriteTransfer_EventWriteTransfer(v6, (int)&dword_180225099, 0, 0, 2u, &v12);
  }
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v3,
      v7);
    GetInputReportResult::~GetInputReportResult((GetInputReportResult *)&v10);
    return (unsigned int)v3;
  }
  else
  {
    operator delete[](v2);
    return 0LL;
  }
}
