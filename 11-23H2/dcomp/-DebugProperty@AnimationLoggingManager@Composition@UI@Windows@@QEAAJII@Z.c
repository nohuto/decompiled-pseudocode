/*
 * XREFs of ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0
 * Callers:
 *     ?DebugProperty@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180147070 (-DebugProperty@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@I@Z @ 0x1801904E8 (-DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry@234@@@QEAAPEAVTargetMapEntry@Composition@UI@Windows@@UObjectPropertyReference@345@@Z @ 0x180087EA4 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry.c)
 *     ??$_Emplace@AEBUObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@_N@1@AEBUObjectPropertyPair@@@Z @ 0x180169D3C (--$_Emplace@AEBUObjectPropertyPair@@@-$_Tree@V-$_Tset_traits@UObjectPropertyPair@@U-$less@UObjec.c)
 *     ?DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@I@Z @ 0x1801904E8 (-DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDi.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationLoggingManager::DebugProperty(
        Windows::UI::Composition::AnimationLoggingManager *this,
        unsigned int a2,
        unsigned int a3)
{
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  _QWORD *Element; // rax
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = __PAIR64__(a3, a2);
  std::_Tree<std::_Tset_traits<ObjectPropertyPair,std::less<ObjectPropertyPair>,std::allocator<ObjectPropertyPair>,0>>::_Emplace<ObjectPropertyPair const &>(
    (__int64 *)this + 17,
    (__int64)&v10,
    (unsigned int *)&v12);
  BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(*((Windows::UI::Composition::CompositorCommon **)this + 3));
  Element = CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::TargetMapEntry>::FindElement(
              BindingManager,
              (__int64 *)&v12);
  if ( Element )
  {
    for ( i = Element[1]; i; i = *(_QWORD *)(i + 24) )
    {
      v7 = Windows::UI::Composition::CompositionPropertyAnimator::DebugSourceProperties(
             *(Windows::UI::Composition::CompositionPropertyAnimator **)(i + 8),
             0LL,
             0);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x677,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationbindingmanager.cpp",
          (const char *)(unsigned int)v7);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x76,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
          (const char *)v8);
        return v8;
      }
    }
  }
  return 0LL;
}
