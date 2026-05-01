/*
 * XREFs of ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804A7B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802327C2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804A8754 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A87DC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804A8894 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SwitchItemCollection::OnApplicationViewChanged(
        __int64 a1,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        int a3)
{
  int updated; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    updated = SwitchItemCollection::_AddViewItem((SwitchItemCollection *)(a1 - 160), a2);
    if ( updated < 0 )
    {
      v4 = 91LL;
      goto LABEL_15;
    }
    return (unsigned int)updated;
  }
  if ( a3 == 1 )
  {
    updated = SwitchItemCollection::_RemoveViewItem((SwitchItemCollection *)(a1 - 160), (struct IApplicationView *)a2);
    if ( updated < 0 )
    {
      v4 = 94LL;
      goto LABEL_15;
    }
    return (unsigned int)updated;
  }
  if ( a3 <= 9 )
    return 0LL;
  if ( a3 > 11 )
  {
    if ( a3 == 12 )
    {
      updated = SwitchItemCollection::_UpdateThumbnailWindow(
                  (SwitchItemCollection *)(a1 - 160),
                  (struct IApplicationView *)a2);
      if ( updated < 0 )
      {
        v4 = 101LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v4,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      return (unsigned int)updated;
    }
    return 0LL;
  }
  updated = SwitchItemCollection::_UpdateShowInSwitchers(
              (SwitchItemCollection *)(a1 - 160),
              (struct IApplicationView *)a2,
              a3 == 10);
  if ( updated < 0 )
  {
    v4 = 98LL;
    goto LABEL_15;
  }
  return (unsigned int)updated;
}
