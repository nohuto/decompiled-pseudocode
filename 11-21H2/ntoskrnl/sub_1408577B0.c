/*
 * XREFs of sub_1408577B0 @ 0x1408577B0
 * Callers:
 *     sub_14075DEAC @ 0x14075DEAC (sub_14075DEAC.c)
 * Callees:
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_140857840 @ 0x140857840 (sub_140857840.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_1408577B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  _DWORD *PoolWithTag; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0LL;
  if ( ++*(_DWORD *)(v2 + 152) == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x70696D57u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return;
    *(_QWORD *)(v2 + 112) = PoolWithTag;
    PoolWithTag[4] = 0;
  }
  else if ( *(_QWORD *)(v2 + 120) )
  {
    v3 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x70696D57u);
    if ( !v3 )
      return;
    *(_DWORD *)(a1 + 16) |= 0x200000u;
    sub_140784160(*(_QWORD *)(a1 + 64));
    v3[4] = 2;
    v3[8] = 1;
    *((_QWORD *)v3 + 5) = *(_QWORD *)(a1 + 64);
    *((_QWORD *)v3 + 3) = *(_QWORD *)(v2 + 120);
    *((_BYTE *)v3 + 36) = 1;
  }
  *(_DWORD *)(a1 + 16) |= 0x100000u;
  if ( v3 )
    sub_140857840(v3, v2, a2);
}
