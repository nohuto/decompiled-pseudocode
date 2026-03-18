/*
 * XREFs of ObpDereferenceCurrentDeviceMap @ 0x1406FC378
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC3C0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x1407B040C (ObDereferenceDeviceMap.c)
 */

signed __int64 __fastcall ObpDereferenceCurrentDeviceMap(unsigned __int64 a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  if ( !a2 )
    return ObDereferenceDeviceMap((PVOID)a1);
  _m_prefetchw(a2);
  result = *a2;
  if ( (a1 ^ *a2) >= 0xF )
    return ObDereferenceDeviceMap((PVOID)a1);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a2, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a1 ^ result) >= 0xF )
      return ObDereferenceDeviceMap((PVOID)a1);
  }
  return result;
}
