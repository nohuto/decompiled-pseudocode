/*
 * XREFs of PnpGetRegistryDword @ 0x1403A0BDC
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140843AFC (PipDmgGetDriverDmarCompatLevel.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x140B6104C (PnpInitializePnpWatchdogs.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B610B8 (PnpQueryWatchdogTimeoutConfiguration.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C6D9C (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRegistryDword(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v5 = 0LL;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( (unsigned __int8)PnpValidateRegistryDword(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
