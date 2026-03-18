/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x14077D2F8
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1406E9440 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14077C860 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14077D454 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     PiPnpRtlIsDeviceValidForSession @ 0x14077D368 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14077D670 (PiPnpRtlIsDeviceEnumerableForUser.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 || *a5 && (result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5), (int)result < 0) )
    *a5 = 0;
  return result;
}
