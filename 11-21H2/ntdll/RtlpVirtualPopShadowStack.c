/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x1800849C0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800398D0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x18010FAE4 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x18007D270 (RtlLocateExtendedFeature2.c)
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
