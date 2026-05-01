/*
 * XREFs of ??1CPinList@@QEAA@XZ @ 0x180751A34
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18017BB30 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$3 @ 0x1802C517E (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$3.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180755DB0 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     _CPinnedList::GetPinnedItem_::_1_::dtor$0 @ 0x180755E4C (_CPinnedList--GetPinnedItem_--_1_--dtor$0.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180755E60 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     _CPinnedList::GetPinnedItemForAppID_::_1_::dtor$0 @ 0x180755EFC (_CPinnedList--GetPinnedItemForAppID_--_1_--dtor$0.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$5 @ 0x180758071 (_CPinnedList--InternalModify_--_1_--dtor$5.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1807587A0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _CPinnedList::IsPinned_::_1_::dtor$0 @ 0x180758819 (_CPinnedList--IsPinned_--_1_--dtor$0.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     _CPinnedList::ItemChangeNotify_::_1_::dtor$0 @ 0x180758D90 (_CPinnedList--ItemChangeNotify_--_1_--dtor$0.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$3 @ 0x180759E1A (_CPinnedList--PinShellLink_--_1_--dtor$3.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18075AF70 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     _CPinnedList::Resolve_::_1_::dtor$0 @ 0x18075B1C8 (_CPinnedList--Resolve_--_1_--dtor$0.c)
 * Callees:
 *     ??$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z @ 0x180749D68 (--$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z.c)
 *     DSA_Destroy @ 0x18074A78C (DSA_Destroy.c)
 *     DSA_EnumCallback @ 0x18074A808 (DSA_EnumCallback.c)
 */

void __fastcall CPinList::~CPinList(CPinList *this)
{
  struct _DSA *v2; // rdi

  SafeRelease<IStream>((__int64 *)this + 1);
  v2 = *(struct _DSA **)this;
  if ( *(_QWORD *)this )
  {
    DSA_EnumCallback(*(HDSA *)this, PINENTRY::DestroyCallback, 0LL);
    DSA_Destroy(v2);
    *(_QWORD *)this = 0LL;
  }
}
