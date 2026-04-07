/*
 * XREFs of ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800E501C
 * Callers:
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006983A (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C5364 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetLivePreviewWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  CTopLevelWindow::GetActualWindowRect(this, retstr, 0, 1, 1);
  if ( a3 && (*((_BYTE *)this + 248) & 4) == 0 )
  {
    retstr->left -= *((_DWORD *)this + 169);
    retstr->top -= *((_DWORD *)this + 171);
    retstr->right += *((_DWORD *)this + 170);
    retstr->bottom += *((_DWORD *)this + 172);
  }
  return retstr;
}
