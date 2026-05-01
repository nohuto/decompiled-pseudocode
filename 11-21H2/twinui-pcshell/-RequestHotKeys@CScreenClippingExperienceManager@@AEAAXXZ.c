/*
 * XREFs of ?RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1803820F8
 * Callers:
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1800B63A4 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScreenClippingExperienceManager::RequestHotKeys(CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, char *); // rbx
  int v5; // eax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806A9847, 0LL, 0LL, 2u, &v7);
  v3 = *((_QWORD *)this + 33);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  v5 = v4(v3, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, (char *)this + 272);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2AC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, unsigned __int64, char *))(**((_QWORD **)this + 34) + 56LL))(
         *((_QWORD *)this + 34),
         1LL,
         &unk_1806DD878,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 280);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2AE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
}
