/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x140740830
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406C9768 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140741438 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1407E91C0 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14074071C (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1407408A0 (PiPnpRtlIsDeviceValidForSession.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(
        int a1,
        int a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  if ( (int)result < 0 || *a5 && (result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5), (int)result < 0) )
    *a5 = 0;
  return result;
}
