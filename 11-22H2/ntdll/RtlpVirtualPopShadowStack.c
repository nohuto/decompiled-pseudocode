/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x18007C90C
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180021010 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800216B0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x18010FC84 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1800765C0 (RtlLocateExtendedFeature2.c)
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
