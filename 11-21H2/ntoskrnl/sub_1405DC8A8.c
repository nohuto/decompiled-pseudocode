/*
 * XREFs of sub_1405DC8A8 @ 0x1405DC8A8
 * Callers:
 *     sub_1402396F0 @ 0x1402396F0 (sub_1402396F0.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D8398 @ 0x1405D8398 (sub_1405D8398.c)
 *     sub_1405D98BC @ 0x1405D98BC (sub_1405D98BC.c)
 *     sub_1405DA494 @ 0x1405DA494 (sub_1405DA494.c)
 */

__int64 __fastcall sub_1405DC8A8(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        _DWORD *a11,
        __int64 a12,
        unsigned int a13,
        unsigned __int8 a14,
        unsigned __int8 a15)
{
  __int64 v17; // rdi
  __int64 result; // rax
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int16 v22; // ax
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // cx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r9
  unsigned int v34; // r11d
  char v35; // dl
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  char v38; // r14
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // rax
  int v41; // r9d
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // r14
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // r8
  unsigned __int64 v50; // r10
  __int64 *v51; // r9
  unsigned int v52; // r11d
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int8 v62; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v63; // [rsp+51h] [rbp-AFh]
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  unsigned int v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  __int64 *v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v75; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-48h]
  _QWORD v77[102]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v78[68]; // [rsp+3F0h] [rbp+2F0h] BYREF

  v72 = a3;
  v17 = a1;
  v71 = a4;
  v73 = (__int64 *)a9;
  v75 = a10;
  memset(&v78[34], 0, 0x108uLL);
  memset(v77, 0, 0x108uLL);
  memset(&v77[68], 0, 0x108uLL);
  memset(&v77[34], 0, 0x108uLL);
  result = (__int64)memset(v78, 0, 0x108uLL);
  v19 = a9;
  v67 = 0;
  *a9 = 0LL;
  *a10 = 0LL;
  if ( !a6 )
  {
    *a9 = a2;
    return result;
  }
  v20 = a2 - ((a2 >> 1) & 0x5555555555555555LL);
  result = (0x101010101010101LL
          * (((v20 & 0x3333333333333333LL)
            + ((v20 >> 2) & 0x3333333333333333LL)
            + (((v20 & 0x3333333333333333LL) + ((v20 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a6 == (_DWORD)result && !a5 )
  {
    *a10 = a2;
    return result;
  }
  v21 = (v20 & 0x3333333333333333LL) + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  result = (0x101010101010101LL * ((v21 + (v21 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a5 != (_DWORD)result )
  {
    if ( !a5 || !qword_140C23B50 )
    {
      v29 = 0LL;
      v30 = 0LL;
LABEL_37:
      result = a8;
      v74 = v30;
      v68 = v29;
      *v19 = a2;
      v31 = a2 & ~(a8 | a7 | v29 | v30);
      if ( (a2 & a8) != 0 )
      {
        *a11 |= 0x200u;
        v32 = a8 & *v19;
      }
      else if ( (a2 & v30) != 0 )
      {
        *a11 |= 0x400u;
        v32 = v30 & *v19;
      }
      else if ( (a2 & ~(a8 | a7 | v29 | v30)) != 0 )
      {
        *a11 |= 0x800u;
        v32 = v31 & *v19;
      }
      else
      {
        v32 = v29 & a2;
        if ( (v29 & a2) != 0 )
          *a11 |= 0x80000u;
        else
          v32 = 0LL;
      }
      v33 = v72;
      v34 = 0;
      v35 = 0;
      v36 = v72 & v71;
      v64 = v32;
      v66 = v32;
      v69 = v32;
      v37 = v71 & (a2 ^ v72);
      v38 = -1;
      v39 = v32;
      v70 = v32;
      v76 = v72 & v71;
      v71 = v37;
      v67 = 0;
      v63 = -1;
      v62 = -1;
      v65 = 0;
      while ( 1 )
      {
        if ( !v39 )
          return result;
        if ( (v36 & v39) != 0 )
        {
          *a11 |= 0x20000u;
          v39 &= v36;
        }
        if ( ((dword_140D0696C - 3) & 0xFFFFFFFD) != 0 )
        {
          v46 = v69;
        }
        else
        {
          *a11 |= 0x8000u;
          v40 = sub_1405D8398(v39, v17, &v62, a14, a15, a13, v34, &v70, &v64);
          v39 = v40;
          if ( v62 != v38 )
          {
            v63 = v62;
            v41 = 0;
            v42 = v40;
            v43 = (0x101010101010101LL
                 * ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            v44 = *(_QWORD *)a12
                % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                   * ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
                + 1;
            if ( *(_QWORD *)a12
               % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                  * ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) != -1LL )
            {
              do
              {
                _BitScanForward64(&v45, v42);
                v41 += v45 + 1;
                v42 >>= (unsigned __int8)v45 + 1;
                --v44;
              }
              while ( v44 );
            }
            v65 = v41 - 1;
            sub_1405D98BC(v43, v41 - 1);
          }
          v32 = v64;
          v46 = v70;
          v37 = v71;
          v35 = v65;
          v33 = v72;
        }
        if ( (v37 & v39) != 0 )
        {
          *a11 |= 0x1000u;
          v39 &= v37;
        }
        if ( !*(_BYTE *)(a12 + 16) && (v39 & ~v33) != 0 )
        {
          *a11 |= 0x2000u;
          v39 &= ~v33;
        }
        LODWORD(v64) = 0;
        _BitScanForward64(&v47, __ROR8__(v39, v35));
        v48 = (_QWORD *)sub_140348800(dword_140D105E0[64 * (_DWORD)v17 + (((_BYTE)v47 + v35) & 0x3F)]);
        v49 = v48;
        if ( byte_140C1CF24 )
          v50 = v48[4364];
        else
          v50 = v48[25];
        v51 = v73;
        v52 = v67;
        v53 = ~v50;
        *v73 &= ~v50;
        if ( v52 >= a5 )
          *v75 |= v50;
        v54 = ((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v34 = ((unsigned int)((0x101010101010101LL * ((v54 + (v54 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) + v52;
        v55 = v48[24];
        v67 = v34;
        v39 &= ~*(_QWORD *)(v55 + 128);
        v56 = ~v49[*((unsigned __int8 *)v49 + 208) + 4323] & v66;
        v66 = v56;
        if ( !dword_140D052D8 )
          break;
        if ( dword_140D052D8 != 1 )
        {
          v57 = 0LL;
LABEL_78:
          v69 = v57;
          goto LABEL_79;
        }
        if ( (unsigned __int16)v17 >= *((_WORD *)v49 + 19528) )
          v58 = 0LL;
        else
          v58 = v49[v17 + 4883];
        v57 = v46 & v58 & v53;
        v69 = v57;
LABEL_79:
        v60 = ~v49[4364];
        v70 = v57;
        result = v32 & v60;
        v64 = result;
        v32 = result;
        if ( !v39 )
        {
          if ( !v56 )
          {
            v66 = result;
            v56 = result;
            if ( !result )
            {
              result = *v51;
              if ( (*v51 & a8) != 0 )
              {
                *a11 |= 0x200u;
                goto LABEL_84;
              }
              if ( (result & v74) != 0 )
              {
                *a11 |= 0x400u;
LABEL_84:
                v32 = a8 & *v51;
LABEL_85:
                v56 = v32;
                v66 = v32;
              }
              else
              {
                if ( (result & v31) != 0 )
                {
                  *a11 |= 0x800u;
                  v32 = v31 & *v51;
                  goto LABEL_85;
                }
                v61 = v68;
                if ( (result & v68) != 0 )
                {
                  *a11 |= 0x80000u;
                  v32 = v61 & *v51;
                  goto LABEL_85;
                }
                v32 = 0LL;
                v56 = 0LL;
                v66 = 0LL;
              }
              v64 = v32;
            }
            if ( !v57 )
              v57 = v32;
            v69 = v57;
            v70 = v57;
          }
          v39 = v56;
        }
        v37 = v71;
        v35 = v65;
        v36 = v76;
        v38 = v63;
        v33 = v72;
        if ( v34 >= a6 )
          return result;
      }
      if ( (unsigned __int16)v17 >= *((_WORD *)v49 + 19528) )
        v59 = 0LL;
      else
        v59 = v49[v17 + 4883];
      v57 = v46 & ~v59;
      goto LABEL_78;
    }
    LODWORD(v77[34]) = 2097153;
    memset((char *)&v77[34] + 4, 0, 0x104uLL);
    LODWORD(v78[34]) = 2097153;
    memset((char *)&v78[34] + 4, 0, 0x104uLL);
    LODWORD(v77[0]) = 2097153;
    memset((char *)v77 + 4, 0, 0x104uLL);
    LODWORD(v77[68]) = 2097153;
    memset((char *)&v77[68] + 4, 0, 0x104uLL);
    LODWORD(v78[0]) = 2097153;
    memset((char *)v78 + 4, 0, 0x104uLL);
    v22 = v17 + 1;
    if ( (_WORD)v17 )
    {
      if ( WORD1(v77[34]) <= (unsigned __int16)v17 )
        goto LABEL_20;
      LOWORD(v77[34]) = v17 + 1;
    }
    v77[v17 + 35] |= a2;
LABEL_20:
    v23 = v77[0];
    if ( LOWORD(v77[0]) <= (unsigned __int16)v17 )
    {
      v24 = WORD1(v77[0]);
      if ( WORD1(v77[0]) <= (unsigned __int16)v17 )
      {
        v25 = a7;
LABEL_25:
        if ( v23 <= (unsigned __int16)v17 )
        {
          if ( v24 <= (unsigned __int16)v17 )
          {
LABEL_29:
            sub_14042A5E0(0LL, qword_140C204B8);
            if ( (unsigned __int16)v17 >= LOWORD(v77[68]) )
              v26 = 0LL;
            else
              v26 = v77[v17 + 69];
            v68 = v26;
            if ( (unsigned __int16)v17 >= LOWORD(v78[0]) )
              v27 = 0LL;
            else
              v27 = v78[v17 + 1];
            sub_1405DA494(v17, a2, a5, v25, a8, v26, v27, v78);
            v19 = (unsigned __int64 *)v73;
            v28 = ~(a8 | v25);
            v29 = v28 & v68;
            v30 = v28 & v27;
            goto LABEL_37;
          }
          LOWORD(v77[0]) = v22;
        }
        v77[v17 + 1] |= a8;
        goto LABEL_29;
      }
      v22 = v17 + 1;
      LOWORD(v77[0]) = v17 + 1;
    }
    v25 = a7;
    v77[v17 + 1] |= a7;
    v24 = WORD1(v77[0]);
    v23 = v77[0];
    goto LABEL_25;
  }
  if ( qword_140C23B50 && a3 )
  {
    LODWORD(v77[34]) = 2097153;
    memset((char *)&v77[34] + 4, 0, 0x104uLL);
    LODWORD(v78[34]) = 2097153;
    memset((char *)&v78[34] + 4, 0, 0x104uLL);
    LODWORD(v77[0]) = 2097153;
    memset((char *)v77 + 4, 0, 0x104uLL);
    LODWORD(v77[68]) = 2097153;
    memset((char *)&v77[68] + 4, 0, 0x104uLL);
    LODWORD(v78[0]) = 2097153;
    memset((char *)v78 + 4, 0, 0x104uLL);
    if ( (_WORD)v17 )
    {
      if ( WORD1(v77[34]) <= (unsigned __int16)v17 )
        return sub_14042A5E0(0LL, qword_140C204B8);
      LOWORD(v77[34]) = v17 + 1;
    }
    v77[v17 + 35] |= a2;
    return sub_14042A5E0(0LL, qword_140C204B8);
  }
  return result;
}
