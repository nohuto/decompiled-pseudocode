/*
 * XREFs of ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180564F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565550 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805655D8 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565690 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SwitchItemCollection::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        updated = SwitchItemCollection::_RemoveViewItem((SwitchItemCollection *)(a1 - 160), a2);
        if ( updated < 0 )
        {
          v5 = 84LL;
          goto LABEL_15;
        }
        break;
      case 10:
      case 11:
        updated = SwitchItemCollection::_UpdateShowInSwitchers((SwitchItemCollection *)(a1 - 160), a2, a3 == 10);
        if ( updated < 0 )
        {
          v5 = 88LL;
          goto LABEL_15;
        }
        break;
      case 12:
        updated = SwitchItemCollection::_UpdateThumbnailWindow((SwitchItemCollection *)(a1 - 160), a2);
        if ( updated < 0 )
        {
          v5 = 91LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v5,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
            (const char *)(unsigned int)updated);
        }
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    updated = SwitchItemCollection::_AddViewItem(
                (SwitchItemCollection *)(a1 - 160),
                (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2);
    if ( updated < 0 )
    {
      v5 = 81LL;
      goto LABEL_15;
    }
  }
  return (unsigned int)updated;
}
