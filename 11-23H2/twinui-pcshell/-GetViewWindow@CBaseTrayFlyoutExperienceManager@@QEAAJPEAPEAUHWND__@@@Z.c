/*
 * XREFs of ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180472508
 * Callers:
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180472BF0 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::GetViewWindow(CBaseTrayFlyoutExperienceManager *this, HWND *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 96);
  if ( *v3 )
  {
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           v3,
           &v10);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v9);
      v4 = v5;
      if ( v5 >= 0 )
      {
        *a2 = (HWND)v9;
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 865LL;
    }
    else
    {
      v6 = 863LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    return v4;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35D,
    (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
    (const char *)0x8000FFFFLL);
  return v4;
}
