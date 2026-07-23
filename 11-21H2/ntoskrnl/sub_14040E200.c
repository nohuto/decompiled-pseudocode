/*
 * XREFs of sub_14040E200 @ 0x14040E200
 * Callers:
 *     sub_14040C7A0 @ 0x14040C7A0 (sub_14040C7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040E200(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int128 v6; // rax
  __int64 v7; // rdi
  unsigned __int128 v8; // kr00_16
  unsigned __int128 v9; // kr10_16
  unsigned __int128 v10; // kr20_16
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // kr30_8
  unsigned __int128 v13; // kr50_16
  unsigned __int128 v14; // kr70_16
  unsigned __int128 v15; // kr90_16
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // krA0_8
  unsigned __int128 v18; // krC0_16
  unsigned __int128 v19; // krE0_16
  unsigned __int128 v20; // kr100_16
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // kr110_8
  unsigned __int128 v23; // kr130_16
  unsigned __int128 v24; // kr150_16
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r8
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int128 v30; // rax
  unsigned __int128 v31; // kr190_16
  unsigned __int128 v32; // kr1D0_16
  __int64 v33; // rdi
  unsigned __int128 v34; // rax
  unsigned __int128 v35; // kr1F0_16
  unsigned __int128 v36; // kr230_16
  __int64 v37; // rbp
  unsigned __int128 v38; // rax
  unsigned __int128 v39; // kr250_16
  __int64 v40; // r10
  unsigned __int128 v41; // rax
  unsigned __int128 v42; // kr2B0_16
  unsigned __int128 v43; // kr2D0_16
  unsigned __int128 v44; // rax
  unsigned __int128 v45; // kr2E0_16
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // r14
  bool v48; // cf
  unsigned __int64 v49; // r15
  unsigned __int128 v50; // kr2F0_16
  __int64 v51; // r10
  unsigned __int128 v52; // kr40_16
  __int64 v53; // kr300_8
  __int64 v54; // rcx

  v5 = *a2;
  v6 = *a2 * (unsigned __int128)*a3;
  v7 = v6;
  v8 = v5 * (unsigned __int128)a3[1] + *((unsigned __int64 *)&v6 + 1);
  v9 = v5 * (unsigned __int128)a3[2] + *((unsigned __int64 *)&v8 + 1);
  v10 = v5 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v9 + 1);
  v11 = a2[1];
  v12 = v11 * *a3 + v8;
  v13 = ((v11 * (unsigned __int128)*a3 + (unsigned __int64)v8) >> 64)
      + v11 * (unsigned __int128)a3[1]
      + (unsigned __int64)v9;
  v14 = *((unsigned __int64 *)&v13 + 1) + v11 * (unsigned __int128)a3[2] + (unsigned __int64)v10;
  v15 = *((unsigned __int64 *)&v14 + 1) + v11 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v10 + 1);
  v16 = a2[2];
  v17 = v16 * *a3 + v13;
  v18 = ((v16 * (unsigned __int128)*a3 + (unsigned __int64)v13) >> 64)
      + v16 * (unsigned __int128)a3[1]
      + (unsigned __int64)v14;
  v19 = *((unsigned __int64 *)&v18 + 1) + v16 * (unsigned __int128)a3[2] + (unsigned __int64)v15;
  v20 = *((unsigned __int64 *)&v19 + 1) + v16 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v15 + 1);
  v21 = a2[3];
  v22 = v21 * *a3 + v18;
  v23 = ((v21 * (unsigned __int128)*a3 + (unsigned __int64)v18) >> 64)
      + v21 * (unsigned __int128)a3[1]
      + (unsigned __int64)v19;
  v24 = *((unsigned __int64 *)&v23 + 1) + v21 * (unsigned __int128)a3[2] + (unsigned __int64)v20;
  v25 = *((_QWORD *)&v24 + 1) + v21 * a3[3] + *((_QWORD *)&v20 + 1);
  v26 = (*((unsigned __int64 *)&v24 + 1) + v21 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v20 + 1)) >> 64;
  v27 = *(_QWORD *)(a1 + 32);
  v28 = (unsigned __int64 *)(a1 + 128);
  v29 = v27 * v6;
  v30 = (unsigned __int64)(v27 * v6) * (unsigned __int128)*v28;
  v31 = (unsigned __int64)__CFADD__((_QWORD)v30, v7) + *((_QWORD *)&v30 + 1) + v29 * (unsigned __int128)v28[1] + v12;
  v32 = ((*((unsigned __int64 *)&v31 + 1) + v29 * (unsigned __int128)v28[2] + v17) >> 64)
      + v29 * (unsigned __int128)v28[3]
      + v22;
  v33 = *((_QWORD *)&v32 + 1);
  v34 = (unsigned __int64)(v27 * v31) * (unsigned __int128)*v28;
  v35 = (unsigned __int64)__CFADD__((_QWORD)v34, (_QWORD)v31)
      + *((_QWORD *)&v34 + 1)
      + (unsigned __int64)(v27 * v31) * (unsigned __int128)v28[1]
      + *((_QWORD *)&v31 + 1)
      + v29 * v28[2]
      + v17;
  v36 = ((*((unsigned __int64 *)&v35 + 1)
        + (unsigned __int64)(v27 * v31) * (unsigned __int128)v28[2]
        + (unsigned __int64)v32) >> 64)
      + (unsigned __int64)(v27 * v31) * (unsigned __int128)v28[3]
      + (unsigned __int64)v23;
  v37 = *((_QWORD *)&v36 + 1);
  v38 = (unsigned __int64)(v27 * v35) * (unsigned __int128)*v28;
  v39 = (unsigned __int64)__CFADD__((_QWORD)v38, (_QWORD)v35)
      + *((_QWORD *)&v38 + 1)
      + (unsigned __int64)(v27 * v35) * (unsigned __int128)v28[1]
      + *((_QWORD *)&v35 + 1)
      + v27 * (_QWORD)v31 * v28[2]
      + (unsigned __int64)v32;
  v40 = (((*((unsigned __int64 *)&v39 + 1)
         + (unsigned __int64)(v27 * v35) * (unsigned __int128)v28[2]
         + (unsigned __int64)v36) >> 64)
       + (unsigned __int64)(v27 * v35) * (unsigned __int128)v28[3]
       + (unsigned __int64)v24) >> 64;
  v41 = (unsigned __int64)(v27 * v39) * (unsigned __int128)*v28;
  v42 = (unsigned __int64)__CFADD__((_QWORD)v41, (_QWORD)v39)
      + *((_QWORD *)&v41 + 1)
      + (unsigned __int64)(v27 * v39) * (unsigned __int128)v28[1]
      + *((_QWORD *)&v39 + 1)
      + v27 * (_QWORD)v35 * v28[2]
      + (unsigned __int64)v36;
  v43 = *((unsigned __int64 *)&v42 + 1)
      + (unsigned __int64)(v27 * v39) * (unsigned __int128)v28[2]
      + (unsigned __int64)(((*((unsigned __int64 *)&v39 + 1)
                           + (unsigned __int64)(v27 * v35) * (unsigned __int128)v28[2]
                           + (unsigned __int64)v36) >> 64)
                         + v27 * v35 * v28[3]
                         + v24);
  v44 = (unsigned __int64)(v27 * v39) * (unsigned __int128)v28[3];
  v45 = *((unsigned __int64 *)&v43 + 1) + v44 + v25;
  v46 = *((_QWORD *)&v36 + 1) + __CFADD__(*((_QWORD *)&v32 + 1), (_QWORD)v42) + (_QWORD)v43;
  v47 = v40
      + (__CFADD__(__CFADD__(v33, (_QWORD)v42), (_QWORD)v43) | (unsigned __int8)__CFADD__(
                                                                                  *((_QWORD *)&v36 + 1),
                                                                                  __CFADD__(v33, (_QWORD)v42)
                                                                                + (_QWORD)v43))
      + (_QWORD)v45;
  v48 = __CFADD__(
          __CFADD__(
            __CFADD__(__CFADD__(v33, (_QWORD)v42), (_QWORD)v43) | (unsigned __int8)__CFADD__(
                                                                                     v37,
                                                                                     __CFADD__(v33, (_QWORD)v42)
                                                                                   + (_QWORD)v43),
            (_QWORD)v45) | (unsigned __int8)__CFADD__(
                                              v40,
                                              (__CFADD__(__CFADD__(v33, (_QWORD)v42), (_QWORD)v43) | (unsigned __int8)__CFADD__(v37, __CFADD__(v33, (_QWORD)v42) + (_QWORD)v43))
                                            + (_QWORD)v45),
          v26);
  v49 = (__CFADD__(
           __CFADD__(__CFADD__(v33, (_QWORD)v42), (_QWORD)v43) | (unsigned __int8)__CFADD__(
                                                                                    v37,
                                                                                    __CFADD__(v33, (_QWORD)v42)
                                                                                  + (_QWORD)v43),
           (_QWORD)v45) | (unsigned __int8)__CFADD__(
                                             v40,
                                             (__CFADD__(__CFADD__(v33, (_QWORD)v42), (_QWORD)v43) | (unsigned __int8)__CFADD__(v37, __CFADD__(v33, (_QWORD)v42) + (_QWORD)v43))
                                           + (_QWORD)v45))
      + v26;
  v48 |= __CFADD__(*((_QWORD *)&v45 + 1), v49);
  v49 += *((_QWORD *)&v45 + 1);
  v50 = __PAIR128__(v46, *((_QWORD *)&v32 + 1) + (_QWORD)v42) - *(_OWORD *)v28;
  v52 = __PAIR128__(v49, v47)
      - __PAIR128__(v28[3], (__PAIR128__(v46, *((_QWORD *)&v32 + 1) + (_QWORD)v42) < *(_OWORD *)v28) + v28[2]);
  v53 = v52 >> 64;
  v51 = v52;
  v54 = -(__int64)v48 ^ ((v49
                        - (unsigned __int128)((v47 < (__PAIR128__(v46, *((_QWORD *)&v32 + 1) + (_QWORD)v42) < *(_OWORD *)v28)
                                                   + v28[2])
                                            + v28[3])) >> 64);
  *a4 = v54 & (v50 ^ (*((_QWORD *)&v32 + 1) + v42)) ^ v50;
  a4[1] = v54 & (*((_QWORD *)&v50 + 1) ^ v46) ^ *((_QWORD *)&v50 + 1);
  a4[2] = v54 & (v51 ^ v47) ^ v51;
  a4[3] = v54 & (v53 ^ v49) ^ v53;
  return v44;
}
