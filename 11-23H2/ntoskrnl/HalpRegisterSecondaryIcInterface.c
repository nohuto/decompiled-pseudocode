/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1403AFD6C
 * Callers:
 *     HaliSetSystemInformation @ 0x14085ED18 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1403AFD98 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14085ED68 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
