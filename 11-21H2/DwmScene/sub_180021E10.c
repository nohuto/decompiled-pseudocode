/*
 * XREFs of sub_180021E10 @ 0x180021E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180021E10(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 *v5; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  int v18; // ecx

  v5 = *(__int64 **)(a1 + 56);
  v7 = *v5;
  v8 = **(_QWORD **)(a1 + 64);
  if ( v8 && *(_QWORD *)(a1 + 104) < v8 )
    *(_QWORD *)(a1 + 104) = v8;
  v9 = *(__int64 **)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 104);
  v11 = *v9;
  v12 = v10 - *v9;
  if ( !a4 )
  {
    v14 = 0LL;
    goto LABEL_19;
  }
  v13 = a4 - 1;
  if ( !v13 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v7 && v11 )
          goto LABEL_32;
        v15 = v7;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v8 && v11 )
          goto LABEL_32;
        v15 = v8;
      }
      v14 = v15 - v11;
      goto LABEL_19;
    }
LABEL_32:
    *a2 = -1LL;
    goto LABEL_33;
  }
  if ( v13 != 1 )
    goto LABEL_32;
  v14 = *(_QWORD *)(a1 + 104) - *v9;
LABEL_19:
  v16 = v14 + a3;
  if ( v14 + a3 > v12 || v16 && ((a5 & 1) != 0 && !v7 || (a5 & 2) != 0 && !v8) )
    goto LABEL_32;
  v17 = v11 + v16;
  if ( (a5 & 1) != 0 && v7 )
  {
    *v5 = v17;
    **(_DWORD **)(a1 + 80) = v10 - v17;
  }
  if ( (a5 & 2) != 0 && v8 )
  {
    v18 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v17;
    **(_QWORD **)(a1 + 32) = v11;
    **(_QWORD **)(a1 + 64) = v17;
    **(_DWORD **)(a1 + 88) = v18;
  }
  *a2 = v16;
LABEL_33:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
