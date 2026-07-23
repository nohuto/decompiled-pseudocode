/*
 * XREFs of sub_1409B9738 @ 0x1409B9738
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 * Callees:
 *     sub_1409B9860 @ 0x1409B9860 (sub_1409B9860.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409B9738(
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
  PVOID PoolWithTag; // rax
  unsigned int v17; // edi
  int v19[4]; // [rsp+60h] [rbp-38h] BYREF

  v10 = 1024;
  v19[0] = 1024;
  v15 = 0;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x63416553u);
    *a9 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v17 = sub_1409B9860(a1, a2, a3, a4, a5, a6, a7, a8, v19, PoolWithTag, a10);
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
