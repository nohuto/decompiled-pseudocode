/*
 * XREFs of ?DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@I@Z @ 0x1801904E8
 * Callers:
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 *     ?DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180138A80 (-DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x18014F728 (-SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectP.c)
 *     ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0 (-DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0 (-DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::DebugSourceProperties(
        Windows::UI::Composition::CompositionPropertyAnimator *this,
        struct CompObjectDiagnosticsPrincipal *a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rcx
  int v9; // esi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_BYTE *)this + 152) & 2) == 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      9,
      1LL);
    *((_BYTE *)this + 152) |= 2u;
    v6 = *((_QWORD *)this + 25);
    v7 = *((_QWORD *)this + 26);
    while ( 1 )
    {
      if ( v6 == v7 )
        return 0LL;
      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                  *((Windows::UI::Composition::CompositorCommon **)this + 3),
                                  0);
      if ( a2 )
      {
        v9 = Windows::UI::Composition::AnimationLoggingManager::DebugReferenceProperty(
               AnimationLoggingManager,
               a2,
               a3,
               (const struct ObjectPropertyStringTuple *)v6);
        if ( v9 < 0 )
        {
          v10 = 590LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
            (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = Windows::UI::Composition::AnimationLoggingManager::DebugProperty(
               AnimationLoggingManager,
               *(_DWORD *)v6,
               *(_DWORD *)(v6 + 4));
        if ( v9 < 0 )
        {
          v10 = 597LL;
          goto LABEL_6;
        }
      }
      v6 += 24LL;
    }
  }
  return 0LL;
}
