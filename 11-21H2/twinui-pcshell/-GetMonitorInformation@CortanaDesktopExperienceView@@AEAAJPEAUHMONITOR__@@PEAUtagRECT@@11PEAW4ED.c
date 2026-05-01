/*
 * XREFs of ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803A7E5C
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803A6744 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803A9BB0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803AC968 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A7250 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetMonitorInformation(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // r8d
  int v22; // r9d
  int v24[2]; // [rsp+30h] [rbp-81h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-71h]
  __int64 v26; // [rsp+50h] [rbp-61h] BYREF
  RECT rcWork; // [rsp+58h] [rbp-59h]
  struct tagRECT v28; // [rsp+70h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  *(_QWORD *)&v25.left = a7;
  v11 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v26 = 0LL;
    v13 = *((_QWORD *)this + 15);
    v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
    v15 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v26);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x907,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
LABEL_29:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      return v12;
    }
    *(_QWORD *)v24 = 0LL;
    v16 = v26;
    v17 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v26 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v24);
    v18 = v17(v16, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v24);
    v12 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              a6);
      v12 = v18;
      if ( v18 >= 0 )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v20 = 2147549183LL;
          v19 = 2317LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)v20);
LABEL_28:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v24);
          goto LABEL_29;
        }
        *a3 = mi.rcMonitor;
        **(_BYTE **)&v25.left = mi.dwFlags == 1;
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v24 + 112LL))(*(_QWORD *)v24, &v28);
        v12 = v18;
        if ( v18 >= 0 )
        {
          v21 = v28.right - v28.left;
          v22 = v28.bottom - v28.top;
          v25 = v28;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            if ( *(_DWORD *)a6 == 1 )
            {
              if ( v28.top < mi.rcMonitor.top )
              {
                v25.top = mi.rcMonitor.top;
                v25.bottom = v22 + mi.rcMonitor.top;
                rcWork.top = v22 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a6 == 2 )
            {
              if ( v28.right > mi.rcMonitor.right )
              {
                v25.right = mi.rcMonitor.right;
                v25.left = mi.rcMonitor.right - v21;
                rcWork.right = mi.rcMonitor.right - v21;
              }
            }
            else if ( *(_DWORD *)a6 == 3 && v28.bottom > mi.rcMonitor.bottom )
            {
              v25.bottom = mi.rcMonitor.bottom;
              v25.top = mi.rcMonitor.bottom - v22;
              rcWork.bottom = mi.rcMonitor.bottom - v22;
            }
          }
          else if ( v28.left < mi.rcMonitor.left )
          {
            v25.left = mi.rcMonitor.left;
            v25.right = v21 + mi.rcMonitor.left;
            rcWork.left = v21 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *a5 = v25;
          v12 = 0;
          goto LABEL_28;
        }
        v19 = 2324LL;
      }
      else
      {
        v19 = 2314LL;
      }
    }
    else
    {
      v19 = 2313LL;
    }
    v20 = (unsigned int)v18;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x905,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
