/*
 * XREFs of sub_140521E50 @ 0x140521E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052CCA8 @ 0x14052CCA8 (sub_14052CCA8.c)
 */

__int64 __fastcall sub_140521E50(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax

  if ( a2 != 3 )
    return 3221225485LL;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      if ( a3 == v6 )
      {
        v7 = a1 + 48;
        return sub_14052CCA8(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
      }
    }
  }
  *(_QWORD *)(a1 + 32) = a3;
  v8 = a3 / 0x37E;
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a1 + 24);
  if ( a3 == 894 * v8 )
    v9 = v8;
  v11 = v9 / v10;
  if ( v9 % v10 )
    ++v11;
  v12 = a1 + 48;
  v13 = *(unsigned int *)(a1 + 44);
  if ( v11 > *(unsigned int *)(a1 + 16) )
  {
    sub_14052CCA8(v12, v13, 11LL, 0LL);
    return 3221225485LL;
  }
  v14 = *(unsigned int *)(a1 + 20);
  if ( v11 >= v14 )
    LODWORD(v14) = v11;
  result = sub_14052CCA8(v12, v13, 6LL, (unsigned int)v14);
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      result = sub_14052CCA8(a1 + 48, *(unsigned int *)(a1 + 44), 9LL, 0LL);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 40) = 1;
    }
    v7 = a1 + 48;
    return sub_14052CCA8(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
  }
  return result;
}
