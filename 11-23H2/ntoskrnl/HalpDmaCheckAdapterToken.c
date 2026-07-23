/*
 * XREFs of HalpDmaCheckAdapterToken @ 0x140501A00
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x140390AE4 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpDmaInsertDeviceObjectByToken @ 0x140390BD0 (HalpDmaInsertDeviceObjectByToken.c)
 */

__int64 __fastcall HalpDmaCheckAdapterToken(__int64 a1)
{
  unsigned int v2; // ebx
  int inserted; // eax

  v2 = 0;
  if ( !HalpDmaFindDeviceObjectByToken(a1, 0, 1) )
  {
    inserted = HalpDmaInsertDeviceObjectByToken(a1, 0LL, 1);
    if ( inserted >= 0 )
      return (unsigned int)-1073741275;
    return (unsigned int)inserted;
  }
  return v2;
}
