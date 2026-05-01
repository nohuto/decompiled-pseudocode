/*
 * XREFs of ?AnimateRemovedElement@SwitchItemCloseAnimationCoordinator@@MEAAJAEBUItemRemovedInfo@ItemAnimationCoordinatorBase@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18058AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemCloseAnimationCoordinator::AnimateRemovedElement(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *a2,
        struct IUIAnimationStoryboardEventHandler2 *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 488LL))(*(_QWORD *)a2, *((_QWORD *)a2 + 1));
  if ( v5 < 0 )
  {
    v6 = 35LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcloseanimationcoordinator.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUIAnimationStoryboardEventHandler2 *))(**(_QWORD **)a2 + 496LL))(
         *(_QWORD *)a2,
         7LL,
         a3);
  if ( v5 < 0 )
  {
    v6 = 36LL;
    goto LABEL_5;
  }
  return (unsigned int)v5;
}
