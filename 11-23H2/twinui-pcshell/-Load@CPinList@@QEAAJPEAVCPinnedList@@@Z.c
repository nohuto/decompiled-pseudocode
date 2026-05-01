/*
 * XREFs of ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18017BB30 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180755DB0 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180755E60 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1807587A0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18075AF70 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DSA_Create @ 0x18074A710 (DSA_Create.c)
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     ??$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z @ 0x180750F28 (--$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180751F60 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180753B1C (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 */

__int64 __fastcall CPinList::Load(IStream **this, struct CPinnedList *a2)
{
  HDSA v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  int i; // ebx
  struct _DSA *v8; // rcx
  int v9; // eax
  _DWORD *ItemPtr; // rax
  IStream *v11; // rcx
  _DWORD *v12; // rsi
  int j; // ebx
  struct _DSA *v14; // rcx
  int v15; // eax
  PVOID v16; // rax
  LPITEMIDLIST pidl; // [rsp+30h] [rbp-20h] BYREF
  struct IEnumFullIDList *v19; // [rsp+38h] [rbp-18h] BYREF

  v4 = DSA_Create(32, 4);
  *this = v4;
  if ( v4 )
  {
    v5 = CPinnedList::EnumAllObjects(a2, &v19);
    if ( v5 >= 0 )
    {
      while ( !((unsigned int (__fastcall *)(struct IEnumFullIDList *, __int64, LPITEMIDLIST *))v19->lpVtbl->Next)(
                 v19,
                 1LL,
                 &pidl) )
      {
        if ( (int)CPinList::AppendPidl((CPinList *)this, a2, pidl) < 0 )
        {
          ILFree(pidl);
          v5 = -2147024882;
          break;
        }
        ILFree(pidl);
      }
      ((void (__fastcall *)(struct IEnumFullIDList *))v19->lpVtbl->Release)(v19);
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct CPinnedList *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, 0LL);
        this[1] = (IStream *)v6;
        if ( v6 )
        {
          for ( i = 0; ; ++i )
          {
            v8 = *this;
            v9 = *this ? *(_DWORD *)v8 : 0;
            if ( i >= v9 )
              break;
            ItemPtr = DSA_GetItemPtr(v8, i);
            v11 = this[1];
            pidl = 0LL;
            v12 = ItemPtr;
            if ( IStream_Read(v11, &pidl, 4u) < 0
              || (*(int (__fastcall **)(IStream *, _QWORD, __int64, _DWORD *))(*(_QWORD *)this[1] + 40LL))(
                   this[1],
                   0LL,
                   1LL,
                   v12 + 4) < 0
              || (*(int (__fastcall **)(IStream *, LPITEMIDLIST, __int64))(*(_QWORD *)this[1] + 40LL))(
                   this[1],
                   pidl,
                   1LL) < 0 )
            {
              goto LABEL_18;
            }
            v12[6] = (_DWORD)pidl;
          }
        }
        else
        {
LABEL_18:
          for ( j = 0; ; ++j )
          {
            v14 = *this;
            v15 = *this ? *(_DWORD *)v14 : 0;
            if ( j >= v15 )
              break;
            v16 = DSA_GetItemPtr(v14, j);
            *((_DWORD *)v16 + 6) = 0;
            SafeRelease<IShellLinkW>((__int64 *)v16 + 1);
          }
        }
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
