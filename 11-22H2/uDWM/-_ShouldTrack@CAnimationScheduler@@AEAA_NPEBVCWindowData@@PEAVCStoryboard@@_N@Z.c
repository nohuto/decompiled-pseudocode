/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800035A4
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x1800376CC (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x1800527CC (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180003624 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  int v4; // ecx
  char v5; // bl
  int v9; // ecx
  int v10; // ecx
  HWND *v12; // rdi

  v4 = *((_DWORD *)a3 + 6);
  v5 = 0;
  if ( v4 )
  {
    v9 = v4 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        if ( v10 == 1 )
          return v5;
      }
    }
    if ( !CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return v5;
    return 1;
  }
  v12 = a2;
  if ( a2 )
  {
    while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 112LL))(
              a3,
              *((unsigned int *)v12 + 170)) == -1 )
    {
      v12 = (HWND *)v12[75];
      if ( !v12 )
        return v5;
    }
    if ( a4
      || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 120LL))(
            a3,
            *((unsigned int *)v12 + 170)) & 2) == 0 )
    {
      if ( v12 != a2 )
        return ((_DWORD)v12[85] & 0x10000000) != 0;
      return 1;
    }
  }
  return v5;
}
