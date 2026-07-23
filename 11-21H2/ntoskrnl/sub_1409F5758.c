/*
 * XREFs of sub_1409F5758 @ 0x1409F5758
 * Callers:
 *     sub_1409F49A4 @ 0x1409F49A4 (sub_1409F49A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F5758(_QWORD *a1, __int16 *a2, unsigned int a3)
{
  __int16 v5; // dx
  int v6; // ecx
  __int64 v7; // r10
  int v8; // eax
  int v9; // r12d
  unsigned __int64 v10; // rdi
  __int64 v11; // r11
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // esi
  int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // ecx
  __int64 v23; // r8
  _WORD *v24; // r11
  __int64 v25; // r10
  unsigned int v26; // r15d
  unsigned int v27; // eax
  unsigned __int16 *v28; // r13
  int v29; // ebp
  __int64 v30; // rbx
  unsigned int v31; // esi
  __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // ebx
  unsigned int v35; // edi
  unsigned int v36; // r8d
  unsigned int v37; // r11d
  __int64 v38; // rcx
  int v39; // ecx
  _WORD *v40; // rcx
  int v41; // edx
  unsigned __int64 v42; // rax
  _WORD *v43; // rcx
  __int64 v44; // rax
  _BYTE *v45; // rcx
  int v46; // edx
  unsigned __int64 v47; // rax
  _BYTE *v48; // rcx
  int v49; // eax
  int v51; // [rsp+0h] [rbp-A8h]
  int v52; // [rsp+4h] [rbp-A4h]
  int v53; // [rsp+Ch] [rbp-9Ch]
  __int64 v54; // [rsp+10h] [rbp-98h]
  int v55; // [rsp+18h] [rbp-90h]
  _WORD *v56; // [rsp+20h] [rbp-88h]
  _BYTE *v57; // [rsp+28h] [rbp-80h]
  unsigned int v58; // [rsp+34h] [rbp-74h]
  unsigned int v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+40h] [rbp-68h]
  __int64 v61; // [rsp+48h] [rbp-60h]
  __int64 v62; // [rsp+58h] [rbp-50h]
  __int64 v63; // [rsp+60h] [rbp-48h]
  int v64; // [rsp+C0h] [rbp+18h]
  int v65; // [rsp+C8h] [rbp+20h]

  if ( a3 >= 0x50 && (unsigned __int16)a2[1] == a3 && a3 <= 0x1000 )
  {
    v5 = *a2;
    if ( (v5 & 0xFFF) == 0xA66 && (v5 & 0xF000) == 0x1000 )
    {
      v6 = (unsigned __int16)a2[2];
      if ( (unsigned __int16)v6 <= 0xAAu && !a2[3] && *a1 == *((_QWORD *)a2 + 2) && a1[1] == *((_QWORD *)a2 + 3) )
      {
        v7 = (unsigned __int16)a2[16];
        v8 = 24 * v6 + 56;
        v9 = (unsigned __int16)a2[2];
        if ( (_DWORD)v7 == v8 )
        {
          v10 = (unsigned __int16)a2[17];
          v11 = (unsigned __int16)a2[18];
          v12 = v10 + v8;
          if ( (_DWORD)v11 == v12 )
          {
            v13 = (unsigned __int16)a2[19];
            v14 = (unsigned __int16)a2[20];
            v15 = v13 + v12;
            if ( (_DWORD)v14 == v15 )
            {
              v16 = (unsigned __int16)a2[21];
              v17 = (unsigned __int16)a2[22];
              v18 = v16 + v15;
              if ( v17 == v18 )
              {
                v19 = (unsigned __int16)a2[23];
                v20 = v19 + v18;
                if ( (unsigned __int16)a2[24] == v20 )
                {
                  v55 = (unsigned __int16)a2[25];
                  if ( a3 == v55 + v20
                    && v10 == 12 * (v10 / 0xC)
                    && (v13 & 3) == 0
                    && (v16 & 3) == 0
                    && (v19 & 1) == 0
                    && (v7 & 3) == 0
                    && (v11 & 3) == 0
                    && (v14 & 3) == 0
                    && (v17 & 3) == 0 )
                  {
                    v21 = v13 >> 2;
                    v22 = 0;
                    v52 = 0;
                    v51 = 0;
                    v23 = (__int64)a2 + v11;
                    v64 = 0;
                    v24 = (__int16 *)((char *)a2 + v14);
                    v65 = 0;
                    v25 = (__int64)a2 + v7;
                    v26 = v16 >> 2;
                    v61 = v23;
                    v27 = v19 >> 1;
                    v28 = (unsigned __int16 *)(a2 + 28);
                    v58 = (unsigned int)v10 / 0xC;
                    v56 = (__int16 *)((char *)a2 + (unsigned __int16)a2[22]);
                    v62 = (unsigned __int16)a2[24];
                    v29 = 0;
                    v59 = v27;
                    v57 = (char *)a2 + v62;
                    v60 = (__int64)a2 + v14;
                    v30 = 0LL;
                    v53 = 0;
                    if ( (unsigned int)v10 / 0xC )
                    {
                      while ( 1 )
                      {
                        v63 = v30 | (1LL << (*(_WORD *)v25 % 0x3Fu));
                        if ( *(unsigned __int16 *)(v25 + 4) != v29 )
                          break;
                        v31 = *(unsigned __int16 *)(v25 + 6);
                        if ( v31 > v21 - v29 )
                          break;
                        v29 += v31;
                        v32 = v23;
                        v33 = 0;
                        v54 = v23;
                        if ( *(_WORD *)(v25 + 6) )
                        {
                          while ( *(_WORD *)(v23 + 2) < 0x40u
                               && *(_BYTE *)(v23 + 1) < 0x40u
                               && *(_BYTE *)v23 < 0x40u
                               && (*(_BYTE *)v23 & 0xFu) < 9 )
                          {
                            v23 += 4LL;
                            ++v33;
                            v61 = v23;
                            if ( v33 >= v31 )
                              goto LABEL_33;
                          }
                          return 3221225485LL;
                        }
LABEL_33:
                        if ( *(unsigned __int16 *)(v25 + 8) != v51 )
                          break;
                        v34 = *(unsigned __int16 *)(v25 + 10);
                        if ( v34 > v26 - v51 )
                          break;
                        v22 = v34 + v51;
                        v51 += v34;
                        v35 = 0;
                        if ( *(_WORD *)(v25 + 10) )
                        {
                          while ( (*v24 & 0xFCu) <= 0x20 )
                          {
                            if ( (unsigned __int16)v24[1] != v52 )
                              break;
                            v36 = (unsigned __int8)*v24 >> 2;
                            if ( v36 > v9 - v52 )
                              break;
                            v52 += v36;
                            v37 = 0;
                            if ( v36 )
                            {
                              while ( 1 )
                              {
                                v38 = *v28;
                                if ( (unsigned int)v38 >= v21
                                  || (unsigned __int16)v38 >= (unsigned __int16)v31
                                  || (unsigned __int16)v38 > *(unsigned __int8 *)(v25 + 3) )
                                {
                                  return 3221225485LL;
                                }
                                v39 = (*(_BYTE *)(v32 + 4 * v38) & 0xF) - 3;
                                if ( !v39 )
                                  break;
                                if ( v39 == 1 )
                                {
                                  if ( *((_QWORD *)v28 + 1) != v64 || *((_QWORD *)v28 + 2) )
                                    return 3221225485LL;
                                  v40 = v56;
                                  v41 = v64;
                                  v42 = (unsigned __int64)a2
                                      + (unsigned __int16)a2[22]
                                      + (unsigned __int64)(unsigned __int16)a2[23];
                                  v9 = (unsigned __int16)a2[2];
                                  if ( *v56 )
                                  {
                                    do
                                    {
                                      if ( (unsigned __int64)v40 >= v42 - 2 )
                                        break;
                                      ++v40;
                                    }
                                    while ( *v40 );
                                    v9 = (unsigned __int16)a2[2];
                                    v41 = v64;
                                  }
                                  v43 = v40 + 1;
                                  if ( (unsigned __int64)v43 > v42 )
                                    return 3221225485LL;
                                  v44 = v43 - v56;
                                  v56 = v43;
                                  v64 = v44 + v41;
LABEL_61:
                                  v32 = v54;
                                }
                                ++v37;
                                v28 += 12;
                                if ( v37 >= v36 )
                                  goto LABEL_63;
                              }
                              if ( *((_QWORD *)v28 + 1) != v65 || *((_QWORD *)v28 + 2) )
                                return 3221225485LL;
                              v45 = v57;
                              v46 = v65;
                              v47 = (unsigned __int64)a2 + v62 + (unsigned __int16)v55;
                              if ( *v57 )
                              {
                                do
                                {
                                  if ( (unsigned __int64)v45 >= v47 - 1 )
                                    break;
                                  ++v45;
                                }
                                while ( *v45 );
                                v46 = v65;
                              }
                              v48 = v45 + 1;
                              if ( (unsigned __int64)v48 > v47 )
                                return 3221225485LL;
                              v49 = (_DWORD)v48 - (_DWORD)v57;
                              v57 = v48;
                              v65 = v49 + v46;
                              goto LABEL_61;
                            }
LABEL_63:
                            ++v35;
                            v24 = (_WORD *)(v60 + 4);
                            v60 += 4LL;
                            if ( v35 >= v34 )
                            {
                              v23 = v61;
                              v22 = v51;
                              goto LABEL_65;
                            }
                          }
                          return 3221225485LL;
                        }
LABEL_65:
                        v25 += 12LL;
                        v30 = v63;
                        if ( ++v53 >= v58 )
                        {
                          v27 = v59;
                          goto LABEL_67;
                        }
                      }
                    }
                    else
                    {
LABEL_67:
                      if ( v30 == *((_QWORD *)a2 + 1)
                        && v52 == v9
                        && v29 == v21
                        && v22 == v26
                        && v64 == v27
                        && v65 == v55 )
                      {
                        return 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
