/*
 * XREFs of HalpDmaLinkDeviceObjectByToken @ 0x140827BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x140390AE4 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpDmaInsertDeviceObjectByToken @ 0x140390BD0 (HalpDmaInsertDeviceObjectByToken.c)
 */

__int64 __fastcall HalpDmaLinkDeviceObjectByToken(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    return (unsigned int)HalpDmaInsertDeviceObjectByToken(a1, a2, 0);
  else
    HalpDmaFindDeviceObjectByToken(a1, 1, 0);
  return v2;
}
