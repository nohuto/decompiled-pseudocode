/*
 * XREFs of sub_140339520 @ 0x140339520
 * Callers:
 *     sub_14023ECD8 @ 0x14023ECD8 (sub_14023ECD8.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 * Callees:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_140232BE4 @ 0x140232BE4 (sub_140232BE4.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_1402538D0 @ 0x1402538D0 (sub_1402538D0.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140282D10 @ 0x140282D10 (sub_140282D10.c)
 *     sub_1402CD940 @ 0x1402CD940 (sub_1402CD940.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_14032E680 @ 0x14032E680 (sub_14032E680.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_140339CA0 @ 0x140339CA0 (sub_140339CA0.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 */

__int64 sub_140339520(__int64 a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // r9d
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r10
  ULONG_PTR *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  signed __int32 v33; // ecx
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdi
  int v38; // r13d
  __int64 v39; // rdx
  __int64 result; // rax
  unsigned __int64 v41; // r9
  _BYTE *v42; // rbx
  unsigned __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rbx
  __int64 **v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  int v50; // eax
  __int64 **v51; // r14
  bool v52; // zf
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // eax
  char v57; // cl
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r13
  int v62; // eax
  unsigned int v63; // edi
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 *v66; // rax
  __int64 v67; // [rsp+20h] [rbp-E0h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+50h] [rbp-B0h]
  unsigned int v70; // [rsp+58h] [rbp-A8h]
  ULONG_PTR *v71; // [rsp+60h] [rbp-A0h]
  BOOL v72; // [rsp+68h] [rbp-98h]
  unsigned int v73; // [rsp+68h] [rbp-98h]
  __int64 **v74; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v75; // [rsp+78h] [rbp-88h]
  unsigned __int64 v76; // [rsp+80h] [rbp-80h]
  unsigned int v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v84; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v86; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-20h]
  int v89; // [rsp+148h] [rbp+48h] BYREF
  __int64 v90; // [rsp+150h] [rbp+50h] BYREF
  va_list va; // [rsp+150h] [rbp+50h]
  __int64 *v92; // [rsp+158h] [rbp+58h]
  va_list va1; // [rsp+160h] [rbp+60h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v90 = va_arg(va1, _QWORD);
  v92 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)a2;
  v76 = *(_QWORD *)a1;
  v85 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v80 = *(_QWORD *)(a1 + 56);
  v84 = 0LL;
  v86 = 0LL;
  v77 = 0;
  v79 = v3;
  v72 = sub_140317A80(a2);
  if ( v72 )
  {
    if ( (dword_140D06880 & 0xC00000) != 0 )
    {
      v5 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_BYTE *)(v5 + 912) != 1 && (v2 & 1) != 0 && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
      {
        v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v5 )
        {
          v55 = *(_QWORD *)(v5 + 8 * ((a2 >> 3) & 0x1FF));
          v5 = v2 | 0x20;
          if ( (v55 & 0x20) == 0 )
            v5 = v2;
          v2 = v5;
          if ( (v55 & 0x42) != 0 )
            v2 = v5 | 0x42;
        }
      }
    }
  }
  LODWORD(v8) = 2;
  v75 = 0LL;
  v69 = 2;
  if ( (*((_BYTE *)KeGetCurrentThread() + 1384) & 4) != 0 )
  {
    LOBYTE(v5) = 17;
    sub_140334790(v90, v5, v6, v7);
    return 3221225633LL;
  }
  v9 = v3 & 1;
  v10 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v3 & 1) != 0 )
  {
    switch ( *(_BYTE *)v10 )
    {
      case 5:
        if ( (*(_DWORD *)(v10 + 56) & 4) != 0 )
        {
          LOBYTE(v5) = 17;
          sub_140334790(v90, v5, v6, v7);
          return 3221225495LL;
        }
        v75 = 0LL;
        break;
      case 1:
        v52 = (*(_DWORD *)(v10 + 80) & 0x100) == 0;
        v75 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v52 )
        {
          LOBYTE(v5) = 17;
          sub_140334790(v90, v5, v6, v7);
          return 0LL;
        }
        v69 = 0;
        break;
      case 2:
        v75 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
    }
  }
  v82 = v2 & 0x400;
  if ( (v2 & 0x400) != 0 )
  {
    v11 = v2;
    if ( qword_140C50780 && (v2 & 0x10) == 0 )
      v11 = v2 & ~qword_140C50780;
    v78 = 0LL;
  }
  else
  {
    v5 = qword_140C50780;
    v53 = v2 >> 12;
    v6 = 0xFFFFFFFFFFLL;
    if ( qword_140C50780 )
    {
      if ( (v2 & 0x10) != 0 )
        v54 = 3 * (v53 & 0xFFFFFFFFFFLL);
      else
        v54 = 3 * (v53 & ((unsigned __int64)~qword_140C50780 >> 12) & 0xFFFFFFFFFFLL);
      v78 = 16 * v54 - 0x220000000000LL;
      v11 = *(_QWORD *)(v78 + 16);
      if ( (v11 & 0x10) == 0 )
      {
        v5 = ~qword_140C50780;
        v11 &= ~qword_140C50780;
      }
    }
    else
    {
      v78 = 48 * (v53 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v11 = *(_QWORD *)(v78 + 16);
    }
  }
  v12 = v11 >> 16;
  v13 = *(_QWORD *)v12;
  v14 = *(unsigned int *)(*(_QWORD *)v12 + 56LL);
  if ( (v14 & 0x10) != 0 )
  {
    LOBYTE(v5) = 17;
    sub_140334790(v90, v5, v6, v7);
    return 3221225478LL;
  }
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0LL;
  v70 = -1;
  v83 = 0LL;
  v81 = v15;
  if ( (*(_BYTE *)(v12 + 34) & 2) == 0 || (v14 & 0x8000000) == 0 )
  {
    v17 = a1;
    goto LABEL_12;
  }
  v56 = sub_1402CD940(v14, v76);
  v18 = v56;
  v70 = v56;
  if ( v76 < 0xFFFF800000000000uLL )
    goto LABEL_104;
  if ( v9 )
  {
    v57 = *(_BYTE *)v10;
    if ( *(_BYTE *)v10 != 1 && v57 != 3 && v57 != 6 )
      goto LABEL_104;
LABEL_107:
    v17 = a1;
    v59 = *(_QWORD *)(a1 + 16);
    if ( (v59 & 1) == 0 || *(_BYTE *)(v59 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_109;
    goto LABEL_105;
  }
  v58 = sub_140230BA0(v79, 0);
  v18 = v70;
  if ( v58 )
    goto LABEL_107;
LABEL_104:
  v17 = a1;
LABEL_105:
  v16 = sub_140256DF8(v13, v18, v12);
  v83 = v16;
  v15 = *(_QWORD *)(v16 + 72);
  v81 = v15;
LABEL_12:
  v18 = v15 - 8LL * (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(v12 + 44);
  if ( a2 >= v18 )
  {
LABEL_109:
    LOBYTE(v18) = 17;
    sub_140334790(v90, v18, v15, v16);
    return 3221225477LL;
  }
  v19 = 0;
  v71 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v13 + 60) & 0x3FF));
  if ( (*(_BYTE *)(v13 + 62) & 0xC) == 4 )
  {
    if ( v16 )
    {
      v74 = 0LL;
      v19 = sub_140339370(v17, v13, &v74);
      v89 = 1;
      v22 = 0;
      LODWORD(v8) = 1;
    }
    else
    {
      v89 = 1;
      v22 = 0;
    }
  }
  else
  {
    v74 = 0LL;
    v20 = sub_140339370(v17, v13, &v74);
    v8 = v75;
    v19 = v20;
    v89 = 0;
    if ( v75 )
    {
      v51 = v74;
      if ( !v74 )
      {
        sub_1402ED128(1);
        v74 = sub_1403126F0(v76);
        v51 = v74;
        sub_1402806E0(1, 0x11u);
      }
      v50 = sub_140232BE4((__int64)v71, v8, (__int64)v51, 0);
      LODWORD(v8) = 0;
      goto LABEL_56;
    }
    v21 = v69;
    v22 = v69;
    if ( (v2 & 0x400) != 0 && (*(_BYTE *)(v13 + 56) & 0x20) == 0 && (*(_BYTE *)(v80 + 184) & 7) == 0 )
    {
      v46 = v74;
      if ( !v74 )
      {
        sub_1402ED128(1);
        v74 = sub_1403126F0(v76);
        v46 = v74;
        sub_1402806E0(1, 0x11u);
        v21 = v69;
      }
      v47 = (__int64)v46[15];
      v22 = v21;
      v87 = v47;
      if ( v47 >= 0 )
      {
        v48 = v47 & 0xFFF;
        if ( v48 >= 0x11 && (v76 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v47 >> 12) - 1 + v48) << 12 )
        {
          v49 = a2 + 8;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v49 < -8LL * (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF) + v81 + 8LL * *(unsigned int *)(v12 + 44)
            && sub_140317A10(v49) == v2 )
          {
            v50 = (v87 & 0xFFF) - 1;
LABEL_56:
            v22 = v69;
            v89 = v50;
          }
        }
      }
    }
  }
  v26 = sub_140339CA0(a2, v22, &v89, (__int64 *)va);
  if ( !v26 )
  {
    result = 3221225626LL;
    goto LABEL_77;
  }
  v27 = *(_QWORD *)a2;
  if ( v72 )
  {
    if ( (dword_140D06880 & 0xC00000) != 0 )
    {
      v23 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_BYTE *)(v23 + 912) != 1 && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v23 = *((_QWORD *)KeGetCurrentThread() + 23);
        v24 = *(_QWORD *)(v23 + 1928);
        if ( v24 )
        {
          v60 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
          v24 = v27 | 0x20;
          v23 = (unsigned __int8)v60;
          if ( (v60 & 0x20) == 0 )
            v24 = *(_QWORD *)a2;
          v27 = v24;
          if ( (v60 & 0x42) != 0 )
            v27 = v24 | 0x42;
        }
      }
    }
  }
  if ( v27 == v2 && (v82 || (*(_BYTE *)(v78 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v78 + 160LL) & 0x20) == 0) )
  {
    if ( (_DWORD)v8 == 2 )
    {
      v61 = v90;
      goto LABEL_136;
    }
    if ( v75 && *v75 == 1 )
      sub_1402538D0((__int64)v75, v26);
    v73 = sub_14032E680(0LL, (*(unsigned __int16 *)(v12 + 32) >> 1) & 0x1F, (v2 >> 5) & 0x1F);
    sub_140339C20(v80, v19, &v86);
    if ( (_DWORD)v8 == 1 )
      goto LABEL_27;
    if ( (*(_DWORD *)(v13 + 56) & 0x40020) != 32
      || (*(_BYTE *)(v13 + 62) & 0xC) != 0
      || (v2 & 0x400) == 0
      || dword_140C531D8 )
    {
      goto LABEL_38;
    }
    if ( v28 )
    {
      v29 = v71;
      if ( *(_BYTE *)v28 == 1 && !sub_140266B40(v71, ((*(_DWORD *)(v28 + 80) >> 3) & 7u) + 1) )
        goto LABEL_38;
    }
    else
    {
LABEL_27:
      v29 = v71;
    }
    if ( sub_140329630(v29, 1uLL, 1) )
    {
      v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v86, 1u);
      v34 = HIDWORD(v86) | v33 & DWORD2(v86);
      if ( v82 && (unsigned int)sub_140313D20((__int64)v29, (__int64 *)v12, v2, (int *)&v77) && v77 <= 3 )
        v35 = sub_1402EB440((__int64)v29, v77, v34, 0, 0LL, 0);
      else
        v35 = sub_1403250B0((__int64)v29, v34, 0);
      v36 = v35;
      if ( v35 != -1 )
      {
        if ( (_DWORD)v8 != 1 )
        {
          v37 = v90;
          v38 = v79;
          v39 = v80;
          v68 = v90;
          v67 = v79;
          *(_QWORD *)(v26 + 224) = v76;
          if ( (unsigned int)sub_14026F180(v26, v39, (__int64 *)v12, a2, v67, v35, v68) )
          {
LABEL_36:
            *v92 = v26;
            return 3221435187LL;
          }
          goto LABEL_39;
        }
        v61 = v90;
        v62 = sub_14059DB28(v26, v12, a2, v79, v35, v90, v83);
        v63 = v62;
        if ( v62 >= 0 )
          goto LABEL_36;
        if ( v62 == -1073741739 )
        {
          v63 = 0;
LABEL_130:
          LOBYTE(v23) = 17;
          sub_140334790(v61, v23, v24, v25);
          sub_14027456C((PSLIST_ENTRY)v26);
          return v63;
        }
        if ( v62 != -1073740748 )
        {
          if ( v62 == -1073532109 )
          {
            v63 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 0x100u;
          }
          goto LABEL_130;
        }
LABEL_136:
        LOBYTE(v23) = 17;
        sub_140334790(v61, v23, v24, v25);
        v65 = *(_DWORD *)(v26 + 192) & 0xFFFBFFFF;
        *(_DWORD *)(v26 + 312) = 0;
        *(_QWORD *)(v26 + 208) = v12;
        *(_DWORD *)(v26 + 192) = v65 | 1;
        v66 = v92;
        *(_DWORD *)(v26 + 184) = 0;
        *(_QWORD *)(v26 + 168) = v2;
        *(_QWORD *)(v26 + 232) = a2;
        *v66 = v26;
        result = 3221435187LL;
        *(_QWORD *)(v26 + 160) = 0LL;
        *(_QWORD *)(v26 + 256) = 0LL;
        *(_DWORD *)(v26 + 80) = 0;
        return result;
      }
      sub_14024AA58((__int64)v71, 1uLL, 1);
    }
    if ( (_DWORD)v8 == 1 )
    {
      v64 = v90;
LABEL_133:
      LOBYTE(v30) = 17;
      sub_140334790(v64, v30, v31, v32);
      sub_14027456C((PSLIST_ENTRY)v26);
      return 3221225495LL;
    }
