/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x18007CF7C
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800214D0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x180111104 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x180076C30 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlpVirtualPopShadowStack(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 48) & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature2(a1 + 1232, 11, 2147353560LL, 0LL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
