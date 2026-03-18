/*
 * XREFs of ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00DF920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  unsigned int v1; // r10d
  unsigned int v3; // r15d
  int v4; // ebp
  _BYTE *v5; // r9
  _DWORD *v6; // rdi
  _BYTE *v7; // r11
  _DWORD *v8; // rsi
  unsigned int v9; // ebx
  char v10; // r8
  unsigned __int64 v11; // r14
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp+8h]

  LOBYTE(v1) = 0;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 3));
  v16 = **(_QWORD **)(*(_QWORD *)a1 + 16LL);
  v6 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v7 = v5;
    v8 = v6;
    v9 = v3;
    v10 = *((_BYTE *)a1 + 48) & 7;
    if ( v10 )
      LOBYTE(v1) = *v5 << v10;
    else
      v7 = v5 - 1;
    if ( v3 )
    {
      do
      {
        if ( !v10 )
        {
          ++v7;
          if ( v9 >= 8 )
          {
            v11 = (unsigned __int64)v9 >> 3;
            do
            {
              v1 = (unsigned __int8)*v7;
              v12 = v7;
              v13 = (unsigned __int64)(unsigned __int8)*v7 >> 7;
              v14 = *v7++ & 1;
              v9 -= 8;
              *v8 = *((_DWORD *)&v16 + v13);
              v8[1] = *((_DWORD *)&v16 + ((v1 >> 6) & 1));
              v8[2] = *((_DWORD *)&v16 + ((v1 >> 5) & 1));
              v8[3] = *((_DWORD *)&v16 + ((v1 >> 4) & 1));
              v8[4] = *((_DWORD *)&v16 + ((v1 >> 3) & 1));
              v8[5] = *((_DWORD *)&v16 + ((v1 >> 2) & 1));
              v8[6] = *((_DWORD *)&v16 + ((v1 >> 1) & 1));
              v8[7] = *((_DWORD *)&v16 + v14);
              v8 += 8;
              --v11;
            }
            while ( v11 );
            v7 = v12;
            continue;
          }
          LOBYTE(v1) = *v7;
        }
        v15 = (unsigned __int64)(unsigned __int8)v1 >> 7;
        LOBYTE(v1) = 2 * v1;
        v10 = (v10 + 1) & 7;
        *v8++ = *((_DWORD *)&v16 + v15);
        --v9;
      }
      while ( v9 );
    }
    v5 += *((int *)a1 + 10);
    v6 = (_DWORD *)((char *)v6 + *((int *)a1 + 11));
  }
}
