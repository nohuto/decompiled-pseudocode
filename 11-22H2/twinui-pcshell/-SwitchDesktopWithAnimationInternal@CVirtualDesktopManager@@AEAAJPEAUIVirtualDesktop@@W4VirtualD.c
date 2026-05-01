/*
 * XREFs of ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180606A5C
 * Callers:
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180215A60 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?DetermineRelativeDirectionInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x180601190 (-DetermineRelativeDirectionInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 *     ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806014B8 (-FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesk.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopWithAnimationInternal(
        __int64 a1,
        struct IVirtualDesktop *a2,
        unsigned int a3)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v8)(_QWORD, GUID *, __int64 *); // rax
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  int CurrentDesktopInternal; // eax
  int v13; // eax
  BOOL v14; // r14d
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  struct IUnknown *v20; // [rsp+A8h] [rbp+48h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 32LL))(*(_QWORD *)(a1 + 104)) )
    return 2147942487LL;
  v16 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 232);
  v8 = *v7;
  v16 = 0LL;
  v9 = (*v8)(v7, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v16);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                 (CVirtualDesktopManager *)(a1 + 8),
                                 (struct IVirtualDesktop **)&v20);
      v10 = CurrentDesktopInternal;
      if ( CurrentDesktopInternal >= 0 )
      {
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v20) )
        {
          v13 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(
                  a1,
                  (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
                  a3);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1A9,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v13);
          v10 = 0;
        }
        else
        {
          CVirtualDesktopManager::DetermineRelativeDirectionInternal(
            (CVirtualDesktopManager *)(a1 + 8),
            (struct IVirtualDesktop *)v20,
            a2,
            &v19);
          v14 = v19 != 3;
          v17 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
          v10 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 104)
                                                                                                + 72LL))(
                  *(_QWORD *)(a1 + 104),
                  v20,
                  v19,
                  &GUID_3f07f4be_b107_441a_af0f_39d82529072c,
                  &v17);
          if ( v10 >= 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
            v15 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, BOOL, _QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)v16 + 40LL))(
                    v16,
                    a2,
                    v14,
                    *(_QWORD *)(a1 + 248),
                    *(_QWORD *)(a1 + 240),
                    *(_QWORD *)(a1 + 112),
                    *(_QWORD *)(a1 + 168),
                    a3);
            v10 = v15;
            if ( v15 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1B4,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                (const char *)(unsigned int)v15);
          }
          Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v17);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A5,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)CurrentDesktopInternal);
      }
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v20);
      goto LABEL_19;
    }
    v11 = 419LL;
  }
  else
  {
    v11 = 418LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  return (unsigned int)v10;
}
