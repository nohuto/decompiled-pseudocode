/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x18030DBC0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___ @ 0x18030D248 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(_DWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v4) = a2;
  *(_QWORD *)&v4 = a1;
  v2 = v4;
  a1[140] = a2;
  v4 = v2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___(a1, &v4);
}
