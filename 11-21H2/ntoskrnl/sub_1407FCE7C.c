/*
 * XREFs of sub_1407FCE7C @ 0x1407FCE7C
 * Callers:
 *     sub_1407FD344 @ 0x1407FD344 (sub_1407FD344.c)
 *     sub_14099D934 @ 0x14099D934 (sub_14099D934.c)
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FD448 @ 0x1407FD448 (sub_1407FD448.c)
 *     sub_1407FD604 @ 0x1407FD604 (sub_1407FD604.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_14085490C @ 0x14085490C (sub_14085490C.c)
 *     sub_140854A90 @ 0x140854A90 (sub_140854A90.c)
 *     sub_14098B1A8 @ 0x14098B1A8 (sub_14098B1A8.c)
 */

__int64 __fastcall sub_1407FCE7C(__int64 *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 (**v11)[8]; // rdx
  __int64 (**v12)[8]; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  char v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r12d
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  char v22; // al
  _QWORD *v23; // rdx
  int v24; // r9d
  unsigned int v25; // ecx
  char v26; // al
  unsigned int i; // ebp
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // r15
  bool v34; // zf
  char v35; // al
  int v36; // ecx
  int v37; // r9d
  char v38; // al
  char v39; // [rsp+40h] [rbp-78h]
  bool v40; // [rsp+44h] [rbp-74h]
  unsigned int v41; // [rsp+48h] [rbp-70h] BYREF
  int v42; // [rsp+4Ch] [rbp-6Ch]
  int v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 *v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  __int128 v47; // [rsp+70h] [rbp-48h] BYREF

  v5 = 0;
  v6 = a3;
  v44 = a4;
  v39 = 0;
  v40 = 0;
  LOBYTE(v42) = 0;
  if ( !a5 || !a4 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_7;
  v9 = *a1 - 0x4869272E4569E601LL;
  if ( *a1 == 0x4869272E4569E601LL )
    v9 = a1[1] - 0x6F96D7036C1CABBCLL;
  if ( v9 )
  {
LABEL_7:
    v10 = 0;
    v11 = &off_140D05FC8;
LABEL_8:
    v12 = v11 - 1;
    v13 = 0;
    v14 = ((*((_BYTE *)v11 + 29) & 4) != 0) + 1;
    v47 = *(_OWORD *)*v11;
    v15 = HIBYTE(v47);
    while ( 1 )
    {
      v16 = v47 - *a2;
      if ( (_QWORD)v47 == *a2 )
        v16 = *((_QWORD *)&v47 + 1) - a2[1];
      if ( !v16 )
        break;
      ++v15;
      ++v13;
      HIBYTE(v47) = v15;
      if ( v13 >= v14 )
      {
        ++v10;
        v11 += 5;
        if ( v10 < 0x36 )
          goto LABEL_8;
        return (unsigned int)-1073741275;
      }
    }
    v17 = 1LL << *((_BYTE *)v12 + 36);
    v18 = v13;
    if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    else
      sub_1402D66A8((ULONG_PTR)&qword_140C23010);
    v45 = off_140C03040;
    v41 = dword_140C232CC;
    v19 = *a1;
    if ( !*a1 )
      v19 = a1[1];
    if ( v19 )
    {
      v30 = 0LL;
      if ( !byte_140C1D020 )
      {
LABEL_76:
        sub_1407FD604(v12, v30);
        return (unsigned int)-1073741275;
      }
      while ( 1 )
      {
        v31 = qword_140C1D018 + 8624LL * (unsigned int)v30;
        v32 = *(_QWORD *)(v31 + 12) - *a1;
        if ( !v32 )
          v32 = *(_QWORD *)(v31 + 20) - a1[1];
        if ( !v32 )
          break;
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= (unsigned __int8)byte_140C1D020 )
          goto LABEL_76;
      }
      v43 = *((_DWORD *)v12 + 8);
      v33 = v31 + 4272 * v6 + 40;
      v34 = (*((_BYTE *)v12 + 37) & 4) == 0;
      *(_QWORD *)&v47 = (char *)v12[3] + v13 * v43 + v33;
      if ( !v34 && !v13 && (v17 & *(_QWORD *)(v33 + 8)) == 0 )
        v18 = 1;
      v35 = sub_1407FD448((_DWORD)v12, (int)v31 + 4272 * (int)v6 + 40, v13, v18, v44, a5);
      *(_QWORD *)(v33 + 8LL * v13) |= v17;
      if ( v35 )
      {
        LOBYTE(v37) = v13;
        LOBYTE(v36) = *(_BYTE *)(v31 + 8);
        sub_14085490C(v36, (unsigned int)*v12, (unsigned int)v12[1], v37, v47, v43, v6, 0);
        v23 = (_QWORD *)v41;
        if ( v45 == (__int64 *)v31 )
          v40 = v41 == (_DWORD)v6;
        if ( qword_140C1D040 == v31 || qword_140C1D038 == v31 || qword_140C1D030 == v31 )
        {
          v26 = v42;
          if ( v41 == (_DWORD)v6 )
            v26 = 1;
          goto LABEL_23;
        }
      }
    }
    else
    {
      *(_QWORD *)&v47 = v6;
      v46 = 4272 * v6;
      v20 = &qword_140C1D060[534 * v6 + 5];
      v43 = *((_DWORD *)v12 + 8);
      v21 = (__int64)v12[3] + v13 * v43 + (_QWORD)v20;
      if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 && (v17 & v20[1]) == 0 )
      {
        v39 = 1;
        v18 = 1;
      }
      v22 = sub_1407FD448((_DWORD)v12, 4272 * v6 + (unsigned int)&qword_140C1D060[5], v13, v18, v44, a5);
      v25 = v13;
      v20[v13] |= v17;
      if ( v22 )
      {
        LOBYTE(v24) = v13;
        LOBYTE(v25) = byte_140C1D068;
        sub_14085490C(v25, (unsigned int)*v12, (unsigned int)v12[1], v24, v21, v43, v6, 0);
        v23 = (_QWORD *)v41;
        if ( v45 == qword_140C1D060 )
          v40 = v41 == (_DWORD)v6;
        for ( i = 0; i < (unsigned __int8)byte_140C1D020; ++i )
        {
          v29 = qword_140C1D018 + 8624LL * i;
          v23 = (_QWORD *)(v29 + v46 + 40);
          if ( (v23[v13] & v17) == 0 && (!v13 || (v17 & *v23) == 0) )
          {
            if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
            {
              if ( v39 )
              {
                if ( (v17 & v23[1]) == 0 )
                  v18 = 1;
              }
              else
              {
                v18 = 0;
              }
            }
            sub_1407FD448((_DWORD)v12, (_DWORD)v23, v13, v18, v44, a5);
            if ( v45 == (__int64 *)v29 )
            {
              v38 = v40;
              if ( v41 == (_QWORD)v47 )
                v38 = 1;
              v40 = v38;
            }
          }
        }
      }
    }
    v26 = v42;
LABEL_23:
    v41 = 0;
    if ( v40 || dword_140D0696C && byte_140D068E7 && v26 )
    {
      *(_QWORD *)&v47 = 1LL << *((_BYTE *)v12 + 36);
      sub_140854A90(&v47, &v41);
      if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      {
        sub_140849940(&v41);
      }
      else
      {
        sub_14098B1A8();
        sub_1402935D0((ULONG_PTR)&qword_140C23010);
      }
    }
    else
    {
      sub_1407FD604(v12, v23);
    }
  }
  return v5;
}
