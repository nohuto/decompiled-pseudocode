/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180026810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001B888 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180025C90 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@455@Z @ 0x1801164F4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U2@U3@U3@.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117AD4 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117E6C (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180119828 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  __int64 v4; // r12
  struct IInputTarget *v5; // r15
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  char v8; // si
  _DWORD *v9; // rcx
  __int64 v10; // rbx
  int updated; // eax
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-59h]
  struct IInputTarget *v16; // [rsp+60h] [rbp-19h] BYREF
  unsigned int VIDOfTarget; // [rsp+68h] [rbp-11h] BYREF
  unsigned int PIDOfTarget; // [rsp+6Ch] [rbp-Dh] BYREF
  __int64 v19; // [rsp+70h] [rbp-9h] BYREF
  __int64 v20; // [rsp+78h] [rbp-1h] BYREF
  union _RTL_RUN_ONCE *v21; // [rsp+80h] [rbp+7h] BYREF
  int v22; // [rsp+88h] [rbp+Fh]
  struct IInputTarget *v23; // [rsp+90h] [rbp+17h] BYREF
  _QWORD v24[7]; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+E0h] [rbp+67h] BYREF
  LPVOID Context; // [rsp+F0h] [rbp+77h] BYREF
  int v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)this + 103);
  v5 = 0LL;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v21 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180277DD0;
    qword_180277DD0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DE8 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v22 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v21);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v6 && *v6 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v21 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180277DD0;
      qword_180277DD0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180277DE8 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v22 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v21);
    }
    v8 = *((_BYTE *)this + 872);
    v9 = *(_DWORD **)(wil::details::static_lazy<ISMTracing>::get(
                        v7,
                        _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                    + 8);
    if ( v9 )
    {
      if ( *v9 )
      {
        v10 = *(_QWORD *)(wil::details::static_lazy<ISMTracing>::get(
                            v9,
                            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v10 > 4u
          && (*(_BYTE *)(v10 + 16) & 1) != 0
          && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
        {
          VIDOfTarget = ISMTracing::GetVIDOfTarget(a2);
          LODWORD(Context) = 0;
          if ( a2 )
          {
            v16 = a2;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v16);
            v19 = 0LL;
            if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v16, &v19) >= 0 && v19 )
              (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 56LL))(v19, &Context);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
            Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v16);
            v28 = (int)Context;
            v16 = 0LL;
            Context = a2;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&Context);
            v20 = 0LL;
            if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&Context, &v20) >= 0 && v20 )
              (*(void (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)v20 + 64LL))(v20, &v16);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&Context);
            v5 = v16;
          }
          else
          {
            v28 = 0;
          }
          v23 = v5;
          PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
          v24[0] = v4;
          v21 = (union _RTL_RUN_ONCE *)a2;
          LOBYTE(fPending) = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v10,
            (unsigned int)&unk_18023454E,
            v13,
            v14,
            (__int64)&fPending,
            (__int64)&v21,
            (__int64)v24,
            (__int64)&PIDOfTarget,
            (__int64)&v23,
            (__int64)&v28,
            (__int64)&VIDOfTarget);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 872) )
    MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
  updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)updated,
      v15);
  return 0LL;
}
