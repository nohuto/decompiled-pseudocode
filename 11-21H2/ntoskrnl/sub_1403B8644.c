/*
 * XREFs of sub_1403B8644 @ 0x1403B8644
 * Callers:
 *     sub_1403B85D0 @ 0x1403B85D0 (sub_1403B85D0.c)
 * Callees:
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B8BB4 @ 0x1403B8BB4 (sub_1403B8BB4.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_14051DD20 @ 0x14051DD20 (sub_14051DD20.c)
 *     sub_14051DEB0 @ 0x14051DEB0 (sub_14051DEB0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403B8644(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  _BYTE *v10; // r14
  __int64 v11; // rcx
  _BYTE *v12; // r9
  char *v13; // rdx
  char v14; // al
  bool v15; // zf
  unsigned int v16; // r10d
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int *v23; // rax
  unsigned int v24; // r10d
  _DWORD *v25; // rdx
  __int64 v26; // r9
  __int64 v28; // rcx
  _BYTE *v29; // rdi
  char v30; // al
  _DWORD *v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  _DWORD *v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // esi
  int v38; // ebp
  unsigned int v39; // edi
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  ULONG_PTR v42; // rdx
  __int64 v43; // r10
  ULONG_PTR v44; // rax
  unsigned __int64 v45; // rcx
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int128 v49; // xmm5
  ULONG_PTR v50; // r14
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // eax
  int v60; // edx
  int v61; // eax
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  char v67; // al
  int v68; // eax
  unsigned int v69; // ecx
  ULONG_PTR v70; // rsi
  __int64 v71; // rcx
  int v72; // eax
  int v73; // ecx
  __int64 v74; // rax
  _OWORD *v75; // rcx
  unsigned __int64 v76; // rax
  __int128 v77; // xmm2
  __int128 v78; // xmm3
  __int128 v79; // xmm4
  __int128 v80; // xmm5
  ULONG_PTR v81; // rdx
  ULONG_PTR v82; // rax
  unsigned __int64 v83; // rcx
  __int128 v84; // xmm2
  __int128 v85; // xmm3
  __int128 v86; // xmm4
  __int128 v87; // xmm5
  __int64 v88; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v89; // [rsp+78h] [rbp+10h]

  v2 = *(unsigned int *)(a1 + 4);
  v3 = a1 + 44;
  v88 = 0LL;
  v4 = a1 + 46;
  v5 = 0;
  v6 = 0;
  v89 = 0;
  v7 = a1 + v2;
  v8 = 0LL;
  v10 = (_BYTE *)(a1 + 44);
  if ( a2 )
  {
    if ( v4 > v7 )
    {
LABEL_39:
      if ( (unsigned int)dword_140C54A90 > 1 )
      {
        v33 = 0;
        if ( (_DWORD)dword_140C54A90 )
        {
          v34 = (_DWORD *)(qword_140C4E210 + 8);
          while ( *v34 != dword_140C4AD4C )
          {
            ++v33;
            v34 += 16;
            if ( v33 >= (unsigned int)dword_140C54A90 )
              goto LABEL_44;
          }
          v5 = v33;
        }
LABEL_44:
        v35 = (unsigned int)~(*((_DWORD *)KeGetCurrentPrcb() + 39) - 1);
        v36 = (unsigned int)v35 & dword_140C4AD4C;
        v37 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
        v38 = v37 & dword_140C4AD4C;
        if ( v5 )
        {
          v75 = (_OWORD *)qword_140C4E210;
          v76 = (unsigned __int64)v5 << 6;
          v77 = *(_OWORD *)qword_140C4E210;
          v78 = *(_OWORD *)(qword_140C4E210 + 16);
          v79 = *(_OWORD *)(qword_140C4E210 + 32);
          v80 = *(_OWORD *)(qword_140C4E210 + 48);
          *(_OWORD *)qword_140C4E210 = *(_OWORD *)(v76 + qword_140C4E210);
          v75[1] = *(_OWORD *)((char *)v75 + v76 + 16);
          v75[2] = *(_OWORD *)((char *)v75 + v76 + 32);
          v75[3] = *(_OWORD *)((char *)v75 + v76 + 48);
          *(_OWORD *)((char *)v75 + v76) = v77;
          *(_OWORD *)((char *)v75 + v76 + 16) = v78;
          *(_OWORD *)((char *)v75 + v76 + 32) = v79;
          *(_OWORD *)((char *)v75 + v76 + 48) = v80;
        }
        v39 = 1;
        if ( (unsigned int)dword_140C54A90 > 1 )
        {
          v40 = (_DWORD *)(qword_140C4E210 + 72);
          do
          {
            if ( ((unsigned int)v35 & *v40) != (_DWORD)v36 )
              break;
            ++v39;
            v40 += 16;
          }
          while ( v39 < (unsigned int)dword_140C54A90 );
        }
        v41 = v39 + 1;
        if ( v39 + 1 < (unsigned int)dword_140C54A90 )
        {
          v42 = qword_140C4E210 + ((unsigned __int64)v41 << 6);
          v43 = (unsigned int)dword_140C54A90 - v41;
          do
          {
            if ( ((unsigned int)v35 & *(_DWORD *)(v42 + 8)) == (_DWORD)v36 )
            {
              v44 = qword_140C4E210;
              v45 = (unsigned __int64)v39++ << 6;
              v46 = *(_OWORD *)(v45 + qword_140C4E210);
              v47 = *(_OWORD *)(v45 + qword_140C4E210 + 16);
              v48 = *(_OWORD *)(v45 + qword_140C4E210 + 32);
              v49 = *(_OWORD *)(v45 + qword_140C4E210 + 48);
              *(_OWORD *)(v45 + qword_140C4E210) = *(_OWORD *)v42;
              *(_OWORD *)(v45 + v44 + 16) = *(_OWORD *)(v42 + 16);
              *(_OWORD *)(v45 + v44 + 32) = *(_OWORD *)(v42 + 32);
              *(_OWORD *)(v45 + v44 + 48) = *(_OWORD *)(v42 + 48);
              *(_OWORD *)v42 = v46;
              *(_OWORD *)(v42 + 16) = v47;
              *(_OWORD *)(v42 + 32) = v48;
              *(_OWORD *)(v42 + 48) = v49;
            }
            v42 += 64LL;
            --v43;
          }
          while ( v43 );
        }
        if ( v39 > 1 )
          byte_140C4AD98 = 1;
        v50 = qword_140C4E210;
        sub_1403B8BB4(qword_140C4E210 + 64, v39 - 1, v35, v36);
        v52 = v39;
        if ( v39 < (unsigned int)dword_140C54A90 )
        {
          v53 = (_DWORD *)(((unsigned __int64)v39 << 6) + v50 + 8);
          do
          {
            if ( (v37 & *v53) != v38 )
              break;
            ++v39;
            v53 += 16;
          }
          while ( v39 < (unsigned int)dword_140C54A90 );
        }
        v54 = v39 + 1;
        if ( v39 + 1 < (unsigned int)dword_140C54A90 )
        {
          v81 = qword_140C4E210 + ((unsigned __int64)v54 << 6);
          v51 = (unsigned int)dword_140C54A90 - v54;
          do
          {
            if ( (v37 & *(_DWORD *)(v81 + 8)) == v38 )
            {
              v82 = qword_140C4E210;
              v83 = (unsigned __int64)v39++ << 6;
              v84 = *(_OWORD *)(v83 + qword_140C4E210);
              v85 = *(_OWORD *)(v83 + qword_140C4E210 + 16);
              v86 = *(_OWORD *)(v83 + qword_140C4E210 + 32);
              v87 = *(_OWORD *)(v83 + qword_140C4E210 + 48);
              *(_OWORD *)(v83 + qword_140C4E210) = *(_OWORD *)v81;
              *(_OWORD *)(v83 + v82 + 16) = *(_OWORD *)(v81 + 16);
              *(_OWORD *)(v83 + v82 + 32) = *(_OWORD *)(v81 + 32);
              *(_OWORD *)(v83 + v82 + 48) = *(_OWORD *)(v81 + 48);
              *(_OWORD *)v81 = v84;
              *(_OWORD *)(v81 + 16) = v85;
              *(_OWORD *)(v81 + 32) = v86;
              *(_OWORD *)(v81 + 48) = v87;
            }
            v81 += 64LL;
            --v51;
          }
          while ( v51 );
        }
        sub_1403B8BB4(qword_140C4E210 + (v52 << 6), v39 - (unsigned int)v52, v51, v52);
        sub_1403B8BB4(qword_140C4E210 + ((unsigned __int64)v39 << 6), (unsigned int)dword_140C54A90 - v39, v55, v56);
        if ( byte_140C4AD7D && byte_140C4AD98 )
          sub_14051DD20();
      }
      return v89;
    }
    while ( 1 )
    {
      v28 = (unsigned __int8)v10[1];
      if ( (unsigned __int8)v28 < 2u || (unsigned __int64)&v10[v28] > v7 )
        goto LABEL_39;
      v29 = v10;
      v10 += v28;
      v30 = *v29;
      if ( *v29 )
      {
        if ( v30 == 9 )
        {
          if ( (_BYTE)v28 == 16 )
          {
            v31 = (_DWORD *)(qword_140C4E210 + ((unsigned __int64)v6 << 6));
            if ( (v29[8] & 1) == 0 )
              goto LABEL_38;
            *v31 = *((_DWORD *)v29 + 1);
            v31[1] = *((_DWORD *)v29 + 3);
            v32 = *((_DWORD *)v29 + 1);
            goto LABEL_37;
          }
LABEL_66:
          if ( v30 == 4 )
          {
            if ( (_BYTE)v28 == 6 )
              goto LABEL_84;
          }
          else
          {
LABEL_67:
            if ( v30 == 10 )
            {
              if ( (_BYTE)v28 != 12 )
                goto LABEL_38;
LABEL_84:
              v65 = sub_1403BF104(24LL, 1LL);
              if ( !v65 )
                return 3221225626LL;
              *(_OWORD *)v65 = 0LL;
              *(_QWORD *)(v65 + 16) = 0LL;
              *(_BYTE *)(v65 + 8) = 1;
              if ( *v29 == 4 )
              {
                v66 = (unsigned __int8)v29[2];
                *(_DWORD *)(v65 + 12) = v66;
                if ( v29[2] == 0xFF )
                  v66 = -1;
                *(_DWORD *)(v65 + 12) = v66;
                *(_DWORD *)(v65 + 16) = *(unsigned __int16 *)(v29 + 3);
                v67 = v29[5];
              }
              else
              {
                *(_DWORD *)(v65 + 12) = *((_DWORD *)v29 + 1);
                *(_DWORD *)(v65 + 16) = *((unsigned __int16 *)v29 + 1);
                v67 = v29[8];
              }
              v68 = -(v67 != 0) - 4;
LABEL_90:
              *(_DWORD *)(v65 + 20) = v68;
              *(_QWORD *)v65 = qword_140C4ADA0;
              qword_140C4ADA0 = v65;
              goto LABEL_38;
            }
          }
          if ( v30 == 2 && (_BYTE)v28 == 10 )
          {
            if ( (int)sub_140252380(*((unsigned int *)v29 + 1), &v88) >= 0 )
            {
              v57 = sub_1403BF104(40LL, 1LL);
              v58 = v57;
              if ( !v57 )
                return 3221225626LL;
              *(_OWORD *)v57 = 0LL;
              *(_OWORD *)(v57 + 16) = 0LL;
              *(_QWORD *)(v57 + 32) = 0LL;
              v59 = (unsigned __int8)v29[3];
              if ( v59 < 8 )
              {
                v60 = 45056;
              }
              else
              {
                v59 -= 8;
                v60 = 45057;
              }
              *(_DWORD *)(v58 + 16) = v60;
              *(_DWORD *)(v58 + 20) = v59;
              *(_QWORD *)(v58 + 24) = v88;
              v61 = 2;
              if ( (v29[8] & 3u) < 2 )
                v61 = 1;
              *(_DWORD *)(v58 + 36) = v61;
              *(_DWORD *)(v58 + 32) = (v29[8] & 8) == 0;
              v62 = (__int64 *)qword_140C4AD88;
              if ( *(__int64 **)qword_140C4AD88 != &qword_140C4AD80 )
                __fastfail(3u);
              *(_QWORD *)v58 = &qword_140C4AD80;
              *(_QWORD *)(v58 + 8) = v62;
              *v62 = v58;
              qword_140C4AD88 = v58;
            }
            v89 = 0;
          }
          goto LABEL_38;
        }
      }
      else if ( (_BYTE)v28 == 8 )
      {
        v31 = (_DWORD *)(qword_140C4E210 + ((unsigned __int64)v6 << 6));
        if ( (v29[4] & 1) != 0 )
        {
          *v31 = (unsigned __int8)v29[3];
          v31[1] = (unsigned __int8)v29[2];
          v32 = (unsigned __int8)v29[3];
LABEL_37:
          v31[2] = v32;
          ++v6;
          goto LABEL_38;
        }
        goto LABEL_38;
      }
      if ( v30 != 11 )
      {
        if ( v30 != 3 )
          goto LABEL_66;
        if ( (_BYTE)v28 == 8 )
        {
          v74 = sub_1403BF104(24LL, 1LL);
          v65 = v74;
          if ( !v74 )
            return 3221225626LL;
          *(_BYTE *)(v74 + 8) = 0;
          *(_DWORD *)(v74 + 16) = *((unsigned __int16 *)v29 + 1);
          v68 = *((_DWORD *)v29 + 1);
          goto LABEL_90;
        }
        goto LABEL_67;
      }
      if ( (unsigned __int8)v28 < 0x28u || (unsigned int)dword_140C4E230 >= 3 && (unsigned __int8)v28 < 0x4Cu )
        goto LABEL_66;
      v70 = qword_140C4E210 + ((unsigned __int64)v6 << 6);
      if ( (v29[12] & 1) != 0 )
      {
        v71 = *((_QWORD *)v29 + 3);
        if ( *((_DWORD *)v29 + 4) == 1 && v71 )
        {
          v72 = sub_14051DEB0(v71, qword_140C4E210 + ((unsigned __int64)v6 << 6), v8);
          v89 = v72;
          if ( v72 == -1073741670 )
            return 3221225626LL;
          if ( v72 >= 0 )
          {
            if ( (unsigned int)dword_140C4E230 < 3 )
              v73 = *((_DWORD *)v29 + 1);
            else
              v73 = (*(_QWORD *)(v29 + 68) >> 8) & 0xFF000000 | *((_DWORD *)v29 + 17) & 0xFFFFFF;
            *(_DWORD *)v70 = v73;
            *(_DWORD *)(v70 + 4) = *((_DWORD *)v29 + 2);
            *(_DWORD *)(v70 + 8) = *((_DWORD *)v29 + 1);
            *(_DWORD *)(v70 + 40) = *((_DWORD *)v29 + 5);
            if ( v29[1] < 0x4Cu )
            {
              *(_QWORD *)(v70 + 48) = 0LL;
              *(_BYTE *)(v70 + 45) = 0;
            }
            else
            {
              *(_QWORD *)(v70 + 48) = *(_QWORD *)(v29 + 68);
              *(_BYTE *)(v70 + 45) = 1;
              if ( v29[1] >= 0x4Du )
                *(_BYTE *)(v70 + 44) = v29[76];
            }
            if ( (v29[12] & 2) != 0 )
              *(_BYTE *)(v70 + 14) = 1;
            ++v6;
            v89 = v72;
          }
        }
        else
        {
          v89 = -1073741811;
        }
      }
LABEL_38:
      if ( (unsigned __int64)(v10 + 2) > v7 )
        goto LABEL_39;
    }
  }
  if ( v4 <= v7 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int8)v10[1];
      if ( (unsigned __int8)v11 < 2u )
        goto LABEL_13;
      v12 = &v10[v11];
      if ( (unsigned __int64)&v10[v11] > v7 )
        goto LABEL_13;
      v13 = v10;
      v10 += v11;
      v14 = *v13;
      if ( !*v13 )
        break;
      if ( v14 != 9 )
        goto LABEL_27;
      if ( (_BYTE)v11 == 16 )
      {
        v15 = (v13[8] & 1) == 0;
        goto LABEL_8;
      }
LABEL_28:
      if ( v14 == 11 && (unsigned __int8)v11 >= 0x28u )
      {
        v15 = (v13[12] & 1) == 0;
        goto LABEL_8;
      }
LABEL_12:
      if ( (unsigned __int64)(v12 + 2) > v7 )
        goto LABEL_13;
    }
    if ( (_BYTE)v11 == 8 )
    {
      v15 = (v13[4] & 1) == 0;
LABEL_8:
      if ( !v15 )
        LODWORD(dword_140C54A90) = dword_140C54A90 + 1;
      LODWORD(v8) = v8 + 1;
      if ( (unsigned int)v8 > dword_140C54A94 )
        dword_140C54A94 = v8;
      goto LABEL_12;
    }
LABEL_27:
    if ( v14 == 1 )
    {
      if ( (_BYTE)v11 == 12 )
        ++dword_140C4AD5C;
      goto LABEL_12;
    }
    goto LABEL_28;
  }
LABEL_13:
  qword_140C4AD50 = sub_1403BF104((unsigned int)(16 * dword_140C4AD5C), 1LL);
  if ( qword_140C4AD50 )
  {
    v16 = 0;
    v17 = a1 + *(unsigned int *)(a1 + 4);
    if ( v4 <= v17 )
    {
      do
      {
        v18 = *(unsigned __int8 *)(v3 + 1);
        if ( (unsigned __int8)v18 < 2u || v3 + v18 > v17 )
          break;
        v19 = v3;
        v3 += v18;
        if ( *(_BYTE *)v19 == 1 && (_BYTE)v18 == 12 )
        {
          v63 = qword_140C4AD50;
          v64 = 2LL * v16++;
          *(_DWORD *)(qword_140C4AD50 + 8 * v64) = *(unsigned __int8 *)(v19 + 2);
          *(_DWORD *)(v63 + 8 * v64 + 4) = *(_DWORD *)(v19 + 4);
          *(_DWORD *)(v63 + 8 * v64 + 8) = *(_DWORD *)(v19 + 8);
        }
      }
      while ( v3 + 2 <= v17 );
    }
    if ( dword_140C4AD5C )
    {
      v20 = (unsigned int)dword_140C4AD5C;
      v21 = (unsigned int)dword_140C4AD5C;
      v22 = qword_140C4AD50 + 8;
      v23 = (unsigned int *)(qword_140C4AD50 + 12);
      do
      {
        v24 = *(v23 - 1);
        v25 = (_DWORD *)v22;
        *v23 = -1;
        v26 = v20;
        do
        {
          if ( *v25 > v24 )
          {
            v69 = *v25 - v24;
            if ( v69 < *v23 )
              *v23 = v69;
          }
          v25 += 4;
          --v26;
        }
        while ( v26 );
        v23 += 4;
        --v21;
      }
      while ( v21 );
    }
    return v89;
  }
  sub_14051E038(0, 30, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 1736);
  return 3221225495LL;
}
