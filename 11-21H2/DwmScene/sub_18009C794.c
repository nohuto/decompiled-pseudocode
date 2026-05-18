/*
 * XREFs of sub_18009C794 @ 0x18009C794
 * Callers:
 *     sub_18009BF94 @ 0x18009BF94 (sub_18009BF94.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 *     sub_180091954 @ 0x180091954 (sub_180091954.c)
 *     sub_1800938B8 @ 0x1800938B8 (sub_1800938B8.c)
 */

__int64 __fastcall sub_18009C794(float a1, float a2, char a3, int a4, __int64 *a5, __int64 *a6, __int64 a7)
{
  float v7; // xmm11_4
  float v8; // xmm6_4
  int v9; // xmm10_4
  __int64 result; // rax
  __int64 *v11; // r12
  float v12; // xmm12_4
  int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r8
  float v16; // xmm7_4
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r14
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // r10
  _QWORD *v43; // r14
  _QWORD *v44; // rcx
  __int64 v45; // rdi
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r15
  _QWORD *v51; // rbx
  _QWORD *v52; // r8
  _QWORD *v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // [rsp+28h] [rbp-91h]
  __int64 v57; // [rsp+30h] [rbp-89h]
  float v58; // [rsp+38h] [rbp-81h]
  __int64 v59; // [rsp+40h] [rbp-79h]
  int v60; // [rsp+108h] [rbp+4Fh]
  int v61; // [rsp+118h] [rbp+5Fh]

  v7 = (float)a4;
  v8 = (float)(a1 + a1) / (float)a4;
  if ( a3 )
    v9 = -1082130432;
  else
    v9 = 1065353216;
  LODWORD(result) = 0;
  *((float *)&v57 + 1) = a2;
  v60 = 0;
  do
  {
    v11 = a5;
    v12 = (float)(int)result;
    v13 = 0;
    v61 = 0;
    v58 = (float)((float)-v8 * (float)(int)result) - (float)-a1;
    do
    {
      v14 = v11[1];
      v15 = v11[2];
      v16 = (float)v13;
      *(float *)&v57 = (float)((float)v13 * v8) - a1;
      if ( v14 == v15 )
      {
        v17 = (v14 - *v11) / 12;
        if ( v17 == 0x1555555555555555LL )
          goto LABEL_45;
        v18 = 0xAAAAAAAAAAAAAAABuLL * ((v15 - *v11) >> 2);
        v19 = v18 >> 1;
        if ( v18 <= 0x1555555555555555LL - (v18 >> 1) )
        {
          v20 = v17 + 1;
          if ( v19 + v18 >= v17 + 1 )
            v20 = v19 + v18;
          if ( v20 > 0x1555555555555555LL )
LABEL_44:
            sub_1800120D4();
        }
        else
        {
          v20 = 0x1555555555555555LL;
        }
        v21 = sub_180011088(12 * v20);
        v22 = 3 * v17;
        v23 = v21;
        *(_QWORD *)(v21 + 4 * v22) = v57;
        *(float *)(v21 + 4 * v22 + 8) = v58;
        v24 = v11[1];
        v25 = *v11;
        if ( v14 != v24 )
        {
          sub_180091954(v25, v14, v21);
          v24 = v11[1];
          v23 = v27 + 4 * (v26 + 3);
          v25 = v14;
        }
        sub_180091954(v25, v24, v23);
        sub_1800938B8((__int64)v11, v28, v17 + 1, v20);
      }
      else
      {
        *(_QWORD *)v14 = v57;
        *(float *)(v14 + 8) = v58;
        v11[1] += 12LL;
      }
      LODWORD(v59) = 0;
      v29 = a6[1];
      v30 = a6[2];
      HIDWORD(v59) = v9;
      if ( v29 == v30 )
      {
        v31 = (v29 - *a6) / 12;
        if ( v31 == 0x1555555555555555LL )
LABEL_45:
          sub_180012170();
        v32 = 0xAAAAAAAAAAAAAAABuLL * ((v30 - *a6) >> 2);
        v33 = v32 >> 1;
        if ( v32 <= 0x1555555555555555LL - (v32 >> 1) )
        {
          v34 = v31 + 1;
          if ( v33 + v32 >= v31 + 1 )
            v34 = v33 + v32;
          if ( v34 > 0x1555555555555555LL )
            goto LABEL_44;
        }
        else
        {
          v34 = 0x1555555555555555LL;
        }
        v35 = sub_180011088(12 * v34);
        v36 = 3 * v31;
        v37 = v35;
        *(_QWORD *)(v35 + 4 * v36) = v59;
        *(_DWORD *)(v35 + 4 * v36 + 8) = 0;
        v38 = a6[1];
        v39 = *a6;
        if ( v29 != v38 )
        {
          sub_180091954(v39, v29, v35);
          v38 = a6[1];
          v37 = v41 + 4 * (v40 + 3);
          v39 = v29;
        }
        sub_180091954(v39, v38, v37);
        sub_1800938B8((__int64)a6, v42, v31 + 1, v34);
      }
      else
      {
        *(_QWORD *)v29 = v59;
        *(_DWORD *)(v29 + 8) = 0;
        a6[1] += 12LL;
      }
      v43 = *(_QWORD **)(a7 + 8);
      v44 = *(_QWORD **)(a7 + 16);
      *((float *)&v56 + 1) = v12 / v7;
      *(float *)&v56 = v16 / v7;
      if ( v43 == v44 )
      {
        v45 = ((__int64)v43 - *(_QWORD *)a7) >> 3;
        if ( v45 == 0x1FFFFFFFFFFFFFFFLL )
          sub_180012170();
        v46 = v45 + 1;
        v47 = ((__int64)v44 - *(_QWORD *)a7) >> 3;
        if ( v47 <= 0x1FFFFFFFFFFFFFFFLL - (v47 >> 1) )
        {
          v49 = (v47 >> 1) + v47;
          v48 = v45 + 1;
          if ( v49 >= v46 )
            v48 = v49;
          if ( v48 > 0x1FFFFFFFFFFFFFFFLL )
            goto LABEL_44;
        }
        else
        {
          v48 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v50 = v48;
        v51 = (_QWORD *)sub_180011088(8 * v48);
        v52 = v51;
        v51[v45] = v56;
        v53 = *(_QWORD **)(a7 + 8);
        v54 = *(_QWORD **)a7;
        if ( v43 != v53 )
        {
          sub_180091930(v54, v43, v51);
          v53 = *(_QWORD **)(a7 + 8);
          v52 = &v51[v45 + 1];
          v54 = v43;
        }
        sub_180091930(v54, v53, v52);
        if ( *(_QWORD *)a7 )
          sub_180010884(*(char **)a7, (*(_QWORD *)(a7 + 16) - *(_QWORD *)a7) & 0xFFFFFFFFFFFFFFF8uLL);
        v55 = &v51[v46];
        *(_QWORD *)a7 = v51;
        v11 = a5;
        *(_QWORD *)(a7 + 8) = v55;
        *(_QWORD *)(a7 + 16) = &v51[v50];
      }
      else
      {
        *v43 = v56;
        *(_QWORD *)(a7 + 8) += 8LL;
      }
      v13 = v61 + 1;
      v61 = v13;
    }
    while ( v13 <= (unsigned int)a4 );
    result = (unsigned int)(v60 + 1);
    v60 = result;
  }
  while ( (unsigned int)result <= a4 );
  return result;
}
