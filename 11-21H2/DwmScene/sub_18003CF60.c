/*
 * XREFs of sub_18003CF60 @ 0x18003CF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_18003CF60(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  __int64 *v5; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx

  v5 = *(__int64 **)(a1 + 56);
  v7 = *a3 + a3[1];
  v8 = *v5;
  v9 = **(_QWORD **)(a1 + 64);
  if ( v9 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  v10 = *(_QWORD *)(a1 + 104);
  v11 = **(_QWORD **)(a1 + 24);
  if ( v7 > (v10 - v11) >> 1 || v7 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v9) )
  {
    *a2 = -1LL;
  }
  else
  {
    v12 = v11 + 2 * v7;
    if ( (a4 & 1) != 0 && v8 )
    {
      *v5 = v12;
      **(_DWORD **)(a1 + 80) = (v10 - v12) >> 1;
    }
    if ( (a4 & 2) != 0 && v9 )
    {
      v13 = **(int **)(a1 + 88);
      v14 = **(_QWORD **)(a1 + 64);
      **(_QWORD **)(a1 + 32) = v11;
      **(_QWORD **)(a1 + 64) = v12;
      **(_DWORD **)(a1 + 88) = (v14 + 2 * v13 - v12) >> 1;
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
