/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCPinnedList@@@Details@23@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18074EA80
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18074ED40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18074ED40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIContextMenu@@U?$ChainInterfaces@UIFlexibleTaskbarPinnedList@@UIPinnedList2@@UIPinnedList@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIPinnedList3@@UIPinnedListTombstones@@UIExplorerCommand@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18074E930 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIContextMenu@@U-$Chain.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v4; // r8
  __int64 result; // rax
  _QWORD *v6; // r8
  unsigned int v7; // r9d

  if ( InlineIsEqualGUID(a2, &GUID_000214e8_0000_0000_c000_000000000046) )
  {
    *v4 = a1;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IContextMenu,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>::CanCastTo(
             a1 + 8,
             a2);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(a2, &GUID_4cd19ada_25a5_4a32_b3b7_347bee5be36b) )
  {
    *v6 = a1 + 112;
    return 0LL;
  }
  return v7;
}
