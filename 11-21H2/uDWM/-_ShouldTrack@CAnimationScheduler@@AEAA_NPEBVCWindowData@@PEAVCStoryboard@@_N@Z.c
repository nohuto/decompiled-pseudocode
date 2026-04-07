/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800A7F2C
 * Callers:
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001ADD0 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18001D558 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x1800D7434 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  char v4; // bl
  HWND *v8; // rdi

  v4 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( *((_DWORD *)a3 + 6) != 4 && CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return 1;
  }
  else
  {
    v8 = a2;
    if ( a2 )
    {
      while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 112LL))(
                a3,
                *((unsigned int *)v8 + 168)) == -1 )
      {
        v8 = (HWND *)v8[75];
        if ( !v8 )
          return v4;
      }
      if ( a4
        || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 120LL))(
              a3,
              *((unsigned int *)v8 + 168)) & 2) == 0 )
      {
        if ( v8 != a2 )
          return ((_DWORD)v8[84] & 0x10000000) != 0;
        return 1;
      }
    }
  }
  return v4;
}
