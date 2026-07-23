/*
 * XREFs of sub_140976790 @ 0x140976790
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     sub_1405EF8CC @ 0x1405EF8CC (sub_1405EF8CC.c)
 *     sub_1409745FC @ 0x1409745FC (sub_1409745FC.c)
 *     sub_14097469C @ 0x14097469C (sub_14097469C.c)
 */

__int64 __fastcall sub_140976790(__int64 a1)
{
  int *v1; // rsi
  unsigned int i; // r14d
  int v4; // ebp
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // rdx

  v1 = *(int **)(a1 + 32);
  for ( i = sub_1405EF8CC(*(_DWORD **)(a1 + 24)); ; v1 = (int *)(v7 + 4LL * v4 * i) )
  {
    v10 = *v1;
    if ( !*v1 )
      break;
    v4 = *v1 & 0xFFF;
    if ( v10 < 0 )
      v5 = *(_QWORD *)(a1 + 8);
    else
      v5 = *(_QWORD *)a1;
    v6 = (__int64 *)(a1 + 8);
    if ( v10 < 0 )
      v6 = (__int64 *)a1;
    v7 = (__int64)(v1 + 1);
    v8 = *v6;
    result = sub_1409745FC(v5, v7, v4, i, v10, 0);
    if ( (int)result < 0 )
      return result;
    if ( (v10 & 0xFC000) == 0x5C000 )
    {
      result = sub_1409745FC(v8, v7, v10 & 0xFFF, i, v10, 1u);
      if ( (int)result < 0 )
        return result;
    }
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( !v11 )
    return 0LL;
  result = sub_14097469C(*(_QWORD *)a1, v11);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
