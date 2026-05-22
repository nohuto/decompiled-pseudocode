/*
 * XREFs of ?GetRotationAxis@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ @ 0x1800A1B00
 * Callers:
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 * Callees:
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

const struct Windows::Foundation::Numerics::Vector3 *__fastcall Windows::UI::Composition::Visual::GetRotationAxis(
        Windows::UI::Composition::Visual *this)
{
  char *Reference; // rax

  Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( Reference )
    return (const struct Windows::Foundation::Numerics::Vector3 *)(Reference + 252);
  else
    return (const struct Windows::Foundation::Numerics::Vector3 *)&Windows::UI::Composition::ComponentTransform3D::sc_defaultRotationAxis;
}
