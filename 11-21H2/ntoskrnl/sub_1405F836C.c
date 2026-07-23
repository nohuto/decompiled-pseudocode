/*
 * XREFs of sub_1405F836C @ 0x1405F836C
 * Callers:
 *     sub_1403865C4 @ 0x1403865C4 (sub_1403865C4.c)
 *     sub_1405FCEA8 @ 0x1405FCEA8 (sub_1405FCEA8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_1405F836C(unsigned int *a1, __int64 a2)
{
  char *v2; // rsi
  unsigned int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  size_t v7; // rbx

  v2 = (char *)(a1 + 1);
  v3 = *(_DWORD *)(a2 + 8) + 1;
  if ( v3 > 0x40 )
    v3 = 64;
  *a1 = v3;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0x40 )
  {
    v6 = ((_BYTE)v5 + 1) & 0x3F;
    v7 = 20LL * (unsigned int)(64 - v6);
    memmove(v2, (const void *)(a2 + 4 * (v6 + 4 * v6 + 6)), v7);
    v5 = *(_DWORD *)(a2 + 8);
    v2 += v7;
  }
  return memmove(v2, (const void *)(a2 + 24), 20LL * (((_BYTE)v5 + 1) & 0x3F));
}
