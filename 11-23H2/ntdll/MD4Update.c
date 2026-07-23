/*
 * XREFs of MD4Update @ 0x180124C30
 * Callers:
 *     MD4Final @ 0x1801245A0 (MD4Final.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     MD4Transform @ 0x18012469C (MD4Transform.c)
 */

void *__fastcall MD4Update(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // r14d
  void *result; // rax
  unsigned __int64 v10; // r14

  v3 = a3;
  v4 = a2;
  v6 = (*(_DWORD *)(a1 + 16) >> 3) & 0x3F;
  v7 = *(_DWORD *)(a1 + 16) + 8 * a3;
  *(_DWORD *)(a1 + 16) = v7;
  if ( v7 < 8 * a3 )
    ++*(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) += a3 >> 29;
  if ( v6 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(v6 + a1 + 24), a2, 64 - v6);
      v4 = (_OWORD *)((char *)v4 + 64 - v6);
      v3 = v8 - 64;
      MD4Transform((_DWORD *)a1, (_DWORD *)(a1 + 24));
      v6 = 0;
    }
  }
  result = (void *)((unsigned __int8)v4 & 3);
  if ( v3 >= 0x40 )
  {
    v10 = (unsigned __int64)v3 >> 6;
    if ( ((unsigned __int8)v4 & 3) != 0 )
    {
      do
      {
        *(_OWORD *)(a1 + 24) = *v4;
        *(_OWORD *)(a1 + 40) = v4[1];
        *(_OWORD *)(a1 + 56) = v4[2];
        *(_OWORD *)(a1 + 72) = v4[3];
        result = (void *)MD4Transform((_DWORD *)a1, (_DWORD *)(a1 + 24));
        v4 += 4;
        v3 -= 64;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      do
      {
        result = (void *)MD4Transform((_DWORD *)a1, v4);
        v4 += 4;
        v3 -= 64;
        --v10;
      }
      while ( v10 );
    }
  }
  if ( v3 )
    return memmove((void *)(v6 + a1 + 24), v4, v3);
  return result;
}
