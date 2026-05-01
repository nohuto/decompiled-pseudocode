/*
 * XREFs of ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18045509C
 * Callers:
 *     _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x1804521EC (_lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_--operator().c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1804546E0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize(
        CVirtualTouchpadExperienceManager *this)
{
  char *v2; // r15
  const char *v3; // r9
  HMONITOR v4; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  int v17[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  int v19[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = (char *)this + 320;
  v4 = MonitorFromPoint(*(POINT *)((char *)this + 320), 2u);
  *((_QWORD *)this + 45) = v4;
  if ( !v4 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1D8,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  v18 = 0LL;
  v6 = *((_QWORD *)this + 41);
  v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v8 = v7(v6, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v18);
  LastError = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)v17 = 0LL;
    v10 = v18;
    v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v18 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
    v12 = v11(v10, v4, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v17);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v17 + 168LL))(*(_QWORD *)v17, v20);
      LastError = v12;
      if ( v12 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 43) + 72LL))(
                *((_QWORD *)this + 43),
                (char *)this + 308);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1E0,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v14);
        v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 43) + 80LL))(
                *((_QWORD *)this + 43),
                (char *)this + 308);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1E1,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
        *(_OWORD *)v19 = 0LL;
        if ( !(*((unsigned int (__fastcall **)(char *, char *, __int64, _BYTE *, int *))this + 99))(
                v2,
                (char *)this + 300,
                65620LL,
                v20,
                v19) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1E9,
                        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                        v16);
LABEL_19:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
          goto LABEL_20;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 43) + 64LL))(*((_QWORD *)this + 43), v19);
        LastError = v12;
        if ( v12 >= 0 )
        {
          LastError = 0;
          goto LABEL_19;
        }
        v13 = 490LL;
      }
      else
      {
        v13 = 478LL;
      }
    }
    else
    {
      v13 = 476LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DA,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_20:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  return LastError;
}
