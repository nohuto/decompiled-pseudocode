/*
 * XREFs of ?ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z @ 0x180506978
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TabletModePositioner::ShouldOverrideShowWindowNoOp(TabletModePositioner *this, int a2, HWND a3)
{
  HWND v3; // rax

  v3 = (HWND)*((_QWORD *)this + 60);
  if ( !v3 || a3 != v3 || a2 != *((_DWORD *)this + 122) )
    return IsWindowVisible(a3);
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  return 0;
}
