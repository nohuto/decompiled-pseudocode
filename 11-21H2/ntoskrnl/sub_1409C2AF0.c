/*
 * XREFs of sub_1409C2AF0 @ 0x1409C2AF0
 * Callers:
 *     sub_1409C0EC0 @ 0x1409C0EC0 (sub_1409C0EC0.c)
 * Callees:
 *     sub_1409C45C0 @ 0x1409C45C0 (sub_1409C45C0.c)
 */

__int64 __fastcall sub_1409C2AF0(_WORD **a1, __int64 a2, __int64 *a3, int a4)
{
  _WORD *v4; // rax
  _DWORD *v5; // r14
  __int64 v6; // r12
  __int64 *v7; // rbx
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // r13
  unsigned int v22; // r10d
  unsigned __int8 *v23; // rsi
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned __int8 *v27; // rsi
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  int v30; // eax
  __int16 v31; // r15
  unsigned int v32; // ebp
  unsigned int v33; // esi
  unsigned int v34; // r9d
  unsigned __int8 *v35; // r8
  unsigned int v36; // r11d
  unsigned int v37; // r10d
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int8 *v41; // r8
  unsigned __int64 v42; // rdx
  int v43; // eax
  unsigned __int16 v44; // r15
  __int64 v45; // rcx
  unsigned int v46; // r8d
  unsigned int v47; // r13d
  __int64 v48; // rcx
  unsigned int v49; // r10d
  unsigned __int8 *v50; // rsi
  unsigned int v51; // r9d
  unsigned int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // r11
  unsigned __int8 *v55; // rsi
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int16 v58; // r9
  unsigned int v59; // esi
  unsigned int v60; // r10d
  unsigned __int8 *v61; // r8
  unsigned int v62; // ebp
  unsigned int v63; // r11d
  unsigned int v64; // r11d
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int8 *v67; // r8
  unsigned __int64 v68; // rdx
  int v69; // eax
  __int16 v70; // r9
  unsigned int v71; // ebx
  unsigned __int8 *v72; // rsi
  unsigned int v73; // r8d
  unsigned int v74; // r10d
  int v75; // r9d
  unsigned int v76; // r9d
  __int64 v77; // rax
  __int64 v78; // r11
  unsigned __int8 *v79; // rsi
  unsigned __int64 v80; // rdx
  int v81; // eax
  unsigned int v82; // r10d
  unsigned int v83; // ecx
  __int64 v84; // rax
  unsigned int v85; // r8d
  unsigned __int8 *v86; // r8
  unsigned int v87; // edx
  unsigned int v88; // ebp
  unsigned int v89; // ebx
  unsigned int v90; // esi
  int v91; // r9d
  unsigned int v92; // r9d
  __int64 v93; // rax
  __int64 v94; // r11
  unsigned __int8 *v95; // r8
  unsigned __int64 v96; // rdx
  int v97; // eax
  int v98; // eax
  unsigned int v99; // r9d
  __int64 v100; // rdx
  const void *v101; // rsi
  void *v102; // rdi
  unsigned int v103; // [rsp+40h] [rbp-78h]
  __int64 v104; // [rsp+48h] [rbp-70h]
  __int64 v105; // [rsp+50h] [rbp-68h]
  unsigned int v109; // [rsp+D8h] [rbp+20h]

  v4 = *a1;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = **a1 & 0x1F;
  LODWORD(v4) = (1 << v8) - ((unsigned __int8)*v4 >> 5) - 246;
  _BitScanReverse((unsigned int *)&v9, (unsigned int)v4);
  v103 = 16 * (v8 + 20);
  v10 = (unsigned int)v4 & ((_DWORD)v4 - 1);
  result = sub_1409C45C0((_DWORD)v5, v103, (_DWORD)a3, a4, a2, (__int64)(v5 + 1174));
  if ( (int)result < 0 )
    return result;
  v14 = v9 + 1;
  if ( !v10 )
    v14 = v9;
  result = sub_1409C45C0((_DWORD)v5, v14 + 232, v12, v13, v6, (__int64)(v5 + 5270));
  if ( (int)result < 0 )
    return result;
  v15 = *(_DWORD *)(v6 + 8);
  v16 = *(_DWORD *)(v6 + 12);
  if ( v15 >= v16 )
    return 0LL;
  v17 = *((_DWORD *)v7 + 3);
  v18 = *((_DWORD *)v7 + 2);
  v109 = v17;
  while ( v18 < v17 )
  {
    v19 = *(_QWORD *)v6;
    v20 = 12;
    v21 = 0LL;
    v104 = *(_QWORD *)v6;
    v22 = 8 - (v15 & 7);
    v23 = (unsigned __int8 *)(*(_QWORD *)v6 + ((unsigned __int64)v15 >> 3));
    if ( v15 + 12 > v16 && (v20 = v16 - v15, v16 == v15) )
    {
      v24 = 0;
      v20 = 0;
    }
    else
    {
      v25 = *v23;
      v26 = v22;
      if ( v22 >= v20 )
        v26 = v20;
      v27 = v23 + 1;
      v24 = *(_DWORD *)&byte_14001BB70[4 * v26] & (v25 >> (v15 & 7));
      v28 = v20 - (unsigned int)v26;
      if ( (unsigned int)v28 >= 8 )
      {
        v29 = (unsigned __int64)(unsigned int)v28 >> 3;
        do
        {
          v30 = *v27 << v22;
          LOBYTE(v22) = v22 + 8;
          v24 |= v30;
          v28 = (unsigned int)(v28 - 8);
          ++v27;
          --v29;
        }
        while ( v29 );
        v15 = *(_DWORD *)(v6 + 8);
      }
      if ( (_DWORD)v28 )
        v24 |= (*v27 & *(_DWORD *)&byte_14001BB70[4 * v28]) << v22;
      v19 = *(_QWORD *)v6;
      v15 += v20;
    }
    v31 = *(_WORD *)(2LL * v24);
    v15 += (v31 & 0xF) - v20;
    *(_DWORD *)(v6 + 8) = v15;
    if ( v31 < 0 )
    {
      v32 = *(_DWORD *)(v6 + 12);
      v33 = v15;
      do
      {
        v34 = 6;
        v35 = (unsigned __int8 *)(v19 + ((unsigned __int64)v33 >> 3));
        v36 = 8 - (v33 & 7);
        if ( v33 + 6 > v32 && (v34 = v32 - v33, v32 == v33) )
        {
          v37 = 0;
          v34 = 0;
        }
        else
        {
          v38 = *v35;
          v39 = v36;
          if ( v36 >= v34 )
            v39 = v34;
          v40 = v34 - (unsigned int)v39;
          v41 = v35 + 1;
          v37 = *(_DWORD *)&byte_14001BB70[4 * v39] & (v38 >> (v33 & 7));
          if ( (unsigned int)v40 >= 8 )
          {
            v42 = (unsigned __int64)(unsigned int)v40 >> 3;
            do
            {
              v43 = *v41 << v36;
              LOBYTE(v36) = v36 + 8;
              v37 |= v43;
              v40 = (unsigned int)(v40 - 8);
              ++v41;
              --v42;
            }
            while ( v42 );
            v33 = v15;
          }
          if ( (_DWORD)v40 )
            v37 |= (*v41 & *(_DWORD *)&byte_14001BB70[4 * v40]) << v36;
          v19 = v104;
          v33 += v34;
        }
        v21 += 2 * (v31 & 0xFFFFFFFFFFFFFFF0uLL);
        v31 = *(_WORD *)(v21 + 2LL * v37);
        v15 = v33 + (v31 & 0xF) - v34;
        v33 = v15;
      }
      while ( v31 < 0 );
      v6 = a2;
      v5 = a1;
      v7 = a3;
      *(_DWORD *)(a2 + 8) = v15;
    }
    v44 = (unsigned __int16)v31 >> 4;
    if ( v44 < 0x100u )
    {
      v45 = *((unsigned int *)v7 + 2);
      *(_BYTE *)(v45 + *v7) = v44;
      v18 = v45 + 1;
      goto LABEL_117;
    }
    if ( (v44 & 0xF) == 0xF )
    {
      v46 = 12;
      v47 = *(_DWORD *)(v6 + 12);
      v48 = 0LL;
      v105 = 0LL;
      v49 = 8 - (v15 & 7);
      v50 = (unsigned __int8 *)(v19 + ((unsigned __int64)v15 >> 3));
      if ( v15 + 12 > v47 && (v46 = v47 - v15, v47 == v15) )
      {
        v51 = 0;
        v46 = 0;
      }
      else
      {
        v52 = *v50;
        v53 = v49;
        if ( v49 >= v46 )
          v53 = v46;
        v54 = v46 - (unsigned int)v53;
        v55 = v50 + 1;
        v51 = *(_DWORD *)&byte_14001BB70[4 * v53] & (v52 >> (v15 & 7));
        if ( (unsigned int)v54 >= 8 )
        {
          v56 = (unsigned __int64)(unsigned int)v54 >> 3;
          do
          {
            v57 = *v55 << v49;
            LOBYTE(v49) = v49 + 8;
            v51 |= v57;
            v54 = (unsigned int)(v54 - 8);
            ++v55;
            --v56;
          }
          while ( v56 );
          v15 = *(_DWORD *)(v6 + 8);
        }
        if ( (_DWORD)v54 )
          v51 |= (*v55 & *(_DWORD *)&byte_14001BB70[4 * v54]) << v49;
        v19 = v104;
        v15 += v46;
        v48 = 0LL;
      }
      v58 = *(_WORD *)(2LL * v51);
      v15 += (v58 & 0xF) - v46;
      *(_DWORD *)(v6 + 8) = v15;
      if ( v58 < 0 )
      {
        v59 = v15;
        do
        {
          v60 = 6;
          v61 = (unsigned __int8 *)(v19 + ((unsigned __int64)v59 >> 3));
          v62 = 8 - (v59 & 7);
          if ( v59 + 6 > v47 && (v60 = v47 - v59, v47 == v59) )
          {
            v63 = 0;
            v60 = 0;
          }
          else
          {
            v64 = *v61;
            v65 = v62;
            if ( v62 >= v60 )
              v65 = v60;
            v66 = v60 - (unsigned int)v65;
            v67 = v61 + 1;
            v63 = *(_DWORD *)&byte_14001BB70[4 * v65] & (v64 >> (v59 & 7));
            if ( (unsigned int)v66 >= 8 )
            {
              v68 = (unsigned __int64)(unsigned int)v66 >> 3;
              do
              {
                v69 = *v67 << v62;
                LOBYTE(v62) = v62 + 8;
                v63 |= v69;
                v66 = (unsigned int)(v66 - 8);
                ++v67;
                --v68;
              }
              while ( v68 );
              v59 = v15;
            }
            if ( (_DWORD)v66 )
              v63 |= (*v67 & *(_DWORD *)&byte_14001BB70[4 * v66]) << v62;
            v48 = v105;
            v59 += v60;
            v19 = v104;
          }
          v48 += 2 * (v58 & 0xFFFFFFFFFFFFFFF0uLL);
          v105 = v48;
          v58 = *(_WORD *)(v48 + 2LL * v63);
          v15 = v59 + (v58 & 0xF) - v60;
          v59 = v15;
        }
        while ( v58 < 0 );
        v6 = a2;
        v5 = a1;
        *(_DWORD *)(a2 + 8) = v15;
      }
      v70 = (unsigned __int16)v58 >> 4;
      if ( (unsigned __int8)v70 <= 0xE8u )
      {
        v82 = ((**(unsigned __int16 **)v5 >> 5) & 7) + (unsigned __int8)v70 + 15;
      }
      else
      {
        v71 = (unsigned __int8)v70 - 232;
        v72 = (unsigned __int8 *)(v104 + ((unsigned __int64)v15 >> 3));
        v73 = v71;
        v74 = 8 - (v15 & 7);
        if ( v15 + v71 > v47 && (v73 = v47 - v15, v47 == v15) )
        {
          v75 = 0;
          v73 = 0;
        }
        else
        {
          v76 = *v72;
          v77 = v74;
          if ( v74 >= v73 )
            v77 = v73;
          v78 = v73 - (unsigned int)v77;
          v79 = v72 + 1;
          v75 = *(_DWORD *)&byte_14001BB70[4 * v77] & (v76 >> (v15 & 7));
          if ( (unsigned int)v78 >= 8 )
          {
            v80 = (unsigned __int64)(unsigned int)v78 >> 3;
            do
            {
              v81 = *v79 << v74;
              LOBYTE(v74) = v74 + 8;
              v75 |= v81;
              v78 = (unsigned int)(v78 - 8);
              ++v79;
              --v80;
            }
            while ( v80 );
            v15 = *(_DWORD *)(v6 + 8);
          }
          if ( (_DWORD)v78 )
            v75 |= (*v79 & *(_DWORD *)&byte_14001BB70[4 * v78]) << v74;
          v15 += v73;
          *(_DWORD *)(v6 + 8) = v15;
        }
        if ( v73 < v71 )
          return 3221226050LL;
        v82 = (1 << v71) + v75 + ((**(unsigned __int16 **)v5 >> 5) & 7) + 246;
      }
      v83 = v44;
    }
    else
    {
      v83 = v44;
      v82 = (v44 & 0xF) + ((**(unsigned __int16 **)v5 >> 5) & 7);
    }
    if ( v44 >= 0x140u )
    {
      if ( v83 >= v103 )
        return 3221226050LL;
      if ( v44 <= 0x14Fu )
      {
        v85 = 1;
      }
      else
      {
        v86 = (unsigned __int8 *)(v104 + ((unsigned __int64)v15 >> 3));
        v87 = *(_DWORD *)(v6 + 12);
        v88 = (int)(v83 - 320) / 16;
        v89 = 8 - (v15 & 7);
        v90 = v88;
        if ( v15 + v88 > v87 && (v90 = v87 - v15, v87 == v15) )
        {
          v91 = 0;
          v90 = 0;
        }
        else
        {
          v92 = *v86;
          v93 = v89;
          if ( v89 >= v90 )
            v93 = v90;
          v94 = v90 - (unsigned int)v93;
          v95 = v86 + 1;
          v91 = *(_DWORD *)&byte_14001BB70[4 * v93] & (v92 >> (v15 & 7));
          if ( (unsigned int)v94 >= 8 )
          {
            v96 = (unsigned __int64)(unsigned int)v94 >> 3;
            do
            {
              v97 = *v95 << v89;
              LOBYTE(v89) = v89 + 8;
              v91 |= v97;
              v94 = (unsigned int)(v94 - 8);
              ++v95;
              --v96;
            }
            while ( v96 );
            v15 = *(_DWORD *)(v6 + 8);
          }
          if ( (_DWORD)v94 )
            v91 |= (*v95 & *(_DWORD *)&byte_14001BB70[4 * v94]) << v89;
          *(_DWORD *)(v6 + 8) = v15 + v90;
        }
        if ( v90 < v88 )
          return 3221226050LL;
        v85 = v91 + (1 << v88);
      }
LABEL_107:
      v5[5] = v5[4];
LABEL_108:
      v5[4] = v5[3];
      goto LABEL_109;
    }
    v84 = (unsigned int)((int)(v83 - 256) / 16);
    v85 = v5[v84 + 2];
    if ( !(_DWORD)v84 )
      goto LABEL_110;
    if ( (unsigned int)v84 >= 3 )
      goto LABEL_107;
    if ( (unsigned int)v84 >= 2 )
      goto LABEL_108;
LABEL_109:
    v98 = v5[2];
    v5[2] = v85;
    v5[3] = v98;
LABEL_110:
    v7 = a3;
    v99 = *((_DWORD *)a3 + 2);
    if ( v99 + v82 > v109 || v99 < v85 || !v85 )
      return 3221226050LL;
    if ( v82 > v85 )
    {
      v100 = *a3;
      do
      {
        v101 = (const void *)(v100 + v99 - v85);
        v102 = (void *)(v100 + v99);
        v82 -= v85;
        v99 += v85;
        qmemcpy(v102, v101, v85);
      }
      while ( v82 > v85 );
    }
    v18 = v99 + v82;
    qmemcpy((void *)(*a3 + v99), (const void *)(*a3 + v99 - v85), v82);
    v15 = *(_DWORD *)(v6 + 8);
LABEL_117:
    v16 = *(_DWORD *)(v6 + 12);
    v17 = v109;
    *((_DWORD *)v7 + 2) = v18;
    if ( v15 >= v16 )
      return 0LL;
  }
  if ( v15 < v16 && *((_DWORD *)v7 + 2) >= *((_DWORD *)v7 + 3) )
    return 3221226050LL;
  return 0LL;
}
