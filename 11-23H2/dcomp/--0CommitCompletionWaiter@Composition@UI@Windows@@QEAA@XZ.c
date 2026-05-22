/*
 * XREFs of ??0CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ @ 0x180083B64
 * Callers:
 *     ??$MakeAndInitialize2@VCommitCompletionWaiter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAK@Details@WRL2@Microsoft@@YAJPEAPEAVCommitCompletionWaiter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAK@Z @ 0x180083ABC (--$MakeAndInitialize2@VCommitCompletionWaiter@Composition@UI@Windows@@V1234@PEAVCompositor@234@A.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::CommitCompletionWaiter::CommitCompletionWaiter(RTL_SRWLOCK *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this->Ptr = &Windows::UI::Composition::CommitCompletionWaiter::`vftable';
  this[16].Ptr = &Windows::UI::Composition::CommitCompletionWaiter::AsyncAction::`vftable';
  this[18].Ptr = &Windows::UI::Composition::CommitCompletionWaiter::AsyncInfo::`vftable';
  this[23].Ptr = 0LL;
  InitializeSRWLock(this + 24);
  InitializeSRWLock(this + 25);
  return this;
}
