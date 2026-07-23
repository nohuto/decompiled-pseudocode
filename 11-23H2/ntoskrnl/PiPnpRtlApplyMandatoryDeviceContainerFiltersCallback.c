/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1407E9490
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140740A20 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax

  v3 = (_BYTE *)(a2 + 16);
  result = PiPnpRtlApplyMandatoryDeviceFilters(
             *(_QWORD *)a2,
             *(_QWORD *)(a1 + 16),
             0LL,
             *(struct _SECURITY_SUBJECT_CONTEXT **)(a2 + 8),
             (_BYTE *)(a2 + 16));
  if ( (int)result >= 0 )
    *a3 = *v3;
  return result;
}
