/*
 * XREFs of sub_14091ECE0 @ 0x14091ECE0
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091ECE0(unsigned int *a1, _DWORD *a2, void ***a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v9; // r12
  void **PoolWithTag; // rax
  __int64 v11; // r8
  void **v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  void **v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  void *v18; // rcx

  v3 = *a1;
  v4 = 0LL;
  if ( !(_DWORD)v3 )
    return 3221225485LL;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  *a2 = 0;
  v9 = (unsigned int)v3;
  PoolWithTag = (void **)ExAllocatePoolWithTag(PagedPool, 8 * v3, 0x36344D43u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 8 * v3);
  if ( (_DWORD)v3 == 1 )
  {
    v11 = *((_QWORD *)a1 + 1);
    v12 = *a3;
    v13 = *(_QWORD *)(v11 + 56);
    if ( (*(_DWORD *)(v13 + 48) & 0x80u) == 0 )
    {
      *v12 = *(void **)(v13 + 72);
      v14 = **a3;
    }
    else
    {
      *v12 = *(void **)(v13 + 56);
      v14 = (void *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
    }
    ObfReferenceObject(v14);
  }
  else if ( (_DWORD)v3 )
  {
    do
    {
      v15 = *a3;
      v16 = *(_QWORD *)(v4 * 8 + *((_QWORD *)a1 + 1));
      v17 = *(_QWORD *)(v16 + 56);
      if ( (*(_DWORD *)(v17 + 48) & 0x80u) == 0 )
      {
        v15[v4] = *(void **)(v17 + 72);
        v18 = (*a3)[v4];
      }
      else
      {
        v15[v4] = *(void **)(v17 + 56);
        v18 = (void *)(*(_QWORD *)(*(_QWORD *)(v16 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
      }
      ObfReferenceObject(v18);
      ++v4;
      --v9;
    }
    while ( v9 );
  }
  *a2 = v3;
  return 0LL;
}
