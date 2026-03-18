/*
 * XREFs of ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C0025224
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024944 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C0024BE8 (-GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDeviceDescriptionEntry::MatchStateToFlags(FxDeviceDescriptionEntry *this, char Flags)
{
  FxChildListDescriptionState *p_m_DescriptionState; // rax

  p_m_DescriptionState = &this->m_DescriptionState;
  if ( (Flags & 1) != 0 && *p_m_DescriptionState == DescriptionInstantiatedHasObject
    || (Flags & 2) != 0 && (unsigned int)(*p_m_DescriptionState - 3) <= 1 )
  {
    return 1;
  }
  if ( (Flags & 4) != 0 )
    return *p_m_DescriptionState == DescriptionPresentNeedsInstantiation;
  return 0;
}
