/*
 * XREFs of McTemplateU0p_EtwEventWriteTransfer @ 0x180003C20
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180003A2C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180003B4C (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18001D100 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A5558 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DC020 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x1800E5FEC (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180106298 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0p_EtwEventWriteTransfer(__int64 a1, int a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           2,
           (__int64)v4);
}
