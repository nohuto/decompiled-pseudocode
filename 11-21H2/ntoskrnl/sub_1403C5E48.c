/*
 * XREFs of sub_1403C5E48 @ 0x1403C5E48
 * Callers:
 *     sub_14082FF1C @ 0x14082FF1C (sub_14082FF1C.c)
 *     sub_14082FF7C @ 0x14082FF7C (sub_14082FF7C.c)
 *     sub_14082FFE4 @ 0x14082FFE4 (sub_14082FFE4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1403C5E48(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edi
  PVOID PoolWithTag; // rax
  PVOID v12; // rbx

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v7 + (unsigned int)v8 < v7 )
    return 0LL;
  if ( a6 )
    *a6 = v9;
  if ( !v9 )
    return 0LL;
  v10 = v7 + v8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
  v12 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v10);
  return v12;
}
