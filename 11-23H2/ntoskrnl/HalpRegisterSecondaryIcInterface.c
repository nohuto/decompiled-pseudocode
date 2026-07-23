/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1403AFF4C
 * Callers:
 *     HaliSetSystemInformation @ 0x14085EF58 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1403AFF78 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14085EFA8 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
