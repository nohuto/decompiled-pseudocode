/*
 * XREFs of RtlpComputeMergedAcl @ 0x1409BC9B4
 * Callers:
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlpComputeMergedAcl2 @ 0x1409BCADC (RtlpComputeMergedAcl2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        PVOID *a9,
        __int64 a10)
{
  unsigned int v10; // eax
  int v15; // esi
  __int64 Pool2; // rax
  unsigned int v17; // edi
  int v19[4]; // [rsp+60h] [rbp-38h] BYREF

  v10 = 1024;
  v19[0] = 1024;
  v15 = 0;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1665230163LL);
    *a9 = (PVOID)Pool2;
    if ( !Pool2 )
      break;
    v17 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, v19, Pool2, a10);
    if ( (v17 & 0x80000000) == 0 )
    {
      if ( !v19[0] )
      {
        ExFreePoolWithTag(*a9, 0);
        *a9 = 0LL;
      }
      return v17;
    }
    ExFreePoolWithTag(*a9, 0);
    *a9 = 0LL;
    if ( v17 != -1073741789 )
      return v17;
    if ( (unsigned int)++v15 >= 2 )
      return v17;
    v10 = v19[0];
  }
  return 3221225495LL;
}
