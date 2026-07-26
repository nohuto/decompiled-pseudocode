/*
 * XREFs of ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C011F108
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C011E964 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7B8 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A4F8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverConfiguration(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  bool result; // al

  a1->FilterBindFlags = 0;
  if ( ndisBindReadFilterDriverFromV3Registry((__int64)a1) )
    return (a1->FilterBindFlags & 2) != 0 || a1->FilterClass.__ptr_.__value_ != 0LL;
  result = ndisBindReadFilterDriverFromV2Registry(a1);
  if ( result )
    return (a1->FilterBindFlags & 2) != 0 || a1->FilterClass.__ptr_.__value_ != 0LL;
  return result;
}
