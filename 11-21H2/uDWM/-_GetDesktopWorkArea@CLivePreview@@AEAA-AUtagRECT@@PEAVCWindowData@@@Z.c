/*
 * XREFs of ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800C412C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C1B08 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C400C (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CLivePreview::_GetDesktopWorkArea(
        CLivePreview *this,
        struct tagRECT *__return_ptr retstr,
        HWND *a3)
{
  HMONITOR v5; // r10
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rax

  *retstr = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 70) )
    {
      v5 = MonitorFromWindow(a3[5], 0);
      if ( v5 )
      {
        v6 = *((_QWORD *)this + 70);
        v7 = 0;
        if ( *(_DWORD *)(v6 + 40) )
        {
          v8 = 0LL;
          do
          {
            v9 = *(_QWORD *)(v6 + 16);
            if ( v8 + v9 && v5 == *(HMONITOR *)(v8 + v9 + 16) )
              *retstr = *(struct tagRECT *)(v8 + v9);
            ++v7;
            v8 += 24LL;
          }
          while ( v7 < *(_DWORD *)(v6 + 40) );
        }
      }
    }
  }
  return retstr;
}
