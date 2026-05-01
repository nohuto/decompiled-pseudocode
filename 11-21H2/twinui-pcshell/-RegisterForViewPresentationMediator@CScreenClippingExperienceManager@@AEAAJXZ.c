/*
 * XREFs of ?RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800D868C
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800B5964 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewPresentationMediator(
        CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, char *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806A98EB, 0LL, 0LL, 2u, &v8);
  v3 = *((_QWORD *)this + 33);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  v5 = v4(
         v3,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 288);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
