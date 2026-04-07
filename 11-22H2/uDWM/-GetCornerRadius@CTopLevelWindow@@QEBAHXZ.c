/*
 * XREFs of ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x1800E5D58
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9B58 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180051944 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCornerRadius(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  struct CTopLevelWindow::WindowFrame *v3; // rax

  v1 = *((_QWORD *)this + 94);
  v2 = 0;
  if ( *(int *)(v1 + 116) >= 0 )
  {
    v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
           *((unsigned int *)this + 156),
           1,
           (*(_BYTE *)(v1 + 675) & 0x10) != 0);
    if ( v3 )
      return *((unsigned int *)v3 + 466);
  }
  return v2;
}
