/*
 * XREFs of sub_14065BB1C @ 0x14065BB1C
 * Callers:
 *     sub_14065B994 @ 0x14065B994 (sub_14065B994.c)
 * Callees:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C82B0 @ 0x1407C82B0 (sub_1407C82B0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065BB1C(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // eax
  ULONG_PTR v15; // rcx

  v1 = a1[15];
  v3 = 0LL;
  v4 = 0LL;
  v5 = a1 + 10;
  result = (__int64)(a1 + 10);
  v7 = 2LL;
  while ( *(_QWORD *)result != v1 )
  {
    v3 = (unsigned int)(v3 + 1);
    ++v4;
    result += 8LL;
    if ( v4 >= 2 )
      goto LABEL_6;
  }
  v8 = *a1;
  v9 = (unsigned int)v3;
  v10 = (__int64)&a1[v3 + 12];
  if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
    result = sub_1406BF450(v8, v10);
  else
    result = sub_1407C97C0(v8, v10);
  a1[v9 + 10] = 0LL;
  v11 = *((_DWORD *)a1 + v9 + 6);
  *((_DWORD *)a1 + v9 + 18) = -1;
  *((_DWORD *)a1 + v9 + 6) = ++v11;
  if ( v11 < *((_DWORD *)a1 + v9 + 8) )
  {
    v14 = sub_1407C82B0(*a1);
    *((_DWORD *)a1 + v9 + 18) = v14;
    v15 = *a1;
    if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
      result = sub_1406BF400(v15, v14);
    else
      result = sub_1407C9820(v15);
    a1[v9 + 10] = result;
  }
LABEL_6:
  a1[15] = 0LL;
  v12 = (unsigned int *)(a1 + 9);
  *((_DWORD *)a1 + 28) = -1;
  do
  {
    if ( *v5 )
    {
      v13 = a1[15];
      if ( !v13 || (result = sub_14065C51C(*v5, v13), (int)result < 0) )
      {
        a1[15] = *v5;
        result = *v12;
        *((_DWORD *)a1 + 28) = result;
      }
    }
    ++v5;
    ++v12;
    --v7;
  }
  while ( v7 );
  return result;
}
