/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800148B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x1800149D0 (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x1800B08E4 (-OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(MPCInputRouter *this, struct IUnknown *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  int v5; // eax
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx
  int v8; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v10; // eax
  int v11; // eax
  union _RTL_RUN_ONCE *v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v15; // [rsp+60h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp+38h] BYREF
  LPVOID Context; // [rsp+70h] [rbp+40h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 79);
  v4 = (_QWORD *)*((_QWORD *)this + 80);
  while ( v3 != v4 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(*(_QWORD *)*v3 + 24LL))(*v3, a2);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x898,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v8,
        (int)v12);
    ++v3;
  }
  if ( MPCManager::s_instance )
  {
    v15 = 0;
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))a2->lpVtbl[1].Release)(a2, &v15);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2AA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5,
        (int)v12);
    if ( (v15 & 0x18040) != 0 )
    {
      Context = 0LL;
      QueryInterface = a2->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, LPVOID *))QueryInterface)(
              a2,
              &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
              &Context);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v10,
          (int)v12);
      fPending = 0;
      v11 = (*(__int64 (__fastcall **)(LPVOID, WINBOOL *))(*(_QWORD *)Context + 32LL))(Context, &fPending);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v11,
          (int)v12);
      if ( fPending )
        MPCManager::OnGamepadIsSupportedForProcess(MPCManager::s_instance, fPending);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v12 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v6 && *v6 )
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
      {
        if ( fPending )
        {
          v12 = &`ISMTracing::Instance'::`2'::wrapper;
          Context = &qword_180268B30;
          qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
          v13 = 0;
          wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
        }
      }
      ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(v7, v15, a2);
    }
  }
}
