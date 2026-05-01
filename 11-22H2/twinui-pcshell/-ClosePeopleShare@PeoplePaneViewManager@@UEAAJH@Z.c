/*
 * XREFs of ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1804B2EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2F88 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B34C8 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::ClosePeopleShare(PeoplePaneViewManager *this, __int64 a2)
{
  int ViewInfoByApplicationViewId; // eax
  PeoplePaneViewManager *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v8 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId((char *)this - 88, a2, v8);
  v4 = ViewInfoByApplicationViewId;
  if ( ViewInfoByApplicationViewId < 0 )
  {
    v5 = 440LL;
LABEL_7:
    v6 = (unsigned int)ViewInfoByApplicationViewId;
    goto LABEL_8;
  }
  if ( *((_DWORD *)v8[0] + 15) == 1 )
  {
    ViewInfoByApplicationViewId = PeoplePaneViewManager::CloseView(v3, *((struct IApplicationView **)v8[0] + 4));
    v4 = ViewInfoByApplicationViewId;
    if ( ViewInfoByApplicationViewId >= 0 )
      goto LABEL_9;
    v5 = 443LL;
    goto LABEL_7;
  }
  v4 = -2147024809;
  v6 = 2147942487LL;
  v5 = 441LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)v6);
LABEL_9:
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  return v4;
}
