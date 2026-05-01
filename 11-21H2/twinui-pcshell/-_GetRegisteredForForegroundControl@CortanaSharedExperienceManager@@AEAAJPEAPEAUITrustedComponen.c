/*
 * XREFs of ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x18035D81C
 * Callers:
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035CEA4 (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18035D9D4 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_GetRegisteredForForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl **a2)
{
  __int64 *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 416);
  if ( !*((_QWORD *)this + 52) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    v5 = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
           this,
           &IID_IRequestTrustedComponentForegroundControlInitialization,
           &GUID_2a239388_fc85_4077_981e_9e4205cf9451,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = (unsigned int)v5;
      v8 = 818LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
      return v6;
    }
    v9 = (*(__int64 (__fastcall **)(void *, GUID *))(*(_QWORD *)v12 + 24LL))(v12, &CLSID_CortanaExperienceMgr);
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 819LL;
      goto LABEL_8;
    }
    if ( !*v4 )
    {
      v6 = -2147467261;
      v7 = 2147500035LL;
      v8 = 820LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  *a2 = (struct ITrustedComponentForegroundControl *)*v4;
  return 0LL;
}
