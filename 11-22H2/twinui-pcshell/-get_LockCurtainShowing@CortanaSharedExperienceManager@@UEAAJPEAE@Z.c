/*
 * XREFs of ?get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1804314D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18042B034 (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::get_LockCurtainShowing(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  CortanaSharedExperienceManager::GetDesktopView((__int64)this, &v5);
  if ( v5 )
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v5 + 32LL))(v5, a2);
  else
    v3 = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return v3;
}
