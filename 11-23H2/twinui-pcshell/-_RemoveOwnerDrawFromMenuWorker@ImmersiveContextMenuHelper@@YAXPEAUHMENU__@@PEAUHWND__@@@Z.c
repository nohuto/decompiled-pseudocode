/*
 * XREFs of ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074DE60
 * Callers:
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074D8C8 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074DE60 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1802EC3E8 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z @ 0x18074D868 (-RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074DE60 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

void __fastcall ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker(
        ImmersiveContextMenuHelper *this,
        HMENU a2,
        HWND a3)
{
  UINT v3; // esi
  signed int Error; // ebx
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v8; // rdi
  HWND v9; // r8
  struct tagMENUITEMINFOW mii; // [rsp+28h] [rbp-59h] BYREF
  MENUITEMINFOW v11; // [rsp+78h] [rbp-9h] BYREF

  v3 = 0;
  do
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 422;
    if ( GetMenuItemInfoW((HMENU)this, v3, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_13;
    }
    memset_0(&v11, 0, sizeof(v11));
    v11.cbSize = 80;
    v11.fMask = 384;
    v11.fType = mii.fType & 0xFFFFFEFF;
    if ( mii.dwItemData )
    {
      ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                                 (HWND)a2,
                                 (HWND)mii.dwItemData,
                                 mii.wID);
      v8 = ContextMenuDataForItem;
      if ( ContextMenuDataForItem )
      {
        if ( ContextMenuDataForItem == (struct ContextMenuRenderingData *)mii.dwItemData )
        {
          v11.dwItemData = 0LL;
          v11.fMask |= 0x20u;
        }
        ImmersiveContextMenuHelper::RemoveContextMenuDataForItem((HWND)a2, (HWND)mii.dwItemData, mii.wID);
        if ( *((_QWORD *)v8 + 4) )
        {
          v11.hbmpItem = (HBITMAP)*((_QWORD *)v8 + 4);
          *((_QWORD *)v8 + 4) = 0LL;
        }
      }
    }
    SetMenuItemInfoW((HMENU)this, v3, 1, &v11);
    if ( mii.hSubMenu )
      ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker((ImmersiveContextMenuHelper *)mii.hSubMenu, a2, v9);
LABEL_13:
    ++v3;
  }
  while ( Error >= 0 );
}
