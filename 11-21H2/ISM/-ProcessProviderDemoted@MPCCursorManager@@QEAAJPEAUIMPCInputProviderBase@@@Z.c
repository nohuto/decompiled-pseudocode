/*
 * XREFs of ?ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800A52AC
 * Callers:
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18009D250 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800A5560 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

__int64 __fastcall MPCCursorManager::ProcessProviderDemoted(MPCCursorManager *this, struct IMPCInputProviderBase *a2)
{
  if ( *((_BYTE *)this + 64) )
  {
    if ( *((_BYTE *)this + 56) && *((_BYTE *)this + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility(this, 0, 1, 0);
        *((_DWORD *)this + 8) = 0;
        *(_OWORD *)this = 0LL;
        *((_OWORD *)this + 1) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 8) = 0;
      *(_OWORD *)this = 0LL;
      *((_OWORD *)this + 1) = 0LL;
      MPCCursorManager::UpdateCursorVisibility(this, 1, 1, 0);
    }
  }
  return 0LL;
}
