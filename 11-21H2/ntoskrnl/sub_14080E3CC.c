/*
 * XREFs of sub_14080E3CC @ 0x14080E3CC
 * Callers:
 *     sub_14080E2B0 @ 0x14080E2B0 (sub_14080E2B0.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 * Callees:
 *     sub_140857840 @ 0x140857840 (sub_140857840.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 **__fastcall sub_14080E3CC(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **result; // rax
  __int64 v4; // rdi

  --*(_DWORD *)(a1[7] + 36);
  v2 = *a1;
  if ( *(__int64 **)(v2 + 8) != a1 || (result = (__int64 **)a1[1], *result != a1) )
    __fastfail(3u);
  *result = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = result;
  if ( (a1[2] & 0x80000) != 0 )
  {
    v4 = a1[7];
    if ( (*(_DWORD *)(v4 + 152))-- == 1 )
    {
      *(_QWORD *)(v4 + 112) = 0LL;
      *(_QWORD *)(v4 + 120) = 0LL;
      result = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x70696D57u);
      if ( result )
      {
        *((_DWORD *)result + 4) = 1;
        result = (__int64 **)sub_140857840(result, v4, 0LL);
      }
    }
    *((_DWORD *)a1 + 4) &= 0xFFCFFFFF;
  }
  return result;
}
