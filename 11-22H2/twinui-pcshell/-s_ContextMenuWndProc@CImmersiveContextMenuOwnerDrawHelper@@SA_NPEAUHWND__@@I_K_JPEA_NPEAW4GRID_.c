/*
 * XREFs of ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x1802EC2E0
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1802EC3E8 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     s_HitTestContextMenu @ 0x18074CB5C (s_HitTestContextMenu.c)
 *     s_OnMeasureItem @ 0x18074CC00 (s_OnMeasureItem.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074D5E0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
        HWND hWnd,
        int a2,
        ImmersiveContextMenuHelper *a3,
        __int64 a4,
        bool *a5)
{
  bool v5; // di
  int v9; // eax
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  UINT v11; // ecx
  __int64 result; // rax
  bool v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v13 = 0;
  switch ( a2 )
  {
    case 43:
      ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                                 hWnd,
                                 *(HWND *)(a4 + 56),
                                 *(unsigned int *)(a4 + 8),
                                 a4);
      v9 = s_OnDrawItemHelper(hWnd, a4, (__int64)ContextMenuDataForItem);
      goto LABEL_9;
    case 44:
      GetWindowLongW(hWnd, -20);
      v9 = s_OnMeasureItem(hWnd);
LABEL_9:
      v5 = v9 >= 0;
      break;
    case 279:
      ImmersiveContextMenuHelper::HandleMergedMenus(a3, (HMENU)hWnd, (HWND)a3);
      break;
    case 517:
      LODWORD(a5) = (unsigned __int16)a4;
      HIDWORD(a5) = WORD1(a4);
      s_HitTestContextMenu(hWnd, a5, &v13);
      v5 = v13;
      break;
  }
  v11 = dword_180992384;
  if ( !dword_180992384 )
  {
    v11 = RegisterWindowMessageW(L"TileContextMenuWindowMessage");
    dword_180992384 = v11;
  }
  result = v5;
  if ( a2 == v11 )
    return 1LL;
  return result;
}
