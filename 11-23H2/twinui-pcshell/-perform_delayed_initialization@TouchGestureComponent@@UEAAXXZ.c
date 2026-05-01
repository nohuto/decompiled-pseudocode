/*
 * XREFs of ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180173280
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801179A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18017310C (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x180173310 (--0TouchGestureProcessor@@QEAA@AEBU-$com_ptr@VTouchGestureSettings@@@winrt@@@Z.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureComponent::perform_delayed_initialization(TouchEdgeGestureManager **this)
{
  TouchGestureProcessor *v2; // rbx
  TouchGestureProcessor **v3; // rsi
  TouchGestureProcessor *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  TouchGestureProcessor *v7; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = operator new(0x110uLL);
  v2 = (TouchGestureProcessor *)TouchGestureProcessor::TouchGestureProcessor(v8, this + 12);
  v3 = this + 11;
  if ( this + 11 == (TouchEdgeGestureManager **)&v8 )
  {
    if ( !v2 )
      goto LABEL_3;
    TouchGestureProcessor::~TouchGestureProcessor(v2);
    v7 = v2;
LABEL_7:
    operator delete(v7, 0x110uLL);
    goto LABEL_3;
  }
  v4 = *v3;
  *v3 = v2;
  if ( v4 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(v4);
    v7 = v4;
    goto LABEL_7;
  }
LABEL_3:
  TouchGestureProcessor::Initialize(*v3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  TouchEdgeGestureManager::DelayInitialize(this[13]);
}
