/*
 * XREFs of ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x1804E0870
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_FindPlaceModeVisual(
        CAppTransitionManager *this,
        struct ITemporaryAppVisual **a2)
{
  __int64 v3; // rcx
  int v4; // esi
  unsigned int i; // ebp
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  struct ITemporaryAppVisual **v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((_QWORD *)this + 26);
  v4 = -2147467259;
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(__int64, struct ITemporaryAppVisual ***))(*(_QWORD *)v3 + 24LL))(v3, &v10) >= 0 )
    {
      for ( i = 0; i < (unsigned int)v10; ++i )
      {
        if ( v4 >= 0 )
          break;
        v6 = *((_QWORD *)this + 26);
        v9 = 0LL;
        v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
        if ( v7(v6, i, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v9) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == 8 )
        {
          v4 = 0;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
      }
    }
  }
  return (unsigned int)v4;
}
