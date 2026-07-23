/*
 * XREFs of sub_140A20144 @ 0x140A20144
 * Callers:
 *     sub_140A1F420 @ 0x140A1F420 (sub_140A1F420.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     sub_14024F418 @ 0x14024F418 (sub_14024F418.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A20144(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  char v3; // al
  __int64 result; // rax
  int v8; // esi
  __int64 i; // r10
  unsigned int v10; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbp
  _WORD *v13; // r14
  __int64 j; // rdi
  unsigned int v15; // ebx
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a1 & 0x7F;
  v16 = 0;
  if ( v3 == 127 )
    return 3221225530LL;
  v8 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)i & 0x7F) != 0x7F; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( *(_BYTE *)i == 4 && *(_BYTE *)(i + 1) == 4 )
    {
      result = sub_14024F418(*(unsigned __int16 *)(i + 2), 4u, &v16);
      if ( (int)result < 0 )
        return result;
      v8 += v16;
    }
  }
  if ( !v8 )
    return 3221226021LL;
  v10 = v8 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = PoolWithTag;
  for ( j = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)j & 0x7F) != 0x7F; j += *(unsigned __int16 *)(j + 2) )
  {
    if ( *(_BYTE *)j == 4 && *(_BYTE *)(j + 1) == 4 )
    {
      v15 = *(unsigned __int16 *)(j + 2) - 4;
      memmove(v13, (const void *)(j + 4), v15);
      v13 = (_WORD *)((char *)v13 + v15);
    }
  }
  result = 0LL;
  *a2 = v12;
  *v13 = 0;
  *a3 = v10;
  return result;
}
