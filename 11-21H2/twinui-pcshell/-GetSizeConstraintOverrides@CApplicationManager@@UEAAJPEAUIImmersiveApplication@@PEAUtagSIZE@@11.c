/*
 * XREFs of ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x1800541E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180054954 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetSizeConstraintOverrides(
        CApplicationManager *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  struct tagSIZE *v10; // r15
  struct tagSIZE *v11; // r12
  RTL_SRWLOCK *v12; // rbx
  int First; // edi
  int v14; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0LL;
  v10 = a5;
  *a5 = 0LL;
  v11 = a6;
  *a6 = 0LL;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  a6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (char *)this - 216,
            &a6,
            &a5,
            0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a6);
  if ( First < 0 )
  {
    v16 = (unsigned int)First;
    v17 = 2315LL;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 576LL))(
            a5,
            a3,
            v10);
    First = v14;
    if ( v14 < 0 )
    {
      v17 = 2316LL;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 584LL))(
              a5,
              a4,
              v11);
      First = v14;
      if ( v14 >= 0 )
      {
        First = 0;
        goto LABEL_5;
      }
      v17 = 2317LL;
    }
    v16 = (unsigned int)v14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v16,
    v18);
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  if ( v12 )
    ReleaseSRWLockShared(v12);
  return (unsigned int)First;
}
