/*
 * XREFs of sub_1403FF93C @ 0x1403FF93C
 * Callers:
 *     sub_140A374B0 @ 0x140A374B0 (sub_140A374B0.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400E04 @ 0x140400E04 (sub_140400E04.c)
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400EF0 @ 0x140400EF0 (sub_140400EF0.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400FE0 @ 0x140400FE0 (sub_140400FE0.c)
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 *     sub_140401320 @ 0x140401320 (sub_140401320.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401380 @ 0x140401380 (sub_140401380.c)
 *     sub_140406784 @ 0x140406784 (sub_140406784.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406B10 @ 0x140406B10 (sub_140406B10.c)
 *     sub_14040721C @ 0x14040721C (sub_14040721C.c)
 *     sub_1404079EC @ 0x1404079EC (sub_1404079EC.c)
 *     sub_14040844C @ 0x14040844C (sub_14040844C.c)
 *     sub_140409DC8 @ 0x140409DC8 (sub_140409DC8.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 */

__int64 __fastcall sub_1403FF93C(_DWORD *a1)
{
  unsigned int v2; // ecx
  __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r15d
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rbx
  __int64 v43; // r15
  unsigned int v44; // edi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // rsi
  int v55; // ebx
  __int64 *v56; // rcx
  int v57; // eax
  unsigned int v58; // r8d
  int v59; // r9d
  __int64 v61; // [rsp+20h] [rbp-98h]
  unsigned int v62; // [rsp+50h] [rbp-68h]
  unsigned int v63; // [rsp+54h] [rbp-64h]
  unsigned int v64; // [rsp+58h] [rbp-60h]
  int v65; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v66; // [rsp+60h] [rbp-58h]
  unsigned int v67; // [rsp+64h] [rbp-54h]
  unsigned __int64 v68; // [rsp+68h] [rbp-50h]
  unsigned __int64 v69; // [rsp+70h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp+8h]
  unsigned int v71; // [rsp+D0h] [rbp+18h]
  unsigned int v72; // [rsp+D8h] [rbp+20h]
  int v73; // [rsp+D8h] [rbp+20h]

  v70 = 0;
  v2 = a1[3];
  v3 = 0LL;
  if ( v2 <= 0x80 && a1[4] <= 0x81u && a1[5] <= 2u && a1[6] <= 0x100u )
  {
    v4 = sub_140400AB4(8 * v2);
    v5 = sub_140400AB4((unsigned int)(8 * a1[4]));
    v62 = v5;
    v66 = sub_140400AB4((unsigned int)(8 * a1[5]));
    v72 = sub_140401380(v4);
    v63 = sub_140401380(v5);
    v64 = sub_140401350(v66, v6);
    v7 = (((unsigned int)(8 * a1[3]) >> 9) + ((((8 * a1[3]) & 0x1FFu) + 511) >> 9)) << 6;
    switch ( a1[1] )
    {
      case 1:
        v8 = 67;
        break;
      case 2:
        v8 = 84;
        break;
      case 3:
        v8 = 98;
        break;
      default:
        return v3;
    }
    v9 = sub_14040721C((unsigned int)v7, v8 & 0xF);
    v67 = v9;
    if ( (unsigned int)(a1[1] - 1) <= 1 )
      v9 *= 16;
    v10 = v72 + v63 + v64 + 672 + 2 * (_DWORD)v7 + v9;
    v65 = v10;
    v69 = v10;
    v3 = sub_140656B70((unsigned int)v10);
    if ( v3 )
    {
      v11 = v4 << 8;
      v12 = sub_14040721C((unsigned int)v7, 4LL);
      v13 = v11 + 64;
      v14 = 704 * v4 + 256;
      if ( (unsigned int)(v11 + 64) > (unsigned int)(v11 + 64)
                                    + (v4 << 6)
                                    + 64LL
                                    + 2 * ((unsigned __int64)(v4 << 6) + 64)
                                    + v11 )
        v14 = v11 + 64;
      v15 = v14 + v12;
      v16 = v5;
      if ( v4 > v5 )
        v16 = v4;
      v17 = v15 + 8 * v7;
      v18 = (v16 << 8) + 192;
      v19 = 16 * v16;
      if ( v19 > v18 )
        v18 = v19;
      if ( v17 > v18 )
        v18 = v17;
      if ( v18 > v13 )
        v13 = v18;
      v68 = v13;
      v71 = v13;
      v20 = sub_140656B70(v13);
      if ( !v20 )
        goto LABEL_72;
      *(_DWORD *)v3 = 1;
      *(_DWORD *)(v3 + 4) = a1[1];
      *(_DWORD *)(v3 + 8) = v8;
      *(_DWORD *)(v3 + 28) = v62;
      *(_DWORD *)(v3 + 16) = v4;
      *(_DWORD *)(v3 + 20) = a1[3];
      *(_DWORD *)(v3 + 32) = a1[4];
      *(_DWORD *)(v3 + 36) = v7;
      *(_DWORD *)(v3 + 40) = v65;
      v21 = sub_140401320(v3 + 672, v72, v4);
      *(_QWORD *)(v3 + 616) = v21;
      if ( !v21 )
        goto LABEL_71;
      v22 = sub_140400C30(v21);
      v23 = v22;
      if ( !v22 )
        goto LABEL_71;
      if ( (unsigned int)sub_140400D10(a1 + 7, (unsigned int)a1[3], 2LL, v22) )
        goto LABEL_71;
      v24 = sub_140400B44(v23);
      *(_DWORD *)(v3 + 12) = v24;
      if ( v24 < 0x20 )
        goto LABEL_71;
      if ( (sub_140400C78(v23) & 1) == 0 )
        goto LABEL_71;
      sub_140400E04(v23, *(_QWORD *)(v3 + 616), 800 * a1[3], 9, v20, v68);
      v25 = v72 + v3 + 672;
      v26 = (__int64)a1 + (unsigned int)a1[3] + 28;
      v27 = sub_140400F4C(v25, (unsigned int)v7, *(_QWORD *)(v3 + 616));
      *(_QWORD *)(v3 + 632) = v27;
      if ( !v27 )
        goto LABEL_71;
      if ( (unsigned int)sub_140400FE0(v26, a1[3], 2, *(_QWORD *)(v3 + 616), v27, v20, v68) )
        goto LABEL_71;
      v28 = (unsigned int)v7 + v25;
      v29 = (unsigned int)a1[3] + v26;
      v30 = sub_140400F4C(v28, (unsigned int)v7, *(_QWORD *)(v3 + 616));
      *(_QWORD *)(v3 + 640) = v30;
      if ( !v30 )
        goto LABEL_71;
      if ( (unsigned int)sub_140400FE0(v29, a1[3], 2, *(_QWORD *)(v3 + 616), v30, v20, v68) )
        goto LABEL_71;
      v31 = (unsigned int)a1[3];
      v32 = (unsigned int)v7 + v28;
      v73 = v31 + v29;
      v33 = (unsigned int)(2 * v31) + v31 + v29;
      v34 = sub_140401320(v32, v63, v62);
      *(_QWORD *)(v3 + 624) = v34;
      if ( !v34 )
        goto LABEL_71;
      v35 = sub_140400C30(v34);
      v36 = v35;
      if ( !v35 )
        goto LABEL_71;
      if ( (unsigned int)sub_140400D10(v33, (unsigned int)a1[4], 2LL, v35) )
        goto LABEL_71;
      v37 = sub_140400B44(v36);
      *(_DWORD *)(v3 + 24) = v37;
      if ( v37 < 0x20 )
        goto LABEL_71;
      if ( (sub_140400C78(v36) & 1) == 0 )
        goto LABEL_71;
      sub_140400E04(v36, *(_QWORD *)(v3 + 624), 1, 9, v20, v68);
      v38 = v63 + v32;
      v39 = (unsigned int)a1[4] + v33;
      v40 = sub_140400BBC(v38, v64, v66);
      *(_QWORD *)(v3 + 656) = v40;
      if ( !v40 )
        goto LABEL_71;
      if ( (unsigned int)sub_140400D10(v39, (unsigned int)a1[5], 2LL, v40) )
        goto LABEL_71;
      v41 = sub_140400B44(*(_QWORD *)(v3 + 656)) - 1;
      *(_DWORD *)(v3 + 64) = v41;
      if ( v41 > 8 || !(unsigned int)sub_140400C90(*(_QWORD *)(v3 + 656), (unsigned int)(1 << v41)) )
        goto LABEL_71;
      v42 = v64 + v38;
      v43 = (unsigned int)a1[5] + v39;
      v44 = 1;
      v45 = a1[1];
      switch ( v45 )
      {
        case 1:
          v46 = *(_DWORD *)(v3 + 24) + 1;
          *(_DWORD *)(v3 + 88) = 6;
          *(_DWORD *)(v3 + 96) = v46;
          *(_DWORD *)(v3 + 92) = 16;
          sub_140409DC8(v3);
          break;
        case 2:
          v47 = *(_DWORD *)(v3 + 24) + 1;
          *(_DWORD *)(v3 + 88) = 6;
          *(_DWORD *)(v3 + 96) = v47;
          *(_DWORD *)(v3 + 92) = 16;
          sub_1404079EC(v3);
          break;
        case 3:
          sub_14040844C(v3);
          break;
      }
      v48 = sub_1404068E0(v42, v67, v3);
      *(_QWORD *)(v3 + 648) = v48;
      if ( !v48 )
        goto LABEL_71;
      LODWORD(v61) = 2;
      if ( (unsigned int)sub_140406B10(v3, v73, 2 * a1[3], 2, v61, v48, 1, v20, v68) )
        goto LABEL_71;
      v49 = a1[1];
      v50 = v67 + v42;
      if ( v49 == 1 || v49 == 2 )
      {
        *(_QWORD *)(v3 + 104) = *(_QWORD *)(v3 + 648);
        if ( *(_DWORD *)(v3 + 92) > 1u )
        {
          while ( 1 )
          {
            v51 = sub_1404068E0(v50, v67, v3);
            *(_QWORD *)(v3 + 8LL * v44 + 104) = v51;
            if ( !v51 )
              break;
            v50 += v67;
            if ( ++v44 >= *(_DWORD *)(v3 + 92) )
              goto LABEL_56;
          }
LABEL_71:
          sub_1403FDDE8(v20, v68);
          sub_140656BA8(v20);
          if ( !v70 )
          {
LABEL_72:
            sub_1403FDDE8(v3, v69);
            sub_140656BA8(v3);
            return 0LL;
          }
          return v3;
        }
LABEL_56:
        sub_140406784(v3, v20, v68);
        v49 = a1[1];
      }
      if ( v49 == 3 )
      {
        v52 = sub_140400F4C(v20, (unsigned int)v7, *(_QWORD *)(v3 + 616));
        v53 = v71 - (unsigned int)v7;
        v54 = v20 + v7;
        v55 = v52;
        sub_14040106C(2, *(_QWORD *)(v3 + 616), v52, v54, v53);
        sub_140400EB4(*(_QWORD *)(v3 + 616), *(_QWORD *)(v3 + 632), v55, *(_QWORD *)(v3 + 632), v54, v53);
        sub_140400EF0(*(_QWORD *)(v3 + 616), *(_QWORD *)(v3 + 632), 2, *(_QWORD *)(v3 + 632), v54, v53);
      }
      if ( *a1 == 2 )
      {
        v56 = (__int64 *)(v43 + (unsigned int)a1[6]);
      }
      else
      {
        v57 = a1[1];
        if ( v57 == 1 )
        {
          v56 = qword_1400143C0;
        }
        else if ( v57 == 2 )
        {
          v56 = qword_1400143B0;
        }
        else
        {
          v56 = 0LL;
          if ( v57 == 3 )
            v56 = qword_1400142C0;
        }
      }
      *(_DWORD *)(v3 + 68) = *(_DWORD *)v56;
      v58 = *((_DWORD *)v56 + 1);
      *(_DWORD *)(v3 + 72) = v58;
      v59 = *((_DWORD *)v56 + 2);
      *(_DWORD *)(v3 + 76) = v59;
      *(_DWORD *)(v3 + 80) = *((_DWORD *)v56 + 3);
      if ( v58 <= 0x20 && (!v58 || v59 + v58 <= *(_DWORD *)(v3 + 24) + *(_DWORD *)(v3 + 64)) )
        v70 = 1;
      goto LABEL_71;
    }
  }
  return v3;
}
