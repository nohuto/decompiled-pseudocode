/*
 * XREFs of ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x1800155B0
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180015490 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001B888 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800B2C08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117AD4 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117E6C (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(
        ISMTracing *this,
        int a2,
        struct IUnknown *a3)
{
  __int64 v4; // rbx
  struct IInputTarget *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+40h] [rbp-30h] BYREF
  struct IInputTarget *v9; // [rsp+48h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+58h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp-10h]
  ISMTracing *fPending; // [rsp+90h] [rbp+20h] BYREF
  unsigned int VIDOfTarget; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int PIDOfTarget; // [rsp+A8h] [rbp+38h] BYREF

  fPending = this;
  v9 = 0LL;
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct IInputTarget **))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      &v9);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v11 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180277DD0;
    qword_180277DD0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DE8 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v12 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v11);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    VIDOfTarget = ISMTracing::GetVIDOfTarget(v9);
    PIDOfTarget = ISMTracing::GetPIDOfTarget(v9);
    v8 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_18023427C,
      v6,
      v7,
      (__int64)&v8,
      (__int64)&PIDOfTarget,
      (__int64)&VIDOfTarget);
  }
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
