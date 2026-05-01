/*
 * XREFs of ?OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180381DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803823E8 (-ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180382430 (-SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnViewCreated(
        CScreenClippingExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  _DWORD *v5; // rcx
  HWND v6; // rax
  HWND v7; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1806A9DAF, 0LL, 0LL, 2u, &v11);
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v7 = v6;
  if ( v6 )
  {
    if ( !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v8 = 394LL;
LABEL_6:
      v9 = -2147467259;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    if ( !SetPropW(v7, L"NoAnimationOffscreenMovement", HANDLE_FLAG_INHERIT) )
    {
      v8 = 397LL;
      goto LABEL_6;
    }
  }
  v9 = CScreenClippingExperienceManager::SizeViewOnCreation((CScreenClippingExperienceManager *)((char *)this - 48));
  if ( v9 < 0 )
  {
    v8 = 400LL;
    goto LABEL_7;
  }
  v9 = CScreenClippingExperienceManager::ShowExperienceWithoutFocus((CScreenClippingExperienceManager *)((char *)this - 48));
  if ( v9 < 0 )
  {
    v8 = 401LL;
    goto LABEL_7;
  }
  return 0LL;
}
