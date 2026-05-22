/*
 * XREFs of ?Release@CSynchronousSuperWetInk@DirectComposition@@UEAAKXZ @ 0x1800E6CB0
 * Callers:
 *     ?Release@CFilterEffect@DirectComposition@@WBA@EAAKXZ @ 0x1800A90B0 (-Release@CFilterEffect@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::Release(
        DirectComposition::CDelayedDestructionObject *this)
{
  return DirectComposition::CDelayedDestructionObject::Release(this);
}
