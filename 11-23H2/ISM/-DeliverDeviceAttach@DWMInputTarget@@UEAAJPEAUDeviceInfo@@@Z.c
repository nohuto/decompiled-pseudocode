/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180012660
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800A3F3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1GetInputReportResult@@QEAA@XZ @ 0x1800E1E08 (--1GetInputReportResult@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(
        DWMInputTarget *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  size_t v6; // rsi
  _DWORD *v7; // r14
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-18h]
  union _RTL_RUN_ONCE *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 fPending; // [rsp+88h] [rbp+38h] BYREF
  LPVOID Context; // [rsp+90h] [rbp+40h] BYREF

  v16 = 0LL;
  v6 = *((int *)a2 + 2);
  if ( !(_DWORD)v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\helpers.cpp",
      a4);
  v15 = v6 + 28;
  v7 = operator new[]((int)v6 + 28);
  v16 = v7;
  *v7 = 1;
  memcpy_0(v7 + 2, a2, v6);
  v8 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, _DWORD *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                          + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v7,
         (int)v6 + 28);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v17 = &`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180268F98;
    qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v17);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
  {
    v11 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                        v9,
                        _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v11 > 5u
      && (*(_BYTE *)(v11 + 16) & 1) != 0
      && (*(_QWORD *)(v11 + 24) & 1LL) == *(_QWORD *)(v11 + 24) )
    {
      fPending = *((int *)a2 + 1);
      Context = (LPVOID)*(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v11,
        (unsigned int)&unk_180225055,
        v12,
        v13,
        (__int64)&Context,
        (__int64)&fPending);
    }
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v8,
      v14);
    GetInputReportResult::~GetInputReportResult((GetInputReportResult *)&v15);
    return (unsigned int)v8;
  }
  else
  {
    operator delete[](v7);
    return 0LL;
  }
}
