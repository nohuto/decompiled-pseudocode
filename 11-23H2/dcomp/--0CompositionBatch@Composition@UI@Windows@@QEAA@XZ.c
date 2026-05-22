/*
 * XREFs of ??0CompositionBatch@Composition@UI@Windows@@QEAA@XZ @ 0x180002E8C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVBatchController@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCommitBatch@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVBatchController@456@@Z @ 0x180002DCC (--$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@23.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::CompositionBatch::CompositionBatch(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this->Ptr = &Windows::UI::Composition::CompositionBatch::`vftable';
  this[19].Ptr = 0LL;
  InitializeSRWLock(this + 20);
  InitializeSRWLock(this + 21);
  this[23].Ptr = 0LL;
  result = this;
  this[24].Ptr = 0LL;
  return result;
}
