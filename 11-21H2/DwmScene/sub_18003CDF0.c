/*
 * XREFs of sub_18003CDF0 @ 0x18003CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003CDF0(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 *v5; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx

  v5 = *(__int64 **)(a1 + 56);
  v9 = *v5;
  v10 = **(_QWORD **)(a1 + 64);
  if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
    *(_QWORD *)(a1 + 104) = v10;
  v11 = *(__int64 **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 104);
  v13 = *v11;
  v14 = (v12 - *v11) >> 1;
  if ( !a4 )
  {
    v16 = 0LL;
    goto LABEL_19;
  }
  v15 = a4 - 1;
  if ( !v15 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v9 && v13 )
          goto LABEL_32;
        v17 = v9;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v10 && v13 )
          goto LABEL_32;
        v17 = v10;
      }
      v16 = (__int64)(v17 - v13) >> 1;
      goto LABEL_19;
    }
LABEL_32:
    *a2 = -1LL;
    goto LABEL_33;
  }
  if ( v15 != 1 )
    goto LABEL_32;
  v16 = (*(_QWORD *)(a1 + 104) - *v11) >> 1;
LABEL_19:
  v18 = v16 + a3;
  if ( v16 + a3 > v14 || v18 && ((a5 & 1) != 0 && !v9 || (a5 & 2) != 0 && !v10) )
    goto LABEL_32;
  v19 = v13 + 2 * v18;
  if ( (a5 & 1) != 0 && v9 )
  {
    *v5 = v19;
    **(_DWORD **)(a1 + 80) = (v12 - v19) >> 1;
  }
  if ( (a5 & 2) != 0 && v10 )
  {
    v20 = **(int **)(a1 + 88);
    v21 = **(_QWORD **)(a1 + 64);
    **(_QWORD **)(a1 + 32) = v13;
    **(_QWORD **)(a1 + 64) = v19;
    **(_DWORD **)(a1 + 88) = (v21 + 2 * v20 - v19) >> 1;
  }
  *a2 = v18;
LABEL_33:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
