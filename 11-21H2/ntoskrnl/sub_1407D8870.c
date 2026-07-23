/*
 * XREFs of sub_1407D8870 @ 0x1407D8870
 * Callers:
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 * Callees:
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407D9BC4 @ 0x1407D9BC4 (sub_1407D9BC4.c)
 *     sub_1407DC578 @ 0x1407DC578 (sub_1407DC578.c)
 */

__int64 __fastcall sub_1407D8870(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int *v12; // r11
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // esi
  int v24; // r10d
  unsigned int v25; // ebp
  unsigned int *v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rsi
  unsigned int v32; // r8d
  int v33; // r11d
  unsigned int v34; // r10d
  int v35; // r14d
  int v36; // edi
  int v37; // ecx
  __int64 v38; // r11
  int *v39; // r9
  int v40; // eax
  char v42; // r8
  unsigned int v43; // r10d
  unsigned int v44; // ebp
  unsigned int v45; // r14d
  unsigned __int64 v46; // r11
  unsigned int *v47; // rsi
  unsigned int v48; // r9d
  __int64 v49; // r8
  unsigned __int64 v50; // rdi
  unsigned __int16 *v51; // rcx
  char *v52; // rdx
  int v53; // eax
  int v54; // ecx
  _DWORD *v55; // rcx
  unsigned __int64 v56; // r11
  __int64 v57; // r10
  char *v58; // rdx
  unsigned int v59; // edx
  unsigned int v60; // r9d
  int v61; // r8d
  _DWORD *v62; // rcx
  __int64 v63; // r11
  int v64; // eax
  int v65; // eax
  unsigned int v66; // r8d
  int v67; // eax
  _DWORD *v68; // rcx
  __int64 v69; // rdx
  unsigned __int16 *v70; // rcx
  unsigned int v71; // edx
  __int64 v72; // rax
  unsigned __int16 *v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // r8
  int v76; // r9d
  unsigned int v77; // r10d
  __int64 v78; // [rsp+20h] [rbp-138h]
  __int64 v79; // [rsp+28h] [rbp-130h]
  int v80; // [rsp+30h] [rbp-128h]
  unsigned int v81; // [rsp+34h] [rbp-124h]
  unsigned int v82; // [rsp+38h] [rbp-120h]
  unsigned __int64 v83; // [rsp+40h] [rbp-118h]
  unsigned int v84; // [rsp+48h] [rbp-110h]
  unsigned int v85; // [rsp+4Ch] [rbp-10Ch]
  int v86; // [rsp+50h] [rbp-108h]
  unsigned int v87; // [rsp+54h] [rbp-104h]
  int v88; // [rsp+58h] [rbp-100h]
  unsigned int v89; // [rsp+5Ch] [rbp-FCh]
  unsigned __int64 v91; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int64 v92; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v93; // [rsp+80h] [rbp-D8h]
  unsigned int *v94; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v95; // [rsp+90h] [rbp-C8h]
  wchar_t v96[40]; // [rsp+C0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 < 0x128 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 30 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 88);
        v87 = v6;
        if ( v6 > 0x4000
          || (v7 = *(unsigned int *)(a1 + 112), v89 = v7, (unsigned int)v7 > 0x4000)
          || (v8 = *(unsigned int *)(a1 + 96), (unsigned int)v8 > 0x100000)
          || (v9 = *(_DWORD *)(a1 + 104), v9 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v6 && (_DWORD)v8 && v9 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)sub_1407D9BC4(a1 + 16) )
          {
            v13 = (unsigned __int64)v12 + v12[21];
            v91 = v13;
            if ( (v13 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v13 < (unsigned __int64)v12
                   || (v14 = (char *)v12 + v10, v83 = (unsigned __int64)v12 + v10, v13 >= (unsigned __int64)v12 + v10) )
            {
              v3 = 40;
            }
            else
            {
              v15 = 32LL * v6 + v13 - 1;
              if ( v15 < (unsigned __int64)v12 || v15 >= (unsigned __int64)v14 )
              {
                v3 = 45;
              }
              else
              {
                v16 = (unsigned __int64)v12 + v12[23];
                v93 = v16;
                if ( (v16 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v16 < (unsigned __int64)v12 || v16 >= (unsigned __int64)v14 )
                {
                  v3 = 50;
                }
                else
                {
                  v17 = v16 + 8 * v8 - 1;
                  if ( v17 < (unsigned __int64)v12 || v17 >= (unsigned __int64)v14 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v18 = (unsigned __int64)v12 + v12[25];
                    v95 = v18;
                    if ( (v18 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v18 < (unsigned __int64)v12 || v18 >= (unsigned __int64)v14 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v19 = v18 + v11 - 1;
                      if ( v19 < (unsigned __int64)v12 || v19 >= (unsigned __int64)v14 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v20 = (unsigned __int64)v12 + v12[27];
                        v92 = v20;
                        if ( (v20 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v20 < (unsigned __int64)v12 || v20 >= (unsigned __int64)v14 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v21 = v20 + v12[29] - 1LL;
                          if ( v21 < (unsigned __int64)v12 || v21 >= (unsigned __int64)v14 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v22 = 96 * v7 + v20 - 1;
                            if ( v22 < (unsigned __int64)v12 || v22 >= (unsigned __int64)v14 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v84 = v12[31];
                              if ( v84 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v81 = 0;
                                v23 = v8;
                                v24 = 0;
                                v25 = 0;
                                while ( 1 )
                                {
                                  v26 = (unsigned int *)(v13 + 32LL * v25);
                                  v94 = v26;
                                  v27 = v18 + v26[3];
                                  if ( (v27 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v27 < (unsigned __int64)v12 || v27 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v28 = v26[4];
                                  if ( !(_DWORD)v28 )
                                  {
                                    v3 = 90;
                                    goto LABEL_67;
                                  }
                                  if ( (unsigned int)v28 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_67;
                                  }
                                  v29 = (unsigned int)(2 * v28 + 2) + v27 - 1;
                                  if ( v29 < (unsigned __int64)v12 || v29 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 110;
                                    goto LABEL_67;
                                  }
                                  if ( *(_WORD *)(v27 + 2 * v28) )
                                  {
                                    v3 = 120;
                                    goto LABEL_67;
                                  }
                                  v30 = v26[1];
                                  if ( v30 > 0x8000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_67;
                                  }
                                  if ( v30 > v23 )
                                  {
                                    v3 = 150;
                                    goto LABEL_67;
                                  }
                                  v82 = v23 - v30;
                                  v31 = (int)*v26;
                                  if ( (_DWORD)v31 == -1 && v30 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v31 != v24 && (_DWORD)v31 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v32 = v26[5];
                                  v88 = v30 + v24;
                                  v85 = v32;
                                  if ( (v32 & 0x7F00) == 0 && (v32 & 1) == 0 && (v32 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_67;
                                  }
                                  v33 = v26[5] & 1;
                                  v86 = v33;
                                  if ( (v32 & 1) == 0 && !v26[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_67;
                                  }
                                  v80 = 0;
                                  v34 = *v26;
                                  v35 = 0;
                                  v36 = 0;
                                  v37 = 0;
                                  if ( (int)v31 < (int)(v31 + v30) )
                                    break;
LABEL_75:
                                  if ( v35 != v26[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v33 && (v37 != (unsigned __int8)v32 >> 1 || v36 != ((v32 >> 8) & 0x7F)) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v81 = ++v25;
                                  if ( v25 >= v87 )
                                  {
                                    if ( v82 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v43 = v89;
                                      v44 = 0;
                                      v45 = 0;
                                      if ( v89 )
                                      {
                                        while ( 1 )
                                        {
                                          v46 = v92;
                                          v47 = (unsigned int *)(v92 + 96LL * v45++);
                                          v48 = v45;
                                          v49 = v47[4];
                                          v91 = *((_QWORD *)v47 + 1);
                                          if ( v45 < v43 )
                                            break;
LABEL_86:
                                          v50 = v46 + *v47;
                                          if ( (v50 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v50 < a1 || v50 >= v83 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v51 = (unsigned __int16 *)(v50 + 2LL * v47[1]);
                                          if ( (unsigned __int64)v51 + 1 < a1 || (unsigned __int64)v51 + 1 >= v83 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v51 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          LODWORD(v79) = v49;
                                          LODWORD(v78) = v47[2];
                                          sub_1402511F0(v96, 35LL, L"\\VOLUME{%08lx%08lx-%08lx}", v47[3], v78, v79);
                                          v52 = (char *)v96 - v50;
                                          do
                                          {
                                            v53 = *(unsigned __int16 *)&v52[v50];
                                            v54 = *(unsigned __int16 *)v50 - v53;
                                            if ( v54 )
                                              break;
                                            v50 += 2LL;
                                          }
                                          while ( v53 );
                                          if ( v54 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v55 = (_DWORD *)(v92 + v47[5]);
                                          if ( ((unsigned __int8)v55 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          if ( (unsigned __int64)v55 < a1 || (v56 = v83, (unsigned __int64)v55 >= v83) )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v57 = v47[6];
                                          if ( (unsigned int)v57 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v58 = (char *)v55 + v57 - 1;
                                          if ( (unsigned __int64)v58 < a1 || (unsigned __int64)v58 >= v83 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v55 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v59 = v55[1];
                                          if ( v59 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v60 = *(_DWORD *)(a1 + 124);
                                          v61 = 0;
                                          if ( v60 )
                                          {
                                            v62 = v47 + 9;
                                            v63 = v60;
                                            do
                                            {
                                              v64 = *v62 + v62[7];
                                              ++v62;
                                              v61 += v64;
                                              --v63;
                                            }
                                            while ( v63 );
                                            v56 = v83;
                                          }
                                          if ( v61 != v59 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v65 = 24;
                                          if ( v59 )
                                            v65 = 8 * v59 + 16;
                                          if ( v65 != (_DWORD)v57 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v66 = v47[8];
                                          if ( v66 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v67 = 0;
                                          if ( v60 )
                                          {
                                            v68 = v47 + 16;
                                            v69 = *(unsigned int *)(a1 + 124);
                                            do
                                            {
                                              v67 += *v68++;
                                              --v69;
                                            }
                                            while ( v69 );
                                          }
                                          if ( v67 != v66 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v44 += v67;
                                          v70 = (unsigned __int16 *)(v92 + v47[7]);
                                          if ( ((unsigned __int8)v70 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v71 = 0;
                                          if ( v66 )
                                          {
                                            while ( (unsigned __int64)v70 >= a1 && (unsigned __int64)v70 < v56 )
                                            {
                                              if ( (unsigned __int64)v70 + 3 < a1 || (unsigned __int64)v70 + 3 >= v56 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              v72 = *v70;
                                              if ( (unsigned __int16)v72 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v73 = &v70[v72];
                                              if ( (unsigned __int64)v73 + 3 < a1 || (unsigned __int64)v73 + 3 >= v56 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( v73[1] )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v71;
                                              v70 = v73 + 2;
                                              if ( v71 >= v66 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v43 = *(_DWORD *)(a1 + 112);
                                          if ( v45 >= v43 )
                                            goto LABEL_129;
                                        }
                                        while ( !(unsigned __int8)sub_1407DC578(v46 + 96LL * v48, &v91, v49) )
                                        {
                                          v48 = v76 + 1;
                                          if ( v48 >= v77 )
                                            goto LABEL_86;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v44 == *(_DWORD *)(a1 + 120) )
                                        {
                                          if ( v44 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v74 = *(unsigned int *)(a1 + 216);
                                            v75 = *(unsigned int *)(a1 + 212);
                                            if ( ((_DWORD)v75 == 0) == ((_DWORD)v74 == 0) )
                                            {
                                              if ( (_DWORD)v75 && (int)sub_140354748((_WORD *)(v75 + a1), v74, 0LL) < 0 )
                                                v3 = 360;
                                              else
                                                v4 = 1;
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v24 = v88;
                                  v12 = (unsigned int *)a1;
                                  v14 = (char *)v83;
                                  v23 = v82;
                                  v18 = v95;
                                  v13 = v91;
                                }
                                v38 = (int)*v26;
                                v39 = (int *)(v93 + 4 + 8 * v31);
                                while ( v38 >= 0 && v34 < (unsigned int)v8 )
                                {
                                  if ( v34 != (_DWORD)v31 && *(v39 - 1) <= (unsigned int)*(v39 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v40 = *v39;
                                  if ( (*v39 & 1) == 0 && (((unsigned int)*v39 >> 4) & 7) > v84 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v40 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v39 & 1) != 0 )
                                  {
                                    if ( (v40 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v35;
                                    v42 = ((unsigned int)*v39 >> 4) & 7;
                                    if ( (v40 & 4) != 0 )
                                      v80 |= 1 << v42;
                                    if ( (v40 & 2) != 0 )
                                      v36 |= 1 << v42;
                                  }
                                  ++v34;
                                  ++v38;
                                  v39 += 2;
                                  if ( v38 >= (int)(v31 + v30) )
                                  {
                                    v32 = v85;
                                    v26 = v94;
                                    v37 = v80;
                                    v33 = v86;
                                    v25 = v81;
                                    goto LABEL_75;
                                  }
                                }
                                v3 = 160;
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
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_67:
  *a3 = v3;
  return v4;
}
