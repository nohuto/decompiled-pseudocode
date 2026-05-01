/*
 * XREFs of ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180756BA4
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180758598 (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075E4C0 (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18075E77C (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

__int64 __fastcall GetTimestampFromPidl(const ITEMIDLIST *a1, int a2, _QWORD *a3)
{
  const struct _HIDDENITEMID *v4; // rax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v4 = ILFindHiddenIDOn(a1, a2);
  if ( !v4 )
    return 2147943568LL;
  if ( *(_WORD *)v4 < 0x10u )
  {
    v6 = 18LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\PinningTimeHelpers.h",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_WORD *)v4 + 1) )
  {
    v6 = 19LL;
    goto LABEL_5;
  }
  *a3 = *((_QWORD *)v4 + 1);
  return 0LL;
}