LABEL_38:
    v37 = v90;
    v36 = -1LL;
    v38 = v79;
LABEL_39:
    v41 = v81;
    *(_DWORD *)(v26 + 184) = v89;
    *(_QWORD *)(v26 + 168) = v2;
    v42 = v75;
    *(_QWORD *)(v26 + 232) = a2;
    *(_QWORD *)(v26 + 160) = v37;
    *(_QWORD *)(v26 + 208) = v12;
    v43 = sub_140282D10((__int64)v71, v26, (__int64)v42, v41, v70, v36, &v85, &v84);
    v44 = sub_140313DE0(v26, v85, v84, (__int64)v71, v43, v36, v73, (__int64)v42, a1, (__int64)&v86);
    v45 = v44;
    if ( v44 != v43 )
      sub_14024AA58((__int64)v71, v43 - v44, 1);
    if ( v45 )
    {
      sub_14033DC30(v26, v38, v45, v78, v70);
      *v92 = v26;
      return 3221435187LL;
    }
    v64 = v37;
    goto LABEL_133;
  }
  LOBYTE(v23) = 17;
  sub_140334790(v90, v23, v24, v25);
  sub_14027456C((PSLIST_ENTRY)v26);
  result = 3221226548LL;
LABEL_77:
  if ( v75 )
    v75[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
