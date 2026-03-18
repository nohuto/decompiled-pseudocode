/*
 * XREFs of CarLoadFromDV @ 0x1405D56F8
 * Callers:
 *     CarLoadConfig @ 0x1405D5694 (CarLoadConfig.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  CarRuleClasses = VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  CarTriageContext = VfTriageContext;
  if ( !a1 )
  {
    CarXdvOptions = VfFlightOptions;
    return (unsigned __int64)memmove(CarDrivers, MmVerifyDriverBuffer, (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
