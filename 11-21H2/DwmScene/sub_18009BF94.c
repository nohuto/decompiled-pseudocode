/*
 * XREFs of sub_18009BF94 @ 0x18009BF94
 * Callers:
 *     sub_18009BE80 @ 0x18009BE80 (sub_18009BE80.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_18005C81C @ 0x18005C81C (sub_18005C81C.c)
 *     sub_18009BA90 @ 0x18009BA90 (sub_18009BA90.c)
 *     sub_18009BBC0 @ 0x18009BBC0 (sub_18009BBC0.c)
 *     sub_18009BEB0 @ 0x18009BEB0 (sub_18009BEB0.c)
 *     sub_18009C794 @ 0x18009C794 (sub_18009C794.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_18009BF94(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  double v7; // xmm0_8
  __int64 *v8; // rsi
  unsigned int v9; // r12d
  char v10; // bl
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // r13d
  char *v16; // rdi
  unsigned int v17; // eax
  int v18; // edx
  char *v19; // rbx
  char *v20; // rsi
  int v21; // ecx
  __int16 v22; // ax
  __int16 v23; // ax
  char *v24; // rbx
  __int64 v25; // r13
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  char *v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  char *v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  char *v36; // r12
  unsigned int v37; // edx
  char *v38; // rbx
  char *v39; // rsi
  __int16 v40; // cx
  unsigned int v41; // eax
  __int16 v42; // ax
  char *v43; // rbx
  __int64 v44; // r13
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  char *v47; // r12
  __int64 v48; // r13
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  char *v51; // r12
  unsigned int v52; // edx
  __int64 v53; // r13
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  char *v56; // r12
  __int64 v57; // r8
  __int128 v59; // [rsp+58h] [rbp-91h] BYREF
  char *v60; // [rsp+68h] [rbp-81h]
  unsigned int v61; // [rsp+70h] [rbp-79h]
  unsigned int v62; // [rsp+74h] [rbp-75h]
  __int64 v63; // [rsp+78h] [rbp-71h]
  int v64; // [rsp+80h] [rbp-69h]
  int v65; // [rsp+84h] [rbp-65h]
  int v66; // [rsp+88h] [rbp-61h]
  __int64 v67; // [rsp+90h] [rbp-59h]
  int v68; // [rsp+98h] [rbp-51h]
  __int128 v69; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-39h]
  __int128 v71; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-21h]
  __int128 v73; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-9h]

  v8 = a1;
  v68 = 0;
  sub_18005C81C();
  v9 = (int)v7;
  v67 = (unsigned int)(int)v7;
  v73 = 0LL;
  v74 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v10 = a5;
  LOBYTE(v11) = a5;
  sub_18009C794(v13, v12, v11, (int)v7, (__int64)&v73, (__int64)&v71, (__int64)&v69);
  v15 = (int)v7 + 1;
  v64 = v15;
  v59 = 0LL;
  v16 = 0LL;
  v60 = 0LL;
  if ( v10 )
  {
    v37 = 1;
    a6 = 1;
    if ( v9 )
    {
      LODWORD(v14) = (int)v7 + 1;
      a7 = v14;
      v38 = (char *)*((_QWORD *)&v59 + 1);
      v39 = (char *)v59;
      do
      {
        v40 = v14 - v15;
        v62 = v14 - v15;
        if ( v37 > 1 )
        {
          LOWORD(a5) = v14 - v15;
          if ( v38 == v16 )
          {
            sub_18009BA90((__int64 *)&v59, v38, &a5);
            v16 = v60;
            v38 = (char *)*((_QWORD *)&v59 + 1);
            v39 = (char *)v59;
            v40 = v62;
            LODWORD(v14) = a7;
          }
          else
          {
            *(_WORD *)v38 = v40;
            v38 += 2;
            *((_QWORD *)&v59 + 1) = v38;
          }
        }
        LOWORD(v41) = 0;
        a5 = 0;
        do
        {
          v42 = v40 + v41;
          LOWORD(v66) = v42;
          if ( v38 == v16 )
          {
            v44 = (v38 - v39) >> 1;
            if ( v44 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v45 = (v16 - v39) >> 1;
            if ( v45 <= 0x7FFFFFFFFFFFFFFFLL - (v45 >> 1) )
            {
              v46 = v44 + 1;
              if ( v45 + (v45 >> 1) >= v44 + 1 )
                v46 = v45 + (v45 >> 1);
              if ( v46 > 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_104;
            }
            else
            {
              v46 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v63 = 2 * v46;
            v47 = (char *)sub_180011088(2 * v46);
            *(_WORD *)&v47[2 * v44] = v66;
            sub_18009BBC0(v39, (__int64)v38, v47);
            if ( v39 )
              sub_180010884(v39, 2 * v45);
            v39 = v47;
            *(_QWORD *)&v59 = v47;
            v43 = &v47[2 * v44 + 2];
            v16 = &v47[v63];
            v60 = &v47[v63];
            LODWORD(v14) = a7;
            v9 = v67;
          }
          else
          {
            *(_WORD *)v38 = v42;
            v43 = v38 + 2;
          }
          *((_QWORD *)&v59 + 1) = v43;
          LOWORD(v65) = a5 + v14;
          if ( v43 == v16 )
          {
            v48 = (v43 - v39) >> 1;
            if ( v48 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v49 = (v16 - v39) >> 1;
            if ( v49 <= 0x7FFFFFFFFFFFFFFFLL - (v49 >> 1) )
            {
              v50 = v48 + 1;
              if ( v49 + (v49 >> 1) >= v48 + 1 )
                v50 = v49 + (v49 >> 1);
              if ( v50 > 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_104;
            }
            else
            {
              v50 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v63 = 2 * v50;
            v51 = (char *)sub_180011088(2 * v50);
            *(_WORD *)&v51[2 * v48] = v65;
            sub_18009BBC0(v39, (__int64)v43, v51);
            if ( v39 )
              sub_180010884(v39, 2 * v49);
            v39 = v51;
            *(_QWORD *)&v59 = v51;
            v38 = &v51[2 * v48 + 2];
            v16 = &v51[v63];
            v60 = &v51[v63];
            LODWORD(v14) = a7;
            v9 = v67;
          }
          else
          {
            *(_WORD *)v43 = a5 + v14;
            v38 = v43 + 2;
          }
          *((_QWORD *)&v59 + 1) = v38;
          v41 = a5 + 1;
          a5 = v41;
          v40 = v62;
        }
        while ( v41 <= v9 );
        v52 = a6;
        if ( a6 < v9 )
        {
          LOWORD(v61) = v14 + v9;
          if ( v38 == v16 )
          {
            v53 = (v38 - v39) >> 1;
            if ( v53 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_105:
              sub_180012170();
            v54 = (v16 - v39) >> 1;
            if ( v54 <= 0x7FFFFFFFFFFFFFFFLL - (v54 >> 1) )
            {
              v55 = v53 + 1;
              if ( v54 + (v54 >> 1) >= v53 + 1 )
                v55 = v54 + (v54 >> 1);
              if ( v55 > 0x7FFFFFFFFFFFFFFFLL )
LABEL_104:
                sub_1800120D4();
            }
            else
            {
              v55 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v63 = 2 * v55;
            v56 = (char *)sub_180011088(2 * v55);
            *(_WORD *)&v56[2 * v53] = v61;
            sub_18009BBC0(v39, (__int64)v38, v56);
            if ( v39 )
              sub_180010884(v39, 2 * v54);
            v39 = v56;
            *(_QWORD *)&v59 = v56;
            v38 = &v56[2 * v53 + 2];
            v16 = &v56[v63];
            v60 = &v56[v63];
            v52 = a6;
            LODWORD(v14) = a7;
            v9 = v67;
          }
          else
          {
            *(_WORD *)v38 = v14 + v9;
            v38 += 2;
          }
          *((_QWORD *)&v59 + 1) = v38;
        }
        v37 = v52 + 1;
        a6 = v37;
        v15 = v64;
        v14 = (unsigned int)(v64 + v14);
        a7 = v14;
      }
      while ( v37 <= v9 );
LABEL_94:
      v8 = a1;
    }
  }
  else
  {
    v17 = 1;
    a6 = 1;
    if ( v9 )
    {
      v18 = (int)v7 + 1;
      a7 = v18;
      v19 = (char *)*((_QWORD *)&v59 + 1);
      v20 = (char *)v59;
      while ( 1 )
      {
        v14 = (unsigned int)(v18 - v15);
        v62 = v18 - v15;
        if ( v17 > 1 )
        {
          LOWORD(a5) = v18 - v15 + v9;
          if ( v19 == v16 )
          {
            sub_18009BA90((__int64 *)&v59, v19, &a5);
            v16 = v60;
            v19 = (char *)*((_QWORD *)&v59 + 1);
            v20 = (char *)v59;
            v18 = a7;
            v14 = v62;
          }
          else
          {
            *(_WORD *)v19 = v18 - v15 + v9;
            v19 += 2;
            *((_QWORD *)&v59 + 1) = v19;
          }
          v17 = a6;
        }
        v21 = v15;
        a5 = v15;
        if ( v15 )
        {
          v22 = v9;
          v61 = v9;
          do
          {
            v23 = v14 + v22;
            LOWORD(v65) = v23;
            if ( v19 == v16 )
            {
              v25 = (v19 - v20) >> 1;
              if ( v25 == 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_105;
              v26 = (v16 - v20) >> 1;
              if ( v26 <= 0x7FFFFFFFFFFFFFFFLL - (v26 >> 1) )
              {
                v27 = v25 + 1;
                if ( (v26 >> 1) + v26 >= v25 + 1 )
                  v27 = (v26 >> 1) + v26;
                if ( v27 > 0x7FFFFFFFFFFFFFFFLL )
                  goto LABEL_104;
              }
              else
              {
                v27 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v63 = 2 * v27;
              v28 = (char *)sub_180011088(2 * v27);
              *(_WORD *)&v28[2 * v25] = v65;
              sub_18009BBC0(v20, (__int64)v19, v28);
              if ( v20 )
                sub_180010884(v20, 2 * v26);
              v20 = v28;
              *(_QWORD *)&v59 = v28;
              v24 = &v28[2 * v25 + 2];
              v16 = &v28[v63];
              v60 = &v28[v63];
              v21 = a5;
              v18 = a7;
            }
            else
            {
              *(_WORD *)v19 = v23;
              v24 = v19 + 2;
            }
            *((_QWORD *)&v59 + 1) = v24;
            LOWORD(v66) = v18 + v61;
            if ( v24 == v16 )
            {
              v29 = (v24 - v20) >> 1;
              if ( v29 == 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_105;
              v30 = (v16 - v20) >> 1;
              if ( v30 <= 0x7FFFFFFFFFFFFFFFLL - (v30 >> 1) )
              {
                v31 = v29 + 1;
                if ( (v30 >> 1) + v30 >= v29 + 1 )
                  v31 = (v30 >> 1) + v30;
                if ( v31 > 0x7FFFFFFFFFFFFFFFLL )
                  goto LABEL_104;
              }
              else
              {
                v31 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v63 = 2 * v31;
              v32 = (char *)sub_180011088(2 * v31);
              *(_WORD *)&v32[2 * v29] = v66;
              sub_18009BBC0(v20, (__int64)v24, v32);
              if ( v20 )
                sub_180010884(v20, 2 * v30);
              v20 = v32;
              *(_QWORD *)&v59 = v32;
              v19 = &v32[2 * v29 + 2];
              v16 = &v32[v63];
              v60 = &v32[v63];
              v21 = a5;
              v18 = a7;
            }
            else
            {
              *(_WORD *)v24 = v18 + v61;
              v19 = v24 + 2;
            }
            *((_QWORD *)&v59 + 1) = v19;
            a5 = --v21;
            v22 = --v61;
            v14 = v62;
          }
          while ( v21 );
          v9 = v67;
          v17 = a6;
          v15 = v64;
        }
        if ( v17 < v9 )
        {
          if ( v19 == v16 )
          {
            v33 = (v19 - v20) >> 1;
            if ( v33 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v34 = (v16 - v20) >> 1;
            if ( v34 <= 0x7FFFFFFFFFFFFFFFLL - (v34 >> 1) )
            {
              v35 = v33 + 1;
              if ( (v34 >> 1) + v34 >= v33 + 1 )
                v35 = (v34 >> 1) + v34;
              if ( v35 > 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_104;
            }
            else
            {
              v35 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v63 = 2 * v35;
            v36 = (char *)sub_180011088(2 * v35);
            *(_WORD *)&v36[2 * v33] = a7;
            sub_18009BBC0(v20, (__int64)v19, v36);
            if ( v20 )
              sub_180010884(v20, 2 * v34);
            v20 = v36;
            *(_QWORD *)&v59 = v36;
            v19 = &v36[2 * v33 + 2];
            v16 = &v36[v63];
            v60 = &v36[v63];
            v9 = v67;
            v18 = a7;
            v17 = a6;
            v15 = v64;
          }
          else
          {
            *(_WORD *)v19 = v18;
            v19 += 2;
          }
          *((_QWORD *)&v59 + 1) = v19;
        }
        a6 = ++v17;
        v18 += v15;
        a7 = v18;
        if ( v17 > v9 )
          goto LABEL_94;
      }
    }
  }
  sub_18009BEB0(v8, a2, v14, (__int64 *)&v73, &v59, (__int64 *)&v71, (__int64 *)&v69);
  v68 = 1;
  sub_18004E560(*v8, 0LL, v57);
  if ( (_QWORD)v59 )
    sub_180010884((char *)v59, 2 * ((__int64)&v60[-v59] >> 1));
  if ( (_QWORD)v69 )
    sub_180010884((char *)v69, (v70 - v69) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_QWORD)v71 )
    sub_180010884((char *)v71, 4 * ((v72 - (__int64)v71) >> 2));
  if ( (_QWORD)v73 )
    sub_180010884((char *)v73, 4 * ((v74 - (__int64)v73) >> 2));
  return v8;
}
