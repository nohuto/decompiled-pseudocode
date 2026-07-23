/*
 * XREFs of sub_1403D4120 @ 0x1403D4120
 * Callers:
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 * Callees:
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 */

void sub_1403D4120()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 *v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 *v14; // r8

  v0 = 0;
  if ( word_140D05000 )
  {
    v1 = qword_140C506E0 + 112;
    do
    {
      v2 = *(_QWORD *)v1;
      if ( *(_QWORD *)(*(_QWORD *)v1 + 32LL) )
      {
        if ( *(_DWORD *)(v2 + 68) )
        {
          v3 = (unsigned __int64 *)sub_14030B860(64LL, 8LL * *(unsigned int *)(v2 + 48), 0x735A694Du, v0 | 0x80000000);
          v4 = v3;
          if ( v3 )
          {
            v5 = *(unsigned int *)(v2 + 48);
            v6 = 0LL;
            v7 = *(_QWORD *)(v2 + 72);
            if ( (_DWORD)v5 )
            {
              v8 = &v3[v5];
              v9 = 16LL * (unsigned int)v5;
              do
              {
                v9 -= 16LL;
                v10 = (unsigned int)v5;
                --v8;
                LODWORD(v5) = v5 - 1;
                v11 = (*(_QWORD *)(v9 + v7 + 8) << 21)
                    / (*(_QWORD *)(v2 + 56)
                     * (unsigned __int64)*(unsigned int *)(v2 + 48)
                     / v10);
                if ( (_DWORD)v10 != *(_DWORD *)(v2 + 48) && v6 < v11 )
                {
                  ++dword_140C296F8;
                  v11 = v6;
                }
                *v8 = v11;
                v6 = v11;
              }
              while ( (_DWORD)v5 );
            }
            v12 = *v4;
            if ( *(_QWORD *)(v2 + 32) <= *v4 )
            {
              ++dword_140C296F4;
            }
            else
            {
              v13 = *(unsigned int *)(v2 + 48);
              if ( (_DWORD)v13 )
              {
                v14 = &v4[v13];
                do
                {
                  --v14;
                  *v14 = *(_QWORD *)(v2 + 32) * *v14 / v12;
                  LODWORD(v13) = v13 - 1;
                }
                while ( (_DWORD)v13 );
              }
            }
            *(_QWORD *)(v2 + 40) = v4;
          }
        }
      }
      ++v0;
      v1 += 120LL;
    }
    while ( v0 < (unsigned __int16)word_140D05000 );
  }
}
