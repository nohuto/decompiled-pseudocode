/*
 * XREFs of ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1804E0750
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionManager::_ExcludeVisualType(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rax
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 24LL))(v4, &v9);
    v5 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 208);
        v10 = 0LL;
        v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
        if ( v7(v6, v5, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v10) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) == a2 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
        if ( ++v5 >= v9 )
          return;
      }
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
      DwmpTransitionWindow(v8, 43LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
    }
  }
}
