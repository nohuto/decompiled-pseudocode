/*
 * XREFs of sub_140675168 @ 0x140675168
 * Callers:
 *     sub_140675300 @ 0x140675300 (sub_140675300.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140675168(__int64 a1, void **a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r9d
  unsigned int v7; // eax
  char *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  void *v17; // rax
  char i; // cl
  __int64 v19; // [rsp+20h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v7 = 2 * (v3 >> 5);
  if ( *(_DWORD *)a1 >= v7 )
  {
    if ( !v7 )
      v7 = 64;
    if ( v7 <= (unsigned int)a3 )
    {
      v9 = (char *)*a2;
      if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
      {
        for ( i = -1; (_DWORD)a3; LODWORD(a3) = (unsigned int)a3 >> 1 )
          ++i;
        a3 = (unsigned int)(1 << i);
      }
      if ( (unsigned int)a3 > 0x4000000 )
        a3 = 0x4000000LL;
      v10 = (unsigned int)a3;
      if ( v9 > &v9[8 * a3] )
        v10 = 0LL;
      if ( v10 )
        memset64(v9, a1 | 1, v10);
      v11 = *(_DWORD *)(a1 + 4);
      v12 = 0;
      v13 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (v11 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v12);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v12) = *v15;
            v19 = v13 & v15[1];
            v16 = (37
                 * (BYTE6(v19)
                  + 37
                  * (BYTE5(v19)
                   + 37
                   * (BYTE4(v19)
                    + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                 + HIBYTE(v19)) & (unsigned int)(a3 - 1);
            *v15 = *(_QWORD *)&v9[8 * v16];
            *(_QWORD *)&v9[8 * v16] = v15;
          }
          v11 = *(_DWORD *)(a1 + 4);
          ++v12;
        }
        while ( v12 < v11 >> 5 );
      }
      v17 = *(void **)(a1 + 8);
      v3 = (32 * a3) | v11 & 0x1F;
      *(_QWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 4) = v3;
      *a2 = v17;
    }
  }
  LOBYTE(v4) = v3 >= 0x20;
  return v4;
}
