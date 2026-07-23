/*
 * XREFs of CarLoadConfig @ 0x1405D5C04
 * Callers:
 *     CarInit @ 0x1405D4274 (CarInit.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CarLoadFromDV @ 0x1405D5C68 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x1405D5CBC (CarReadRegistry.c)
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
