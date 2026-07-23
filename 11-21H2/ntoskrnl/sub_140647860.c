/*
 * XREFs of sub_140647860 @ 0x140647860
 * Callers:
 *     sub_14064717C @ 0x14064717C (sub_14064717C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140647860(__int64 a1, unsigned int *a2, const void *a3, unsigned int a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // edi

  v7 = (a4 + 3) & 0xFFFFFFFC;
  if ( v7 < a4 )
    return 3221225621LL;
  v8 = *a2;
  v9 = v8 + v7;
  if ( (unsigned int)v8 + v7 < (unsigned int)v8 )
    return 3221225621LL;
  if ( v9 > *(_DWORD *)(a1 + 20) )
    return 2147483653LL;
  memmove((void *)(v8 + a1), a3, a4);
  if ( a4 < v7 )
    memset((void *)(a1 + (unsigned int)v8 + a4), 0, v7 - a4);
  *a2 = v9;
  return 0LL;
}
