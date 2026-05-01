/*
 * XREFs of ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1801B1458
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x1801BF600 (CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___--Invoke.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18053D800 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::_DismissView(
        AccessibilityExperienceManager *this,
        struct AccessibilityViewInfo *a2)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 1) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 32LL))(*((_QWORD *)this + 50));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EE,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( !*(_QWORD *)a2 )
    goto LABEL_3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v12 = 0LL;
    v8 = *((_QWORD *)this + 33);
    v9 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    if ( v9(v8, &IID_ITouchKeyboardExperienceManager, &GUID_9516d866_ca0f_40ca_8997_efa618b50f99, &v12) < 0
      || (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12), v7 = v10, v10 >= 0) )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_3:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)a2 + 1);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a2);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
