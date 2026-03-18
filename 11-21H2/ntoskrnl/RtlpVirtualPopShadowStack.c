/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x14025DAE4
 * Callers:
 *     RtlpUnwindEpilogue @ 0x14025D8EC (RtlpUnwindEpilogue.c)
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140297430 (RtlpUnwindPrologue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14025CB30 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlpVirtualPopShadowStack(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  char *ExtendedFeature2; // rax

  if ( a2 )
  {
    if ( (a1[12] & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a1 + 308, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
      if ( ExtendedFeature2 )
      {
        if ( (*ExtendedFeature2 & 1) != 0 )
          *((_QWORD *)ExtendedFeature2 + 1) += (unsigned int)(8 * a2);
      }
    }
  }
  result = a1[12] & 0x100080;
  if ( (_DWORD)result == 1048704 )
    *(_QWORD *)((char *)a1 + a1[314] + 1232) += (unsigned int)(8 * a3);
  return result;
}
