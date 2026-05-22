/*
 * XREFs of ?GetOrientation@Visual@Composition@UI@Windows@@QEAAAEBUQuaternion@Numerics@Foundation@4@XZ @ 0x1800A1A64
 * Callers:
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 * Callees:
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

const struct Windows::Foundation::Numerics::Quaternion *__fastcall Windows::UI::Composition::Visual::GetOrientation(
        Windows::UI::Composition::Visual *this)
{
  char *Reference; // rax

  Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( Reference )
    return (const struct Windows::Foundation::Numerics::Quaternion *)(Reference + 200);
  else
    return (const struct Windows::Foundation::Numerics::Quaternion *)&Windows::UI::Composition::ComponentTransform3D::sc_defaultOrientation;
}
