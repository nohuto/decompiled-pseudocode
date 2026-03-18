/*
 * XREFs of ObpDereferenceCurrentDeviceMap @ 0x14069C7C0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x14069C1E0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 */

signed __int64 __fastcall ObpDereferenceCurrentDeviceMap(unsigned __int64 P, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  if ( !a2 )
    return ObDereferenceDeviceMap((PVOID)P);
  _m_prefetchw(a2);
  result = *a2;
  if ( (P ^ *a2) >= 0xF )
    return ObDereferenceDeviceMap((PVOID)P);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a2, result + 1, result);
    if ( v3 == result )
      break;
    if ( (P ^ result) >= 0xF )
      return ObDereferenceDeviceMap((PVOID)P);
  }
  return result;
}
