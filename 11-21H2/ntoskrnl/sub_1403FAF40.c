/*
 * XREFs of sub_1403FAF40 @ 0x1403FAF40
 * Callers:
 *     sub_1406884C4 @ 0x1406884C4 (sub_1406884C4.c)
 * Callees:
 *     sub_1403FB004 @ 0x1403FB004 (sub_1403FB004.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403FAF40(__int64 a1, char *a2, size_t a3)
{
  int v3; // r14d
  size_t v4; // rdi
  char *v5; // rsi
  __int64 result; // rax
  unsigned int v8; // r14d
  size_t v9; // rbx

  v3 = *(_DWORD *)(a1 + 40);
  v4 = a3;
  v5 = a2;
  result = (unsigned int)(v3 + a3);
  *(_DWORD *)(a1 + 40) = result;
  v8 = v3 & 3;
  if ( v8 )
  {
    v9 = 4 - v8;
    if ( a3 >= v9 )
    {
      memmove((void *)(a1 + v8), a2, (unsigned int)v9);
      v5 += v9;
      v4 -= v9;
      result = sub_1403FB004(a1 + 16, a1, 4LL);
      v8 = 0;
    }
  }
  if ( v4 >= 4 )
  {
    result = sub_1403FB004(a1 + 16, v5, v4 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 += v4 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 -= v4 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v4 )
    return (__int64)memmove((void *)(a1 + v8), v5, v4);
  return result;
}
