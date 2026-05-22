/*
 * XREFs of ?GetRotationAngleInDegrees@Visual@Composition@UI@Windows@@QEAAMXZ @ 0x1800A1AC8
 * Callers:
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 * Callees:
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

float __fastcall Windows::UI::Composition::Visual::GetRotationAngleInDegrees(Windows::UI::Composition::Visual *this)
{
  float *Reference; // rax

  Reference = (float *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( Reference )
    return Reference[68] * 57.295776;
  else
    return 0.0;
}
