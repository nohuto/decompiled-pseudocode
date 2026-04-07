/*
 * XREFs of ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800128E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D018C (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowRestored(CProjectionBorderManager *this, struct CWindowData *a2)
{
  __int64 v3; // rax
  HWND v4; // r9
  int updated; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v3 = *((_QWORD *)a2 + 82);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  if ( v3 )
    v4 = *(HWND *)(v3 + 40);
  updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(this, v4, 1);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x347,
    (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated);
  return v6;
}
