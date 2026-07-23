/*
 * XREFs of sub_1405EEDA4 @ 0x1405EEDA4
 * Callers:
 *     sub_140B06F28 @ 0x140B06F28 (sub_140B06F28.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405EECF4 @ 0x1405EECF4 (sub_1405EECF4.c)
 *     sub_1405EEF88 @ 0x1405EEF88 (sub_1405EEF88.c)
 */

__int64 __fastcall sub_1405EEDA4(__int64 a1, int a2, unsigned int *a3, int a4)
{
  __int64 v7; // rdi
  unsigned int v9; // r14d
  char *v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // r15
  unsigned int v14[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF

  v14[0] = 0;
  v16 = 0;
  v7 = sub_1405EEF88(a1, a2, a4, *a3, (__int64)&v16);
  if ( !v7 )
    return 3221226021LL;
  v9 = 0;
  v10 = (char *)a3 + *a3;
  v11 = 0;
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    v12 = sub_1405EECF4(a1, v7, v14);
    v9 += v12;
    if ( v9 > 0x1F4 )
      break;
    v13 = v12;
    memmove(v10, (const void *)(a1 + *(unsigned int *)(v7 + 8)), v12);
    if ( v14[0] )
      *(_DWORD *)&v10[v14[0]] += a2 - a4;
    v10 += v13;
    v7 += 12LL;
    if ( ++v11 >= v16 )
      return 0LL;
  }
  return 2147483653LL;
}
