/*
 * XREFs of HvlMarkHiberPhase @ 0x1405469A4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x1405470E0 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405471B4 (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    result = HvlpMarkHypervisorPagesForHibernation();
  if ( HvlHypervisorConnected )
    return HvlpMarkHvlPagesForHibernation();
  return result;
}
