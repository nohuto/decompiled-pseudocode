/*
 * XREFs of ??0CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122828
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVExpressionAnimation@567@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x180120064 (--$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V1234.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::CompositionAnimationTriggerPartner(
        RTL_SRWLOCK *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this->Ptr = &Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::`vftable';
  this[17].Ptr = &Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Partner::`vftable';
  this[20].Ptr = 0LL;
  this[21].Ptr = 0LL;
  this[22].Ptr = 0LL;
  this[23].Ptr = 0LL;
  this[24].Ptr = 0LL;
  this[25].Ptr = 0LL;
  this[26].Ptr = 0LL;
  this[27].Ptr = 0LL;
  this[28].Ptr = 0LL;
  InitializeSRWLock(this + 29);
  InitializeSRWLock(this + 30);
  return this;
}
