/*
 * XREFs of ??1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ @ 0x1801531DC
 * Callers:
 *     ??_GCompositionManipulation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180153230 (--_GCompositionManipulation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionManipulation::~CompositionManipulation(
        Windows::UI::Composition::CompositionManipulation *this)
{
  __int64 v2; // rdx

  `vector destructor iterator'(
    (char *)this + 168,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
