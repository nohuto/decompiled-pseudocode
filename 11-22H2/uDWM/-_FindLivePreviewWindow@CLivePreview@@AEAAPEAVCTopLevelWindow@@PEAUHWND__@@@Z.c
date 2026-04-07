/*
 * XREFs of ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C8934
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C763C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C8FA4 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow *__fastcall CLivePreview::_FindLivePreviewWindow(CLivePreview *this, HWND a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r10

  v2 = 0LL;
  v3 = (unsigned int)(*((_DWORD *)this + 92) - 1);
  if ( (int)v3 >= 0 )
  {
    v4 = *((_QWORD *)this + 43);
    while ( *(HWND *)(v4 + 48 * v3 + 24) != a2 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (int)v3 < 0 )
        return (struct CTopLevelWindow *)v2;
    }
    return *(struct CTopLevelWindow **)(v4 + 48 * v3);
  }
  return (struct CTopLevelWindow *)v2;
}
