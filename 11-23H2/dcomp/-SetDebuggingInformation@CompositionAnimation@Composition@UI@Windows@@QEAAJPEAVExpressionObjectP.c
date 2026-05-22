/*
 * XREFs of ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x18014F728
 * Callers:
 *     ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z @ 0x18013688C (-AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?IsPropertyDebugged@AnimationLoggingManager@Composition@UI@Windows@@QEAA_NIIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x180077510 (-IsPropertyDebugged@AnimationLoggingManager@Composition@UI@Windows@@QEAA_NIIPEAPEAVCompObjectDia.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@I@Z @ 0x1801904E8 (-DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetDebuggingInformation(
        Windows::UI::Composition::CompositorCommon **this,
        struct ExpressionObjectPropertyInfo *a2,
        struct Windows::UI::Composition::CompositionPropertyAnimator *a3)
{
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  int v7; // eax
  unsigned int v8; // edi
  void *Reference; // rax
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CompObjectDiagnosticsPrincipal *v13; // [rsp+30h] [rbp+8h] BYREF

  (*((void (__fastcall **)(Windows::UI::Composition::CompositorCommon **, char *))*this + 36))(this, (char *)a3 + 200);
  AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(this[3], 1);
  if ( Windows::UI::Composition::AnimationLoggingManager::IsPropertyDebugged(
         AnimationLoggingManager,
         *(_DWORD *)a2,
         *((_DWORD *)a2 + 1),
         &v13)
    && (v7 = Windows::UI::Composition::CompositionPropertyAnimator::DebugSourceProperties(a3, v13, *((_DWORD *)a2 + 1)),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    if ( *((int *)this[14] + 1) < 0 )
    {
      Reference = CSparseStorage::GetReference((CSparseStorage *)(this + 14), 1);
      (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionPropertyAnimator *, void *))(*(_QWORD *)a3 + 240LL))(
        a3,
        Reference);
    }
    v11 = *((_DWORD *)this + 75);
    if ( v11 )
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a3 + 3) + 456LL),
        *((_DWORD *)a3 + 32),
        4,
        v11);
    return 0LL;
  }
}
