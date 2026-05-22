/*
 * XREFs of ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D48
 * Callers:
 *     ?Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180006BF0 (-Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveAll@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006CD0 (-RemoveAll@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEA.c)
 * Callees:
 *     ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D94 (-UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180006F18 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Wind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::RemoveAllReceivers(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
    *((_QWORD *)this + 27),
    *((_QWORD *)this + 28));
  *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
  updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateReceivers(this);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DD,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
    (const char *)(unsigned int)updated,
    v5);
  return v3;
}
