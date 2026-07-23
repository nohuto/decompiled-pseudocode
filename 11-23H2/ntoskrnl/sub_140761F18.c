/*
 * XREFs of sub_140761F18 @ 0x140761F18
 * Callers:
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2BC8 (WbInitializeEncryptionSegment.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 *     WbHashData @ 0x140761FB0 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140761F18(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 )
    return (unsigned int)-1073741811;
  if ( a2 <= 0x20 )
    return (unsigned int)-1073741811;
  v2 = WbHashData(Source1 + 32, a2 - 32);
  if ( v2 >= 0 )
    return (unsigned int)-1073741811;
  return (unsigned int)v2;
}
