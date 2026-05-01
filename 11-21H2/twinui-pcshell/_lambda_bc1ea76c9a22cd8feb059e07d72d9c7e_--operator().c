/*
 * XREFs of _lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_::operator() @ 0x180196A58
 * Callers:
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180168660 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6B84 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(v2 + 712) )
  {
    if ( *(_QWORD *)(v2 + 736) )
    {
      v7 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 712),
             &v7);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
        return v4;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)(*a1 + 736));
      *(_QWORD *)(*a1 + 736) = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
      v2 = *a1;
    }
    if ( *(_QWORD *)(v2 + 744) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 712) + 88LL))(*(_QWORD *)(v2 + 712));
      v2 = *a1;
      *(_QWORD *)(*a1 + 744) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 752) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 712) + 104LL))(*(_QWORD *)(v2 + 712));
      *(_QWORD *)(*a1 + 752) = 0LL;
    }
  }
  return 0LL;
}
