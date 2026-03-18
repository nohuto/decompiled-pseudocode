/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C00D9550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r14d
  int v4; // r9d
  int v5; // r11d
  __int64 v6; // rdi
  int v7; // edx
  int v8; // ebx
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v11; // r8d
  __int64 v12; // r13
  __int64 v13; // r8
  unsigned int v14; // ecx
  _DWORD *v15; // r10
  unsigned int v16; // ebp
  _DWORD *v17; // r9
  unsigned int v18; // [rsp+40h] [rbp+8h]
  int v19; // [rsp+48h] [rbp+10h]
  __int64 v20; // [rsp+50h] [rbp+18h]

  v1 = *((int *)a1 + 7);
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 8) - v1;
  v5 = *((_DWORD *)a1 + 13);
  v6 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v7 = 0;
  v8 = *((_DWORD *)a1 + 11);
  v9 = *((_DWORD *)a1 + 15);
  v19 = v5;
  v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v11 = *((_DWORD *)a1 + 12);
  v18 = *((_DWORD *)a1 + 10);
  if ( v3 > 0 )
  {
    if ( v11 )
      v7 = v11 * *((_DWORD *)a1 + 2);
    v12 = *((_DWORD *)a1 + 6) - 4 * v4;
    v13 = 4LL * v4;
    v20 = v13;
    do
    {
      v14 = *((_DWORD *)a1 + 14);
      v15 = (_DWORD *)((char *)v10 + v13);
      v16 = v5 + v9;
      v17 = (_DWORD *)v6;
      if ( v10 != (_DWORD *)((char *)v10 + v13) )
      {
        do
        {
          *v10++ = *v17;
          v17 += (v8 + v14 < v14) + (unsigned __int64)v18;
          v14 += v8;
        }
        while ( v10 != v15 );
        v13 = v20;
        v5 = v19;
      }
      v6 += v7;
      if ( v16 < v9 )
        v6 += *((int *)a1 + 2);
      v10 = (_DWORD *)((char *)v10 + v12);
      v9 = v16;
      --v3;
    }
    while ( v3 );
  }
}
