/*
 * XREFs of sub_140A99C74 @ 0x140A99C74
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A81ABC @ 0x140A81ABC (sub_140A81ABC.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 *     sub_140A99B3C @ 0x140A99B3C (sub_140A99B3C.c)
 */

__int64 __fastcall sub_140A99C74(int *a1, int a2, int **a3)
{
  int v6; // ebp
  __int64 *v7; // rax
  int *v8; // rsi
  int *v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  int **v12; // rcx
  unsigned __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rcx

  if ( *((_DWORD *)qword_140D57500 + 8196) || *((int *)qword_140D57500 + 8282) > 1024 )
  {
    v6 = 1;
  }
  else
  {
    v6 = a2;
    if ( !a2 )
    {
      v7 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( v7 )
      {
        sub_140A99A38(
          byte_140C0D9D0,
          "Deleted lock 0x%p is still owned by the thread 0x%p.",
          4107LL,
          *((_QWORD *)a1 + 1),
          *v7,
          (__int64)a1);
        sub_1405FFA20(0xC4u, 0x100BuLL, *((_QWORD *)a1 + 1), **((_QWORD **)a1 + 2), (ULONG_PTR)a1, byte_140C0D9D0);
        v6 = a2;
      }
    }
  }
  v8 = (int *)*((_QWORD *)a1 + 3);
  while ( v8 != a1 + 6 )
  {
    v9 = v8 - 10;
    v8 = *(int **)v8;
    sub_140A99B3C(v9, v6);
    *(_QWORD *)v9 = *a3;
    *a3 = v9;
  }
  v10 = qword_140D57500;
  --*((_QWORD *)qword_140D57500 + 3);
  v11 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v11 + 8) != a1 + 10 || (v12 = (int **)*((_QWORD *)a1 + 6), *v12 != a1 + 10) )
    __fastfail(3u);
  *v12 = (int *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  v13 = *((_QWORD *)a1 + 1) >> 12;
  result = 1023 * (v13 / 0x3FF);
  v13 %= 0x3FFuLL;
  v15 = 2 * (v13 + 2);
  if ( *(_QWORD *)(16 * v13 + v10[2]) != 16 * v13 + v10[2] )
    return sub_140A81ABC(&v10[v15], *((_QWORD *)a1 + 1), (unsigned int)dword_140A75168[*a1]);
  v10[v15] = 0LL;
  v10[v15 + 1] = 0LL;
  return result;
}
