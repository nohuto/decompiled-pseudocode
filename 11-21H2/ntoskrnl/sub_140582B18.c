/*
 * XREFs of sub_140582B18 @ 0x140582B18
 * Callers:
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1403C8D10 @ 0x1403C8D10 (sub_1403C8D10.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char *__fastcall sub_140582B18(__int16 *a1, char a2, _QWORD *a3)
{
  char v3; // al
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  char *v10; // rax
  char v11; // al
  unsigned __int8 v12; // bl
  __int64 v13; // rsi
  signed __int64 v14; // r12
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  char *v19; // rax
  char *v20; // r15
  unsigned __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  signed __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v3 = dword_140D06880;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = -1LL;
  if ( (v3 & 0x30) == 0 )
    return 0LL;
  v25 = *a1;
  v10 = sub_14026DFC0(1);
  v23[0] = 0LL;
  v26 = (__int64)v10;
LABEL_4:
  while ( 1 )
  {
    v11 = sub_1402CF4F0((__int64)v10);
    v21 = 0LL;
    v12 = v11;
    v13 = sub_1403C8D10(v23, &v21, v11, 0);
    sub_1402B0CE0(v26, v12);
    if ( !v13 )
      break;
    v14 = 48 * ((v13 + 0x220000000000LL) / 0x30uLL);
    v15 = v14 - 0x220000000000LL;
    v22 = v14 - 0x220000000000LL;
    v16 = 48 * ((v13 + v21 + 0x220000000000LL) / 0x30) - 0x220000000000LL;
    v10 = (char *)v26;
    v21 = v16;
    if ( v14 - 0x220000000000LL < v16 )
    {
      v17 = 16 * v6;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v14 - 0x21FFFFFFFFD8LL);
        if ( (v18 & 0x20000000000000LL) != 0 && ((a2 & 2) != 0 || ((v18 >> 43) & 0x3FF) == v25) )
        {
          if ( v7 == -1LL || v7 + 1 != 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4) )
          {
            if ( v6 == v5 )
            {
              if ( v5 )
                v5 *= 2LL;
              else
                v5 = 16LL;
              v19 = (char *)sub_1402828F0(64, 16 * v5, 0x66506D4Du);
              v20 = v19;
              if ( !v19 && v4 )
              {
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              if ( v6 )
              {
                memmove(v19, v4, v17);
                ExFreePoolWithTag(v4, 0);
              }
              v15 = v22;
              v4 = v20;
              v16 = v21;
            }
            *(_QWORD *)&v4[v17 + 8] = 4096LL;
            ++v6;
            *(_QWORD *)&v4[v17] = 0xAAAAAAAAAAAAB000uLL * (v14 >> 4);
            v17 += 16LL;
          }
          else
          {
            *(_QWORD *)&v4[v17 - 8] += 4096LL;
          }
          v7 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
        }
        v15 += 48LL;
        v14 += 48LL;
        v22 = v15;
        if ( v15 >= v16 )
        {
          v10 = (char *)v26;
          goto LABEL_4;
        }
      }
    }
  }
  *a3 = v6;
  return v4;
}
