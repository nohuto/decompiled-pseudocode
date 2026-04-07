/*
 * XREFs of ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800547C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z0@Z @ 0x1800D5620 (-_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptur.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowTransformUpdated(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  int updated; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v3 = *((_QWORD *)a2 + 82);
  v4 = *((_QWORD *)a2 + 5);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 40);
  updated = CProjectionBorderManager::_UpdateCaptureControllerProperty(
              this,
              CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow,
              v4);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x379,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return v6;
}
