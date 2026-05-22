/*
 * XREFs of ?GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA?AU_GUID@@XZ @ 0x18008B348
 * Callers:
 *     ?TelemetryGetAnimationScenarioGUID@Internal@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z @ 0x18008B2D0 (-TelemetryGetAnimationScenarioGUID@Internal@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAU_.c)
 *     ?TelemetryGetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z @ 0x180188EC0 (-TelemetryGetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

struct _GUID *__fastcall Windows::UI::Composition::CompositionAnimation::GetSparse_AnimationScenarioGUID(
        Windows::UI::Composition::CompositionAnimation *this,
        struct _GUID *__return_ptr retstr)
{
  CSparseStorage::AllocatedStorage *v2; // rcx
  struct _GUID *v3; // r10
  struct CSparseStorage::DataInfo *Slot; // rax

  v2 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 14);
  v3 = retstr;
  if ( (*((_DWORD *)v2 + 1) & 0x800) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(v2, 21);
    *v3 = *(struct _GUID *)((char *)Slot + 4);
  }
  else
  {
    *retstr = 0LL;
  }
  return v3;
}
