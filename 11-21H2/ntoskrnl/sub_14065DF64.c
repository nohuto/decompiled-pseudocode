/*
 * XREFs of sub_14065DF64 @ 0x14065DF64
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E480 @ 0x14065E480 (sub_14065E480.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065DF64(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // r13
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  bool v8; // zf
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // rax
  ULONG_PTR v18; // [rsp+28h] [rbp-40h]
  _DWORD v19[2]; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+B0h] [rbp+48h]
  __int64 v23; // [rsp+B8h] [rbp+50h] BYREF
  int v24; // [rsp+C0h] [rbp+58h] BYREF
  int v25; // [rsp+C8h] [rbp+60h] BYREF
  int v26; // [rsp+CCh] [rbp+64h]

  v19[1] = 0;
  v26 = 0;
  v19[0] = -1;
  v2 = -1;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v25 = -1;
  v24 = 0;
  LODWORD(v23) = -1;
  v5 = *(_QWORD *)(v3 + 32);
  v22 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 80);
  v21[0] = 0LL;
  v7 = *(_DWORD **)(v6 + 104);
  v20 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v15 = sub_14065E480(a1, &v20);
    v7 = v20;
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_18;
  }
  v8 = (*(_BYTE *)(v5 + 140) & 1) == 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  v21[1] = v9;
  if ( v8 )
    v10 = sub_1407C9820(v5);
  else
    v10 = sub_1406BF400(v5, *(unsigned int *)(v9 + 40));
  v20 = (_DWORD *)v10;
  if ( !v10 )
  {
    v11 = -1073741670;
    goto LABEL_18;
  }
  v11 = sub_14071F300(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
  if ( v11 >= 0 )
  {
    v11 = sub_14071F300(v5, *(unsigned int *)(v9 + 40));
    if ( v11 >= 0 )
    {
      v11 = sub_14071F300(v5, (unsigned int)v20[v22 + 7]);
      if ( v11 >= 0 )
      {
        if ( v7[v22 + 3] != -1 )
          goto LABEL_10;
        v16 = *(_DWORD *)(v5 + 220);
        v11 = sub_14079C8A4(v5, 12, v22, (unsigned int)&v24, (__int64)v21, (__int64)&v25);
        if ( v11 >= 0 )
        {
          v17 = v21[0];
          *(_WORD *)v21[0] = v16 < 5 ? 26220 : 26732;
          *(_WORD *)(v17 + 2) = 0;
          v7[v22 + 3] = v24;
          v7[v22 + 1] = 0;
          if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
            sub_1406BF450(v5, &v25);
          else
            sub_1407C97C0(v5, &v25);
          v4 = 0LL;
LABEL_10:
          v12 = sub_1406D3BF0(v5, 38, v18, v22, (__int64)&v23);
          v2 = v23;
          v11 = v12;
          if ( v12 >= 0 )
          {
            v11 = sub_1407185B4(v5);
            if ( v11 >= 0 )
            {
              ++v7[v22 + 1];
              v13 = *(_QWORD *)(a1 + 48);
              v11 = 0;
              *(_DWORD *)(a1 + 88) = *(_DWORD *)(v13 + 40);
              *(_DWORD *)(v13 + 40) = v2;
              v2 = -1;
              *(_QWORD *)(a1 + 104) = v7;
              v7 = 0LL;
            }
          }
          goto LABEL_13;
        }
        v4 = v21[0];
      }
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    sub_1406BF450(v5, v19);
  else
    sub_1407C97C0(v5, v19);
  if ( v4 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      sub_1406BF450(v5, &v25);
    else
      sub_1407C97C0(v5, &v25);
  }
  if ( v2 != -1 )
    sub_1407164DC(v5, v2);
LABEL_18:
  if ( v7 )
  {
    sub_14065E380(v5, v7);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return (unsigned int)v11;
}
