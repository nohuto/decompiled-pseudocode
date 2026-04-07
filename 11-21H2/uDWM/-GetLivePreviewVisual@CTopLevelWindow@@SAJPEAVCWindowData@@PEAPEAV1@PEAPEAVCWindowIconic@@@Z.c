/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E4E5C
 * Callers:
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800B35A8 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C46B0 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18004A6C4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180103F44 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  CTopLevelWindow *v7; // r8
  __int64 v8; // rax
  int WindowRestoreRect; // eax
  bool v10; // zf
  __int64 v11; // rdi
  signed int LastError; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 55);
  if ( (*((_BYTE *)a1 + 665) & 1) != 0 )
    goto LABEL_17;
  v8 = *((_QWORD *)a1 + 60);
  if ( !v8 )
  {
    if ( v7 && (*((_DWORD *)a1 + 29) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, (__int64)v7, a4, a2);
      v4 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v15 = 5610;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, v15);
        return v4;
      }
      return v4;
    }
LABEL_17:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v15 = 5589;
      goto LABEL_19;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v13 = *((_QWORD *)*a3 + 11);
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    return v4;
  }
  v10 = (*((_DWORD *)a1 + 29) & 0x20000000) == 0;
  v11 = *(_QWORD *)(v8 + 24);
  v16 = *(_OWORD *)(v11 + 660);
  rc = *(struct tagRECT *)(*(_QWORD *)(v8 + 32) + 48LL);
  if ( !v10 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v15 = 5600;
      goto LABEL_19;
    }
  }
  SetLastError(0);
  if ( OffsetRect(&rc, -(int)v16, -DWORD2(v16)) )
  {
    CVisual::SetOffset((struct tagPOINT *)v11, (const struct tagPOINT *)&rc);
    *a2 = (struct CTopLevelWindow *)v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x15E3u);
  }
  return v4;
}
