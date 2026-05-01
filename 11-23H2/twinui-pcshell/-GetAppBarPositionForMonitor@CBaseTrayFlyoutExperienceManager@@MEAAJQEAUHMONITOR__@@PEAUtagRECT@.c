/*
 * XREFs of ?GetAppBarPositionForMonitor@CBaseTrayFlyoutExperienceManager@@MEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180471FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::GetAppBarPositionForMonitor(
        CBaseTrayFlyoutExperienceManager *this,
        HMONITOR a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HMONITOR, SID *, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)a4 = -1;
  if ( SetRectEmpty(a3) )
  {
    v17[0] = 0LL;
    v9 = *((_QWORD *)this + 47);
    v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
    v11 = v10(v9, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v17);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AE,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v11);
LABEL_14:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
      return v8;
    }
    v19 = 0LL;
    v12 = v17[0];
    v13 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v17[0] + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    v14 = v13(v12, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, &v19);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v19 + 80LL))(v19, a4);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v19 + 168LL))(v19, a3);
        v8 = v14;
        if ( v14 >= 0 )
        {
          v8 = 0;
          goto LABEL_13;
        }
        v15 = 692LL;
      }
      else
      {
        v15 = 691LL;
      }
    }
    else
    {
      v15 = 689LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v14);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    goto LABEL_14;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AB,
    (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
    (const char *)0x80070057LL);
  return v8;
}
