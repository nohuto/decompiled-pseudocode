/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180025300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800241B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180107868 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@455@Z @ 0x180107E08 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U2@U3@U3@.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18010946C (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1801097FC (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x18010B428 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  __int64 v4; // r12
  union _RTL_RUN_ONCE *v5; // rsi
  _DWORD *v6; // rcx
  char v7; // r15
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  int updated; // eax
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-89h]
  LPVOID v15; // [rsp+60h] [rbp-49h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+68h] [rbp-41h] BYREF
  int v17; // [rsp+70h] [rbp-39h]
  WINBOOL v18; // [rsp+78h] [rbp-31h] BYREF
  unsigned int VIDOfTarget; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned int PIDOfTarget; // [rsp+80h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-21h] BYREF
  __int64 v22; // [rsp+90h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v23; // [rsp+98h] [rbp-11h] BYREF
  int v24; // [rsp+A0h] [rbp-9h]
  union _RTL_RUN_ONCE *v25; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+7h] BYREF
  union _RTL_RUN_ONCE *v27; // [rsp+B8h] [rbp+Fh] BYREF
  int v28; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+110h] [rbp+67h] BYREF
  LPVOID Context; // [rsp+120h] [rbp+77h] BYREF
  int v32; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)this + 102);
  v5 = 0LL;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v23 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v24 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v23);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v6 && *v6 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v23 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v24 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v23);
    }
    v7 = *((_BYTE *)this + 864);
    v15 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v15)
      && (_DWORD)Context )
    {
      v16 = &`ISMTracing::Instance'::`2'::wrapper;
      v15 = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v17 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v16);
    }
    v8 = (_DWORD *)*((_QWORD *)v15 + 1);
    if ( v8 && *v8 )
    {
      v15 = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v18, &v15) && v18 )
      {
        v27 = &`ISMTracing::Instance'::`2'::wrapper;
        v15 = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v28 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v27);
      }
      v9 = *((_QWORD *)v15 + 1);
      if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
      {
        VIDOfTarget = ISMTracing::GetVIDOfTarget(a2);
        LODWORD(Context) = 0;
        if ( a2 )
        {
          v16 = (union _RTL_RUN_ONCE *)a2;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v16);
          v21 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v16, &v21) >= 0 && v21 )
            (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 56LL))(v21, &Context);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v16);
          v32 = (int)Context;
          v16 = 0LL;
          Context = a2;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&Context);
          v22 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&Context, &v22) >= 0 && v22 )
            (*(void (__fastcall **)(__int64, union _RTL_RUN_ONCE **))(*(_QWORD *)v22 + 64LL))(v22, &v16);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&Context);
          v5 = v16;
        }
        else
        {
          v32 = 0;
        }
        v25 = v5;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        v26 = v4;
        v23 = (union _RTL_RUN_ONCE *)a2;
        LOBYTE(fPending) = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          (unsigned int)&unk_180225633,
          v12,
          v13,
          (__int64)&fPending,
          (__int64)&v23,
          (__int64)&v26,
          (__int64)&PIDOfTarget,
          (__int64)&v25,
          (__int64)&v32,
          (__int64)&VIDOfTarget);
      }
    }
  }
  if ( *((_BYTE *)this + 864) )
    MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
  updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)updated,
      v14);
  return 0LL;
}
