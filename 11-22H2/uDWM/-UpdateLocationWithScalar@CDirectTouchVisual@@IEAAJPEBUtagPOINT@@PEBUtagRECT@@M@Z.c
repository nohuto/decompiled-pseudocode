/*
 * XREFs of ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74
 * Callers:
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180046414 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18006C9E0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B1AB4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B6EC8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180046F70 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004734C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180047388 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateLocationWithScalar(
        CDirectTouchVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        float a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // eax
  int v12; // ebx

  *((float *)this + 89) = a4;
  v7 = a3->right - a3->left;
  if ( v7 <= a3->bottom - a3->top )
    v7 = a3->bottom - a3->top;
  v8 = (_DWORD *)((char *)this + 328);
  v9 = (int)(float)((float)CContactManager::GetBoundedContactWidth(this, v7, *a2) * a4);
  *((_DWORD *)this + 82) = v9;
  if ( v9 < 1 )
  {
    *v8 = 1;
    v9 = 1;
  }
  v10 = (CVisual *)*((_QWORD *)this + 52);
  *((_DWORD *)this + 83) = v9;
  CVisual::SetSize(v10, (const struct tagSIZE *)this + 41);
  *((struct tagPOINT *)this + 38) = *a2;
  v11 = *v8 / 2;
  *(struct tagRECT *)((char *)this + 312) = *a3;
  v12 = a2->y - *((_DWORD *)this + 83) / 2;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 52), a2->x - v11);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 52), v12);
  return 0LL;
}
