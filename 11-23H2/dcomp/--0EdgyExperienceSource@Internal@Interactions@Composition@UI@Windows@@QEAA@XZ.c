/*
 * XREFs of ??0EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180130DE4
 * Callers:
 *     ??$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V123456@AEAPEAUHSTRING__@@PEAVVisual@456@@Details@WRL2@Microsoft@@YAJPEAPEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@AEAPEAUHSTRING__@@$$QEAPEAVVisual@678@@Z @ 0x180130ACC (--$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V12345.c)
 * Callees:
 *     ??0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18011C8F0 (--0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::EdgyExperienceSource(
        RTL_SRWLOCK *this)
{
  Windows::UI::Composition::Interactions::VisualInteractionSource::VisualInteractionSource((Windows::UI::Composition::Interactions::VisualInteractionSource *)this);
  this->Ptr = &Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::`vftable'{for `Windows::UI::Composition::Interactions::VisualInteractionSource'};
  this[39].Ptr = 0LL;
  this[36].Ptr = &Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::`vftable'{for `IManipulationCallbackOwner'};
  this[37].Ptr = &Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::Api::`vftable';
  this[40].Ptr = 0LL;
  InitializeSRWLock(this + 41);
  InitializeSRWLock(this + 42);
  return this;
}
