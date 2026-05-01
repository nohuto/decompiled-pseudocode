/*
 * XREFs of ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x180599E14
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180598838 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned int i; // esi
  __int64 v5; // rax
  int (__fastcall *v6)(__int64 *, _QWORD, GUID *, __int64 *); // rbx
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  v3 = (v2 >> 17) & 2;
  if ( (v2 & 0x800000) != 0 )
    v3 |= 4u;
  if ( (v2 & 0x80000) != 0 )
    v3 |= 0x20u;
  if ( !v3 && (*(int (__fastcall **)(__int64 *, unsigned int *))(*a1 + 24))(a1, &v8) >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      if ( v3 )
        break;
      v5 = *a1;
      v9 = 0LL;
      v6 = *(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v5 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
      if ( v6(a1, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v9) >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9) == 6;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
    }
  }
  return v3;
}
