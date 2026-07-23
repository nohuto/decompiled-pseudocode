/*
 * XREFs of sub_14023642C @ 0x14023642C
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 */

volatile signed __int64 *__fastcall sub_14023642C(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r11
  unsigned int v6; // ecx
  volatile signed __int64 *v7; // rbx

  v4 = (a1 >> 13) & 0x3FFFF;
  v5 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v6, v4);
  v7 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v6 - 2))
                                             + 8LL * (v4 ^ (1 << v6))
                                             + 8)
                                 + 8 * (v5 & 0x1FF));
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    sub_14029F350(v7, a2, a3, a4);
  return v7;
}
