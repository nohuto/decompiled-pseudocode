/*
 * XREFs of CarLoadConfig @ 0x1405D5694
 * Callers:
 *     CarInit @ 0x1405D3D04 (CarInit.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     CarLoadFromDV @ 0x1405D56F8 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x1405D574C (CarReadRegistry.c)
 */

__int64 CarLoadConfig()
{
  __int64 v0; // rcx

  memset(CarDrivers, 0, sizeof(CarDrivers));
  CarTriageContext = 1;
  CarTipTag = 0;
  CarXdvOptions = 0;
  CarRuleClasses = 0LL;
  if ( (_DWORD)InitializationPhase )
  {
    LOBYTE(v0) = 1;
    CarLoadFromDV(v0);
    return CarReadRegistry();
  }
  else
  {
    CarLoadFromDV(0LL);
    return 0LL;
  }
}
