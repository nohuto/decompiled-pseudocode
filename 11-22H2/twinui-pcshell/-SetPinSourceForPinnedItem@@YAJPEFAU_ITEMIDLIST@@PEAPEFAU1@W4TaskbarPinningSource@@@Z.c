/*
 * XREFs of ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075E4C0 (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18075F9C0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x1803CC93C (ILExpungeRemovedHiddenIDs.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180756E18 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@QEAA_NXZ @ 0x18075EE9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceh_ea_18075EE9C.c)
 */

__int64 __fastcall SetPinSourceForPinnedItem(ITEMIDLIST *a1, struct _ITEMIDLIST **a2, int a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  const WCHAR *v14; // rbx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  const struct _HIDDENITEMID *v20; // rax

  v3 = 0;
  *a2 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::GetImpl'::`2'::impl) )
  {
    if ( a3 )
    {
      v15 = a3 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 != 1 )
                  return (unsigned int)-2147024809;
                goto LABEL_21;
              }
LABEL_22:
              v14 = L"SCOOBEPinned";
              goto LABEL_28;
            }
LABEL_23:
            v14 = L"OOBEPinned";
            goto LABEL_28;
          }
LABEL_24:
          v14 = L"EnterprisePinned";
          goto LABEL_28;
        }
LABEL_25:
        v14 = L"OEMPinned";
        goto LABEL_28;
      }
LABEL_26:
      v14 = L"SystemPinned";
      goto LABEL_28;
    }
LABEL_27:
    v14 = L"UserPinned";
    goto LABEL_28;
  }
  if ( !a3 )
    goto LABEL_27;
  v7 = a3 - 1;
  if ( !v7 )
    goto LABEL_26;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_25;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_24;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_23;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_21:
    v14 = L"CloudPinned";
    goto LABEL_28;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return (unsigned int)-2147024809;
    v14 = L"RestorePinned";
  }
  else
  {
    v14 = L"PlaceholderPinned";
  }
LABEL_28:
  v20 = ILFindHiddenIDOn(a1, -1091633122);
  if ( v20 )
  {
    *((_DWORD *)v20 + 1) = -1091633152;
    ILExpungeRemovedHiddenIDs(a1);
  }
  *a2 = ILAppendHiddenStringW(a1, -1091633122, v14);
  return v3;
}
