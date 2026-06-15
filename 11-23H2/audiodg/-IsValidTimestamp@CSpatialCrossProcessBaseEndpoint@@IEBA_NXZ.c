/*
 * XREFs of ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x1400A02EC
 * Callers:
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14009FD40 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CSpatialCrossProcessBaseEndpoint::IsValidTimestamp(CSpatialCrossProcessBaseEndpoint *this)
{
  signed __int32 v1; // eax
  char v2; // dl

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0);
  v2 = 1;
  if ( (v1 & 0xFFFFFF81) != 1 || (v1 & 8) == 0 )
    return 0;
  return v2;
}
