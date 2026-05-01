/*
 * XREFs of ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18017DD10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320184 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

__int64 __fastcall FullScreenPositioner::DisplaySettingsChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 220) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 96) + 96LL))(*(_QWORD *)(a1 + 96), a2, &v5) >= 0 )
    {
      if ( v5 )
      {
        v4 = *(_QWORD *)(a1 + 104);
        if ( v4 )
          FullScreenPositioner::PositionView(a1 - 136, v4, 0LL);
      }
    }
  }
  return 0LL;
}
