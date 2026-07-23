/*
 * XREFs of sub_140772190 @ 0x140772190
 * Callers:
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 */

char __fastcall sub_140772190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // ecx
  char v11; // r14
  __int64 *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ***v16; // rcx
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  __int64 v19; // r8
  __int64 *v20; // r10
  char v21; // di
  int v22; // esi
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 *v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v41[24]; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+98h] [rbp-68h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-58h]
  __int128 Source2; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v48[80]; // [rsp+D0h] [rbp-30h] BYREF

  v42 = a2;
  v44 = a3;
  v43 = 0;
  v40 = 0;
  *(_OWORD *)&v41[8] = 0LL;
  Source2 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( a4 )
    goto LABEL_5;
  v10 = *(_DWORD *)(a5 + 16);
  if ( v10 == 6 )
  {
    v36 = *(_QWORD *)a5 - 0x408897A683DA6326LL;
    if ( *(_QWORD *)a5 == 0x408897A683DA6326LL )
      v36 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
    if ( !v36 )
      goto LABEL_72;
  }
  if ( v10 == 100 )
  {
    v37 = *(_QWORD *)a5 - 0x43CD9CF78C439FF0LL;
    if ( *(_QWORD *)a5 == 0x43CD9CF78C439FF0LL )
      v37 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    if ( !v37 )
      goto LABEL_72;
  }
  if ( v10 != 101 )
    goto LABEL_5;
  v38 = *(_QWORD *)a5 - 0x43CD9CF78C439FF0LL;
  if ( *(_QWORD *)a5 == 0x43CD9CF78C439FF0LL )
    v38 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
  if ( v38 )
  {
LABEL_5:
    v11 = 0;
  }
  else
  {
LABEL_72:
    *(_QWORD *)v41 = 0LL;
    v11 = 1;
    sub_14042A5E0(a1, a2);
  }
  *(_QWORD *)v41 = a3;
  *(_QWORD *)&v41[8] = a4;
  *(_QWORD *)&v41[16] = a5;
  sub_14042A5E0(a1, a2);
  v12 = &qword_1400022A8;
  v13 = 13LL;
  do
  {
    v14 = 0LL;
    if ( *(_DWORD *)v12 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(*(v12 - 1) + 8 * v14);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v15 + 16) )
        {
          v27 = *(_QWORD *)a5 - *(_QWORD *)v15;
          if ( *(_QWORD *)a5 == *(_QWORD *)v15 )
            v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v15 + 8);
          if ( !v27 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= *(_DWORD *)v12 )
          goto LABEL_10;
      }
      *(_QWORD *)&v41[16] = v12[1];
      sub_14042A5E0(a1, v42);
    }
LABEL_10:
    v12 += 3;
    --v13;
  }
  while ( v13 );
  v16 = &off_140002250;
  v17 = 0;
  while ( 1 )
  {
    v18 = *((_DWORD *)v16 + 2);
    v19 = 0LL;
    if ( v18 )
      break;
LABEL_15:
    ++v17;
    v16 += 3;
    if ( v17 >= 3 )
    {
      v21 = 0;
      goto LABEL_17;
    }
  }
  while ( 1 )
  {
    v20 = (*v16)[v19];
    if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)v20 + 4) )
    {
      v28 = *(_QWORD *)a5 - *v20;
      if ( *(_QWORD *)a5 == *v20 )
        v28 = *(_QWORD *)(a5 + 8) - v20[1];
      if ( !v28 )
        break;
    }
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v18 )
      goto LABEL_15;
  }
  v21 = 1;
LABEL_17:
  if ( !v11 && !v21 )
    goto LABEL_19;
  v22 = v42;
  v30 = sub_14077DA5C(
          a1,
          v42,
          1,
          v44,
          0LL,
          (__int64)&qword_140010A78,
          (__int64)&v43,
          (__int64)&Source2,
          16,
          (__int64)&v40,
          0);
  if ( v30 != -1073741275 && v30 != -1073741772 )
  {
    if ( v30 < 0 )
      goto LABEL_73;
    if ( RtlCompareMemory(qword_140010A90, &Source2, 0x10uLL) == 16 )
      goto LABEL_20;
    if ( (int)sub_140773030(&Source2, v48) < 0 )
    {
LABEL_73:
      *(_QWORD *)v41 = 0LL;
      sub_14042A5E0(a1, 0LL);
    }
    else
    {
      if ( v11 )
      {
        *(_QWORD *)v41 = 0LL;
        sub_14042A5E0(a1, v48);
      }
      if ( v21 )
      {
        v31 = &qword_140002258;
        *(_OWORD *)v41 = 0LL;
        v32 = 3LL;
        do
        {
          v33 = 0LL;
          if ( *(_DWORD *)v31 )
          {
            while ( 1 )
            {
              v34 = *(_QWORD *)(*(v31 - 1) + 8 * v33);
              if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v34 + 16) )
              {
                v35 = *(_QWORD *)a5 - *(_QWORD *)v34;
                if ( *(_QWORD *)a5 == *(_QWORD *)v34 )
                  v35 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v34 + 8);
                if ( !v35 )
                  break;
              }
              v33 = (unsigned int)(v33 + 1);
              if ( (unsigned int)v33 >= *(_DWORD *)v31 )
                goto LABEL_51;
            }
            *(_QWORD *)&v41[16] = v31[1];
            sub_14042A5E0(a1, v48);
          }
LABEL_51:
          v31 += 3;
          --v32;
        }
        while ( v32 );
LABEL_19:
        v22 = v42;
      }
    }
  }
LABEL_20:
  v23 = 0LL;
  v24 = *((_DWORD *)&off_140002230 + 2);
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = off_140C069E0[v23];
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)v25 + 4) )
      {
        v29 = *(_QWORD *)a5 - *v25;
        if ( *(_QWORD *)a5 == *v25 )
          v29 = *(_QWORD *)(a5 + 8) - v25[1];
        if ( !v29 )
          break;
      }
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= v24 )
        goto LABEL_23;
    }
    LOBYTE(v26) = 1;
  }
  else
  {
LABEL_23:
    LOBYTE(v26) = 0;
  }
  if ( v11 || (_BYTE)v26 )
  {
    *(_QWORD *)&v45 = a6;
    BYTE12(v46) = v11;
    if ( (_BYTE)v26 )
    {
      *((_QWORD *)&v45 + 1) = a5;
      *(_QWORD *)&v46 = &off_140002230;
      DWORD2(v46) = 1;
    }
    v26 = sub_140787F7C(a1, 0, v22, 0, (__int64)sub_1406EB6A0, (__int64)&v45, 0LL, 0, (__int64)&v40, 0);
    if ( v26 < 0 )
    {
      *(_QWORD *)v41 = 0LL;
      LOBYTE(v26) = sub_14042A5E0(a1, 0LL);
    }
  }
  return v26;
}
