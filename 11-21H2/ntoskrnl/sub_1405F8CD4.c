/*
 * XREFs of sub_1405F8CD4 @ 0x1405F8CD4
 * Callers:
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 * Callees:
 *     sub_1403920C8 @ 0x1403920C8 (sub_1403920C8.c)
 */

__int64 __fastcall sub_1405F8CD4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int *v5; // r9
  _DWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdi
  char **v14; // rcx
  __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 792);
  v5 = *(unsigned int **)(a3 + 8);
  v8 = v5 + 3;
  v9 = 4LL * *v5;
  v10 = (unsigned __int64)&v5[v9 + 3];
  v11 = 16 * (v5[3] & *(_DWORD *)(a1 + 808));
  v12 = v11 - (-(int)v3 & (unsigned int)v11) + (-v3 & ((unsigned __int64)v5 + v3 + v9 * 4 + 11));
  if ( (unsigned __int64)(v5 + 3) >= v10 )
    return 0LL;
  v13 = (*(_DWORD *)(a3 + 20) & 0x10) != 0 ? 2 : 0;
  while ( 1 )
  {
    v14 = (char **)(a2 + 16);
    if ( !a2 )
      v14 = (char **)a3;
    result = sub_1403920C8(
               a1,
               *(_QWORD *)(a1 + 896),
               (v12 + (unsigned int)(16 * (*v8 - *(_DWORD *)(a3 + 16)))) | v13,
               a2,
               *v14,
               (__int64)v8,
               0LL);
    if ( (int)result < 0 )
      break;
    v8 += 4;
    if ( (unsigned __int64)v8 >= v10 )
      return 0LL;
  }
  return result;
}
