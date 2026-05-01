/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800662A4
 * Callers:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800177A0 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180749428 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 * Callees:
 *     ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ @ 0x1800663C8 (-EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800664B0 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  int v9; // edi
  HWND v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v15; // rdx
  ULONG v16; // [rsp+20h] [rbp-49h]
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-35h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-19h] BYREF
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  v9 = SingleViewLightDismissHelper::EnsureLightDismissProvider(a1);
  if ( v9 < 0 )
  {
    v15 = 77LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9,
      v16);
    return (unsigned int)v9;
  }
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(a4, v8);
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)0x80004005LL,
      v16);
    return 2147500037LL;
  }
  v11 = *(_QWORD *)a1;
  v19[1] = v10;
  v19[0] = a2;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(
         v11,
         v19,
         a3,
         &v17);
  if ( v9 < 0 )
  {
    v15 = 85LL;
    goto LABEL_11;
  }
  v13 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                       v12,
                       _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v13 > 5u )
  {
    v23 = 0;
    v18 = v17;
    v22 = 4;
    v21 = (int *)&v18;
    tlgWriteTransfer_EventWriteTransfer((int)v13, (int)&dword_18087F23C, 0, 0, 3u, &v20);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v17);
  else
    *((_DWORD *)a1 + 2) = v17;
  return 0LL;
}
