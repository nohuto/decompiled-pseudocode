/*
 * XREFs of ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC82C (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC8E4 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1806A5620 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     _DSA_MaybeShrink @ 0x18074A604 (_DSA_MaybeShrink.c)
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     DSA_Preallocate @ 0x18074A930 (DSA_Preallocate.c)
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x180753AEC (-Destruct@PINENTRY@@QEAAXXZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x180755B34 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180756DB4 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18075B358 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18075CDB0 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18075CE50 (_CacheAppIDInIDList.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18075D484 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18075DE24 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18075E77C (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 */

__int64 __fastcall CPinList::ReplacePidl(
        HDSA *a1,
        struct CPinnedList *a2,
        const struct _ITEMIDLIST *a3,
        const struct _ITEMIDLIST *a4,
        char a5,
        struct _ITEMIDLIST **a6)
{
  struct _ITEMIDLIST **v6; // r14
  int v11; // ebx
  const ITEMIDLIST **PidlOrAppID; // rax
  CPinList *v13; // rcx
  const ITEMIDLIST **v14; // rdi
  CPinList *v15; // rcx
  int Tombstone; // eax
  HDSA v17; // rbx
  int v18; // ecx
  __int128 v19; // xmm1
  int v20; // eax
  struct _DSA *v21; // rsi
  int v22; // edi
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  PVOID ItemPtr; // rbx
  PVOID v27; // rax
  __int64 v28; // r8
  int v29; // eax
  HDSA v30; // rbx
  CPinList *v31; // rcx
  const struct _ITEMIDLIST *ID; // rax
  const struct _ITEMIDLIST *HiddenID; // rbx
  unsigned __int16 *v34; // r10
  const struct _ITEMIDLIST *v35; // r14
  struct _ITEMIDLIST *v36; // rsi
  int v37; // edx
  ITEMIDLIST *v38; // rsi
  int i[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR pszPath[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v6 = a6;
  if ( a6 )
    *a6 = 0LL;
  v11 = -2147023728;
  PidlOrAppID = CPinList::FindPidlOrAppID(a1, a3, 1, i);
  v14 = PidlOrAppID;
  if ( PidlOrAppID )
  {
    if ( !a6 || (v6 = 0LL, v11 = SHILClone(*PidlOrAppID, a6), v11 >= 0) )
    {
      pszPath[0] = (unsigned __int16)v6;
      if ( !a4 )
      {
        CPinList::_GetBackupShortcutToDelete(v13, a2, *v14, pszPath);
        if ( (a5 & 1) == 0 )
        {
LABEL_10:
          PINENTRY::Destruct((PINENTRY *)v14);
          v17 = *a1;
          if ( i[0] >= 0 )
          {
            v18 = *(_DWORD *)v17;
            if ( i[0] < *(_DWORD *)v17 )
            {
              if ( i[0] < v18 - 1 )
                memmove_0(
                  (void *)(*((_QWORD *)v17 + 1) + (unsigned int)(i[0] * *((_DWORD *)v17 + 5))),
                  (const void *)(*((_QWORD *)v17 + 1) + (unsigned int)(*((_DWORD *)v17 + 5) * (i[0] + 1))),
                  (unsigned int)(*((_DWORD *)v17 + 5) * (v18 - i[0] - 1)));
              --*(_DWORD *)v17;
              DSA_MaybeShrink((__int64)v17);
            }
          }
          goto LABEL_42;
        }
        Tombstone = CPinList::_CreateTombstone(v15, a2, pszPath, (struct PINENTRY *)v14);
        if ( Tombstone < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAA9,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)Tombstone);
          goto LABEL_10;
        }
LABEL_42:
        v11 = CPinList::Save((CPinList *)a1, a2);
        goto LABEL_60;
      }
      if ( (unsigned __int64)a4 < 0x10000 )
      {
        v19 = *((_OWORD *)v14 + 1);
        Src[0] = *(_OWORD *)v14;
        Src[1] = v19;
        v20 = CPinList::_PhysicalPositionFromLogicalPosition((CPinList *)a1, (int)a4 - 1);
        v21 = *a1;
        v22 = v20;
        if ( *a1 )
          v23 = *(_DWORD *)v21;
        else
          v23 = (int)v6;
        if ( v22 > v23 )
        {
          v11 = -2147483637;
          goto LABEL_60;
        }
        v24 = i[0];
        if ( i[0] >= v22 )
        {
          if ( i[0] <= v22 )
          {
LABEL_33:
            LOWORD(v6) = 0;
            if ( (int)GetPinSourceForPinnedItem(a3, (enum TaskbarPinningSource *)i) >= 0 && i[0] != -1 )
            {
              v29 = SetPinSourceForPinnedItem(*(_QWORD *)&Src[0], Src, (unsigned int)i[0]);
              if ( v29 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xAE0,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v29);
            }
            v30 = *a1;
            if ( v22 < 0 )
              goto LABEL_42;
            if ( v22 >= *(_DWORD *)v30 )
            {
              if ( !(unsigned int)DSA_Preallocate(*a1, v22 - *(_DWORD *)v30 + 1) )
                goto LABEL_42;
              memset_0(
                (void *)(*((_QWORD *)v30 + 1) + (unsigned int)(*(_DWORD *)v30 * *((_DWORD *)v30 + 5))),
                0,
                (unsigned int)(*((_DWORD *)v30 + 5) * (v22 - *(_DWORD *)v30)));
              *(_DWORD *)v30 = v22 + 1;
            }
            memcpy_0(
              (void *)(*((_QWORD *)v30 + 1) + (unsigned int)(v22 * *((_DWORD *)v30 + 5))),
              Src,
              *((unsigned int *)v30 + 5));
            goto LABEL_42;
          }
          ItemPtr = DSA_GetItemPtr(*a1, v22);
          v27 = DSA_GetItemPtr(v21, v22 + 1);
          v28 = v24 - v22;
        }
        else
        {
          if ( v21 )
            v25 = *(_DWORD *)v21;
          else
            v25 = 0;
          if ( v22 >= v25 )
          {
            if ( v21 )
              v22 = *(_DWORD *)v21;
            else
              v22 = 0;
          }
          --v22;
          ItemPtr = DSA_GetItemPtr(*a1, i[0] + 1);
          v27 = DSA_GetItemPtr(v21, v24);
          v28 = v22 - v24;
        }
        memmove(v27, ItemPtr, 32 * v28);
        goto LABEL_33;
      }
      if ( !ILIsEqual(*v14, a4) )
        CPinList::_GetBackupShortcutToDelete(v31, a2, *v14, pszPath);
      v11 = SHILClone(a4, (struct _ITEMIDLIST **)i);
      if ( v11 < 0 )
        goto LABEL_60;
      v11 = CacheAppIDInIDList(*(struct _ITEMIDLIST **)i);
      if ( v11 < 0 )
      {
        v38 = *(ITEMIDLIST **)i;
        goto LABEL_59;
      }
      if ( ILFindHiddenIDOn(*v14, -1091633108) )
      {
        ID = ILFindLastID(*v14);
        HiddenID = (const struct _ITEMIDLIST *)ILFindFirstHiddenID(ID);
        v35 = (const struct _ITEMIDLIST *)((char *)v34 + *v34);
        if ( HiddenID )
        {
          v36 = *(struct _ITEMIDLIST **)i;
          do
          {
            v37 = *(_DWORD *)((char *)&HiddenID[1].mkid.cb + 1);
            if ( v37 != -1091633108 && !ILFindHiddenIDOn(v36, v37) )
              v36 = ILAppendHiddenID(v36, (const struct _HIDDENITEMID *)HiddenID);
            HiddenID = ILNextHidden((const struct _HIDDENITEMID *)HiddenID, v35);
          }
          while ( HiddenID );
          v6 = 0LL;
          goto LABEL_57;
        }
        v6 = 0LL;
      }
      v36 = *(struct _ITEMIDLIST **)i;
LABEL_57:
      ILFree((LPITEMIDLIST)*v14);
      *v14 = v36;
      v38 = (ITEMIDLIST *)v6;
      PINENTRY::UpdateShellLink((PINENTRY *)v14);
      v11 = CPinList::Save((CPinList *)a1, a2);
LABEL_59:
      ILFree(v38);
LABEL_60:
      if ( (_WORD)v6 != pszPath[0] )
      {
        SHRemoveLocalizedName(pszPath);
        DeleteFileW(pszPath);
      }
    }
  }
  return (unsigned int)v11;
}
