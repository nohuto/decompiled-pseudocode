/*
 * XREFs of PinDataFormatIntersection @ 0x1C0037EA0
 * Callers:
 *     <none>
 * Callees:
 *     IntersectFindDataRange @ 0x1C0037F60 (IntersectFindDataRange.c)
 *     IntersectGetFormatSize @ 0x1C0038154 (IntersectGetFormatSize.c)
 *     IntersectConvertDatarangeToFormat @ 0x1C003ACF4 (IntersectConvertDatarangeToFormat.c)
 */

__int64 __fastcall PinDataFormatIntersection(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int *a8)
{
  PKSFILTER FilterFromIrp; // rax
  const KSFILTER_DESCRIPTOR *Descriptor; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 DataRange; // rax
  unsigned int FormatSize; // eax
  __int64 v17; // r9

  FilterFromIrp = KsGetFilterFromIrp(a2);
  if ( !FilterFromIrp )
    return 3221225485LL;
  Descriptor = FilterFromIrp->Descriptor;
  v12 = *(unsigned int *)(a3 + 24);
  if ( (unsigned int)v12 >= Descriptor->PinDescriptorsCount )
    return 3221225485LL;
  v13 = (__int64)Descriptor->PinDescriptors + 176 * v12;
  DataRange = IntersectFindDataRange(a4, *(_QWORD *)(v13 + 56), *(unsigned int *)(v13 + 48));
  if ( !DataRange )
    return 3221226098LL;
  FormatSize = IntersectGetFormatSize(DataRange);
  *a8 = FormatSize;
  if ( !a6 )
    return 2147483653LL;
  if ( FormatSize > a6 )
    return 3221225507LL;
  IntersectConvertDatarangeToFormat(v13, v17, a7);
  return 0LL;
}
