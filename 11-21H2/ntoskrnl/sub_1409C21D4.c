/*
 * XREFs of sub_1409C21D4 @ 0x1409C21D4
 * Callers:
 *     sub_1409C1150 @ 0x1409C1150 (sub_1409C1150.c)
 *     sub_1409C1520 @ 0x1409C1520 (sub_1409C1520.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409C21D4(unsigned int *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v9; // r10
  unsigned __int16 i; // r11
  int v11; // edx
  _DWORD *v12; // rsi
  _WORD *v14; // rcx
  __int64 v15; // r8
  __int16 *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned int *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdi
  int v22; // eax
  __int16 v23; // r8
  __int64 v24; // rcx
  unsigned __int16 *v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdi
  __int64 v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // rcx
  unsigned int *v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned int *v36; // r8
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // ebp
  unsigned int *j; // rcx
  unsigned int v46; // eax
  unsigned int v47; // r8d
  __int64 v48; // r15
  unsigned int v49; // edi
  unsigned __int16 v50; // r9
  __int64 v51; // rax
  unsigned int v52; // r10d
  unsigned __int16 v53; // r11
  unsigned int v54; // esi
  unsigned int v55; // edx
  unsigned int v56; // r9d
  __int64 v57; // rcx
  unsigned int v58; // [rsp+60h] [rbp+8h]
  unsigned int v59; // [rsp+70h] [rbp+18h]

  memset(a1, 0, 0x97E0uLL);
  v9 = (unsigned __int64)a1;
  for ( i = 0; i < a3; ++i )
  {
    v11 = *(_DWORD *)(a2 + 4LL * i);
    if ( v11 )
    {
      *(_DWORD *)v9 = v11;
      ++*((_WORD *)a1 + (unsigned int)(unsigned __int8)v11 + 16909);
      ++*((_WORD *)a1 + (unsigned int)BYTE1(v11) + 17166);
      ++*((_WORD *)a1 + (unsigned int)BYTE2(v11) + 17423);
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_WORD *)(v9 + 16) = i;
      v9 += 24LL;
    }
  }
  v12 = a1 + 6;
  if ( v9 > (unsigned __int64)(a1 + 6) )
  {
    v14 = a1 + 8583;
    v15 = 255LL;
    v16 = (__int16 *)a1 + 17165;
    do
    {
      *(v14 - 257) += *(v16 - 257);
      v17 = *v16++;
      *v14++ += v17;
      v14[256] += v16[256];
      --v15;
    }
    while ( v15 );
    v18 = (__int64)(v9 - (_QWORD)a1) / 24;
    if ( (_DWORD)v18 )
    {
      v19 = a1;
      v20 = (unsigned int)v18;
      v21 = (unsigned int)v18;
      do
      {
        v22 = *v19;
        v23 = *((_WORD *)v19 + 8);
        v19 += 6;
        v24 = *((unsigned __int16 *)a1 + (unsigned __int8)v22 + 16908);
        *((_WORD *)a1 + (unsigned __int8)v22 + 16908) = v24 + 1;
        *((_WORD *)a1 + v24 + 17679) = v23;
        --v21;
      }
      while ( v21 );
      v25 = (unsigned __int16 *)a1 + 17679;
      v26 = (unsigned int)v18;
      do
      {
        v27 = *v25++;
        v28 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * v27));
        v29 = *((unsigned __int16 *)a1 + v28 + 17165);
        *((_WORD *)a1 + v28 + 17165) = v29 + 1;
        *((_WORD *)a1 + v29 + 18383) = v27;
        --v26;
      }
      while ( v26 );
      v30 = (unsigned __int16 *)a1 + 18383;
      do
      {
        v31 = *v30++;
        v32 = *(_DWORD *)(a2 + 4 * v31);
        v33 = *((unsigned __int16 *)a1 + BYTE2(v32) + 17422);
        *((_WORD *)a1 + BYTE2(v32) + 17422) = v33 + 1;
        LOWORD(a1[6 * v33 + 4]) = v31;
        a1[6 * v33] = v32;
        --v20;
      }
      while ( v20 );
    }
    v34 = a1 + 12;
    while ( 1 )
    {
      *(_QWORD *)(v9 + 8) = a1;
      v35 = v9;
      *(_QWORD *)(v9 + 16) = v12;
      v36 = v34;
      v37 = (unsigned int *)v9;
      *(_DWORD *)v9 = *v12 + *a1;
      while ( v36 != (unsigned int *)v9 || v37 != (unsigned int *)v35 )
      {
        v35 += 24LL;
        if ( v36 == (unsigned int *)v9 || (unsigned __int64)v37 < v35 && *v37 < *v36 )
        {
          *(_QWORD *)(v35 + 8) = v37;
          v38 = *v37;
          v37 += 6;
        }
        else
        {
          *(_QWORD *)(v35 + 8) = v36;
          v38 = *v36;
          v36 += 6;
        }
        *(_DWORD *)v35 = v38;
        if ( v36 == (unsigned int *)v9 || (unsigned __int64)v37 < v35 && *v37 < *v36 )
        {
          *(_QWORD *)(v35 + 16) = v37;
          *(_DWORD *)v35 += *v37;
          v37 += 6;
        }
        else
        {
          *(_QWORD *)(v35 + 16) = v36;
          *(_DWORD *)v35 += *v36;
          v36 += 6;
        }
      }
      v39 = 0;
      LODWORD(v40) = 0;
      while ( 1 )
      {
        while ( *(_QWORD *)(v35 + 8) )
        {
          ++v39;
          v42 = 2LL * (unsigned int)v40;
          v43 = 2 * ((unsigned int)v40 + 2114LL);
          LODWORD(v40) = v40 + 1;
          a1[2 * v43] = v39;
          *(_QWORD *)&a1[2 * v42 + 8454] = *(_QWORD *)(v35 + 8);
          v35 = *(_QWORD *)(v35 + 16);
        }
        v41 = *(unsigned __int16 *)(v35 + 16);
        *(_DWORD *)(v35 + 8) = v39;
        *((_BYTE *)a1 + v41 + 38176) = v39;
        if ( !(_DWORD)v40 )
          break;
        v40 = (unsigned int)(v40 - 1);
        v35 = *(_QWORD *)&a1[4 * (unsigned int)v40 + 8454];
        v39 = a1[4 * v40 + 8456];
      }
      v44 = a1[2];
      v34 = a1 + 12;
      v58 = v44;
      if ( v44 <= a4 )
        break;
      for ( j = a1; (unsigned __int64)j < v9; j += 6 )
      {
        v46 = *j;
        *((_QWORD *)j + 1) = 0LL;
        *j = (v46 + 1) >> 1;
      }
    }
    v47 = *(_DWORD *)(v9 - 16);
    LODWORD(v48) = 0;
    v59 = 0;
    v49 = 0;
    v50 = 0;
    if ( a3 )
    {
      do
      {
        v51 = v50++;
        v49 += *((unsigned __int8 *)a1 + v51 + 38176) * *(_DWORD *)(a2 + 4 * v51);
      }
      while ( v50 < a3 );
      v59 = v49;
    }
    v52 = 0;
    if ( v47 <= v44 )
    {
      do
      {
        v53 = v48;
        if ( a3 )
        {
          do
          {
            if ( *((unsigned __int8 *)a1 + v53 + 38176) == v47 )
            {
              v54 = v47;
              v55 = v52;
              v56 = v48;
              if ( v47 > 8 )
              {
                v48 = ((v47 - 9) >> 3) + 1;
                do
                {
                  v57 = (unsigned __int8)v55;
                  v54 -= 8;
                  v55 >>= 8;
                  v56 = *((unsigned __int8 *)qword_14001BBA0 + v57) | (v56 << 8);
                  --v48;
                }
                while ( v48 );
              }
              if ( v54 )
                v56 = (*((unsigned __int8 *)qword_14001BBA0 + (unsigned __int8)v55) | (v56 << 8)) >> (8 - v54);
              *(_DWORD *)(a5 + 4LL * v53) = v47 & 0x1F ^ (32 * v56);
              ++v52;
            }
            ++v53;
          }
          while ( v53 < a3 );
          v44 = v58;
        }
        v52 *= 2;
        ++v47;
      }
      while ( v47 <= v44 );
      return v59;
    }
    return v49;
  }
  else if ( (unsigned int *)v9 == a1 + 6 )
  {
    *(_DWORD *)(a5 + 4LL * *((unsigned __int16 *)a1 + 8)) = 1;
    return *a1;
  }
  else
  {
    return 0LL;
  }
}
