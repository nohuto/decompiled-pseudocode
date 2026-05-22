/*
 * XREFs of ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180042A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::DeliverDeviceEnumerationCompleted(DWMInputTarget *this)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  ULONG v7; // [rsp+20h] [rbp-50h]
  WINBOOL fPending; // [rsp+30h] [rbp-40h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  LODWORD(Context[0]) = 40;
  v2 = operator new[](0x28uLL);
  Context[1] = v2;
  *v2 = 4;
  v3 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, _DWORD *, __int64))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                           + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v2,
         40LL);
  Context[0] = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    v10.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
    Context[0] = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v10.Size = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v10);
  }
  v4 = *((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    Context[0] = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      v10.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
      Context[0] = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v10.Size = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v10);
    }
    v6 = *((_QWORD *)Context[0] + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      tlgWriteTransfer_EventWriteTransfer(v6, (int)&dword_180203696, 0, 0, 2u, &v10);
  }
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v3,
      v7);
  else
    v3 = 0;
  operator delete[](v2);
  return (unsigned int)v3;
}
