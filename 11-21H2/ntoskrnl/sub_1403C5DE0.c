/*
 * XREFs of sub_1403C5DE0 @ 0x1403C5DE0
 * Callers:
 *     sub_14082EFE4 @ 0x14082EFE4 (sub_14082EFE4.c)
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 *     sub_140830B1C @ 0x140830B1C (sub_140830B1C.c)
 *     sub_140A35084 @ 0x140A35084 (sub_140A35084.c)
 *     sub_140A35814 @ 0x140A35814 (sub_140A35814.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1403C5DE0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v2 = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF && (_DWORD)v3 )
  {
    v4 = 2 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    return v6;
  }
  return (PVOID)v2;
}
