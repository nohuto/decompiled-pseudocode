/*
 * XREFs of sub_1406942E8 @ 0x1406942E8
 * Callers:
 *     PsTlsSetValue @ 0x1406941F0 (PsTlsSetValue.c)
 * Callees:
 *     sub_14069437C @ 0x14069437C (sub_14069437C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406942E8(__int64 a1, PVOID *a2, int a3, __int64 a4, int a5)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v8; // edi

  if ( (unsigned int)(a3 - 1) > 0xEE )
    return 3221225485LL;
  PoolWithTag = *a2;
  v8 = a3 + 16;
  if ( *a2 )
    return sub_14069437C(a1, PoolWithTag, v8, a4);
  if ( a5 != 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6B534C46u);
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 0LL;
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      *a2 = PoolWithTag;
      return sub_14069437C(a1, PoolWithTag, v8, a4);
    }
  }
  return 3221225495LL;
}
