/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180041B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x180099DFC (-OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800EEA8C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800F0254 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800F05D8 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // esi
  __int64 v8; // rbx
  struct IInputTarget *v9; // rcx
  int v10; // eax
  __int64 (__fastcall *v11)(struct IDWMSupportedInputTarget *, GUID *, LPVOID *); // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+40h] [rbp-38h] BYREF
  struct IInputTarget *v18; // [rsp+48h] [rbp-30h] BYREF
  LPVOID v19; // [rsp+50h] [rbp-28h] BYREF
  int v20; // [rsp+58h] [rbp-20h]
  LPINIT_ONCE v21; // [rsp+60h] [rbp-18h] BYREF
  int v22; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  int v24; // [rsp+C0h] [rbp+48h] BYREF
  WINBOOL fPending; // [rsp+C8h] [rbp+50h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int PIDOfTarget; // [rsp+D8h] [rbp+60h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 79);
  v4 = (_QWORD *)*((_QWORD *)this + 80);
  while ( v3 != v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct IDWMSupportedInputTarget *))(*(_QWORD *)*v3 + 24LL))(*v3, a2);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x877,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10,
        v16);
    ++v3;
  }
  if ( MPCManager::s_instance )
  {
    v24 = 0;
    v5 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(*(_QWORD *)a2 + 40LL))(a2, &v24);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2AA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5,
        v16);
    if ( (v24 & 0x18040) != 0 )
    {
      Context = 0LL;
      v11 = **(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, LPVOID *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
      v12 = v11(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &Context);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v12,
          v16);
      fPending = 0;
      v13 = (*(__int64 (__fastcall **)(LPVOID, WINBOOL *))(*(_QWORD *)Context + 32LL))(Context, &fPending);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v13,
          v16);
      if ( fPending )
        MPCManager::OnGamepadIsSupportedForProcess(MPCManager::s_instance, fPending);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v19 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180242A80;
      qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v20 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v19);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v6 && *v6 )
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
      {
        v19 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180242A80;
        qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v20 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v19);
      }
      v7 = v24;
      v18 = 0LL;
      (**(void (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, struct IInputTarget **))a2)(
        a2,
        &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
        &v18);
      v19 = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &v19) && fPending )
      {
        v21 = &`ISMTracing::Instance'::`2'::wrapper;
        v19 = &qword_180242A80;
        qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v22 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v21);
      }
      v8 = *((_QWORD *)v19 + 1);
      if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        LODWORD(Context) = ISMTracing::GetVIDOfTarget(v18);
        PIDOfTarget = ISMTracing::GetPIDOfTarget(v18);
        v17 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          (unsigned int)&unk_18020395E,
          v14,
          v15,
          (__int64)&v17,
          (__int64)&PIDOfTarget,
          (__int64)&Context);
      }
      v9 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
}
