/*
 * XREFs of sub_1C006ED80 @ 0x1C006ED80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void __fastcall sub_1C006ED80(__int64 a1, _DWORD *a2, unsigned int a3, char *a4)
{
  int v7; // r12d
  int v8; // r13d
  char *v9; // rax
  char *v10; // r15
  void *v11; // rax
  void *v12; // rax
  unsigned int v13; // r10d
  char *v14; // r9
  unsigned int i; // r8d
  __int64 *v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r15d
  int v21; // r14d
  int v22; // esi
  int v23; // ecx
  int v24; // r11d
  int v25; // r10d
  int v26; // r9d
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  char *v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // r8d
  unsigned int j; // ecx
  __int64 v38; // rdx
  char *v39; // r11
  unsigned int k; // r9d
  char *v41; // r10
  unsigned int m; // edx
  _QWORD *v43; // rdi
  unsigned int n; // r8d
  char v45; // [rsp+28h] [rbp-59h]
  __int64 v46; // [rsp+30h] [rbp-51h] BYREF
  __int64 v47; // [rsp+38h] [rbp-49h] BYREF
  PVOID v48; // [rsp+40h] [rbp-41h]
  __int64 v49; // [rsp+48h] [rbp-39h] BYREF
  __int64 v50; // [rsp+50h] [rbp-31h] BYREF
  __int64 v51; // [rsp+58h] [rbp-29h] BYREF
  __int64 v52; // [rsp+60h] [rbp-21h] BYREF
  __int64 v53; // [rsp+68h] [rbp-19h] BYREF
  __int64 v54; // [rsp+70h] [rbp-11h] BYREF
  __int64 v55; // [rsp+78h] [rbp-9h] BYREF
  __int64 v56; // [rsp+80h] [rbp-1h] BYREF
  __int64 v57; // [rsp+88h] [rbp+7h] BYREF
  __int64 v58; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v59; // [rsp+98h] [rbp+17h] BYREF
  __int64 v60; // [rsp+A0h] [rbp+1Fh] BYREF
  PVOID v61; // [rsp+A8h] [rbp+27h]
  PVOID P; // [rsp+B0h] [rbp+2Fh]
  char v63; // [rsp+F8h] [rbp+77h]

  v49 = 0LL;
  v50 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v8 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v46 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  P = 0LL;
  v61 = 0LL;
  if ( a3 >= 0x108 )
  {
    memset_0(a2, 0, a3);
    v45 = *a4;
    v63 = a4[8];
    if ( *(_QWORD *)(a1 + 2296) )
    {
      v9 = (char *)sub_1C0007CF4(264LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
      v48 = v9;
      v10 = v9;
      if ( v9 )
      {
        memmove(v9, *(const void **)(a1 + 2296), (unsigned int)Size);
        if ( *(_QWORD *)(a1 + 2336) )
        {
          v11 = (void *)sub_1C0007CF4(264LL, (unsigned int)dword_1C0093594, 1700028754LL, *(_QWORD *)(a1 + 8));
          v61 = v11;
          if ( v11 )
            memmove(v11, *(const void **)(a1 + 2336), (unsigned int)dword_1C0093594);
        }
        if ( *(_QWORD *)(a1 + 2304) )
        {
          v12 = (void *)sub_1C0007CF4(264LL, (unsigned int)dword_1C0093584, 1700028754LL, *(_QWORD *)(a1 + 8));
          P = v12;
          if ( v12 )
            memmove(v12, *(const void **)(a1 + 2304), (unsigned int)dword_1C0093584);
        }
        v13 = 0;
        if ( dword_1C0093BF0 )
        {
          do
          {
            v14 = &v10[(unsigned int)dword_1C0093578 * v13];
            for ( i = 0; i < 0xE; ++i )
            {
              if ( i > 7 )
              {
                switch ( i )
                {
                  case 8u:
                    v16 = &v56;
                    v17 = a2 + 32;
                    break;
                  case 9u:
                    v16 = &v57;
                    v17 = a2 + 34;
                    break;
                  case 0xAu:
                    v16 = &v58;
                    v17 = a2 + 36;
                    break;
                  case 0xBu:
                    v16 = &v46;
                    v17 = a2 + 38;
                    break;
                  case 0xCu:
                    v16 = &v59;
                    v17 = a2 + 40;
                    break;
                  default:
                    v16 = &v60;
                    v17 = a2 + 42;
                    break;
                }
              }
              else if ( i == 7 )
              {
                v16 = &v55;
                v17 = a2 + 30;
              }
              else if ( i )
              {
                switch ( i )
                {
                  case 1u:
                    v16 = &v50;
                    v17 = a2 + 18;
                    break;
                  case 2u:
                    v16 = &v47;
                    v17 = a2 + 20;
                    break;
                  case 3u:
                    v16 = &v51;
                    v17 = a2 + 22;
                    break;
                  case 4u:
                    v16 = &v52;
                    v17 = a2 + 24;
                    break;
                  case 5u:
                    v16 = &v53;
                    v17 = a2 + 26;
                    break;
                  default:
                    v16 = &v54;
                    v17 = a2 + 28;
                    break;
                }
              }
              else
              {
                v16 = &v49;
                v17 = a2 + 16;
              }
              if ( v45 )
              {
                v18 = 3LL * i * (unsigned __int16)qword_1C00934E0;
                *v16 += *(_QWORD *)&v14[24 * i * (unsigned __int16)qword_1C00934E0]
                      + *(_QWORD *)&v14[24 * i * (unsigned __int16)qword_1C00934E0 + 8];
                *v17 += *(_QWORD *)&v14[8 * v18 + 16] / 10LL;
              }
              if ( v63 )
              {
                v19 = 3LL * (i * (unsigned __int16)qword_1C00934E0 + 1);
                *v16 += *(_QWORD *)&v14[24 * i * (unsigned __int16)qword_1C00934E0 + 24]
                      + *(_QWORD *)&v14[24 * i * (unsigned __int16)qword_1C00934E0 + 32];
                *v17 += *(_QWORD *)&v14[8 * v19 + 16] / 10LL;
              }
            }
            ++v13;
          }
          while ( v13 < dword_1C0093BF0 );
          v7 = v49;
          v8 = v50;
        }
        v20 = v58;
        v21 = v57;
        v22 = v56;
        v23 = v47;
        v24 = v55;
        v25 = v54;
        v26 = v53;
        v27 = v52;
        v28 = v51;
        a2[11] = v46;
        v29 = v59;
        a2[12] = v59;
        a2[2] = v23;
        v30 = v60 + v29;
        a2[13] = v60;
        v31 = v47;
        v32 = v21 + v20 + v46 + v30;
        a2[8] = v22;
        v33 = v22 + v32;
        a2[9] = v21;
        v34 = (char *)v61;
        a2[10] = v20;
        *a2 = v7;
        a2[1] = v8;
        a2[3] = v28;
        a2[4] = v27;
        a2[14] = v7 + v8 + v31 + v28 + v27 + v26 + v25 + v24 + v33;
        v35 = *((_QWORD *)a2 + 8)
            + *((_QWORD *)a2 + 9)
            + *((_QWORD *)a2 + 10)
            + *((_QWORD *)a2 + 11)
            + *((_QWORD *)a2 + 12)
            + *((_QWORD *)a2 + 13)
            + *((_QWORD *)a2 + 14)
            + *((_QWORD *)a2 + 15)
            + *((_QWORD *)a2 + 16)
            + *((_QWORD *)a2 + 17)
            + *((_QWORD *)a2 + 18)
            + *((_QWORD *)a2 + 19)
            + *((_QWORD *)a2 + 20)
            + *((_QWORD *)a2 + 21);
        a2[5] = v26;
        a2[6] = v25;
        a2[7] = v24;
        *((_QWORD *)a2 + 22) = v35;
        if ( v34 )
        {
          v36 = (unsigned __int16)word_1C0093BEC;
          for ( j = 0; j <= v36; ++j )
          {
            v38 = dword_1C0093590 * j;
            if ( v45 )
              *((_QWORD *)a2 + 23) += *(_QWORD *)&v34[dword_1C0093590 * j + 8];
            if ( v63 )
              *((_QWORD *)a2 + 23) += *(_QWORD *)&v34[v38 + 16];
          }
        }
        v39 = (char *)P;
        if ( P )
        {
          for ( k = 0; k < dword_1C0093BF0; ++k )
          {
            v41 = &v39[(unsigned int)dword_1C009357C * k];
            for ( m = 0; m < 9; ++m )
            {
              if ( m )
              {
                switch ( m )
                {
                  case 1u:
                    v43 = a2 + 50;
                    break;
                  case 2u:
                    v43 = a2 + 52;
                    break;
                  case 3u:
                    v43 = a2 + 54;
                    break;
                  case 4u:
                    v43 = a2 + 56;
                    break;
                  case 5u:
                    v43 = a2 + 58;
                    break;
                  case 6u:
                    v43 = a2 + 60;
                    break;
                  case 7u:
                    v43 = a2 + 62;
                    break;
                  default:
                    v43 = a2 + 64;
                    break;
                }
              }
              else
              {
                v43 = a2 + 48;
              }
              for ( n = 0; n < 0xE; ++n )
              {
                if ( v45 )
                  *v43 += *(_QWORD *)&v41[16 * (m + n * WORD1(xmmword_1C0093540)) * (unsigned __int16)xmmword_1C0093540];
                if ( v63 )
                  *v43 += *(_QWORD *)&v41[16 * (m + n * WORD1(xmmword_1C0093540)) * (unsigned __int16)xmmword_1C0093540
                                        + 16];
              }
            }
          }
          ExFreePoolWithTag(v39, 0x65546152u);
        }
        if ( v34 )
          ExFreePoolWithTag(v34, 0x65546152u);
        ExFreePoolWithTag(v48, 0x65546152u);
      }
    }
  }
}
