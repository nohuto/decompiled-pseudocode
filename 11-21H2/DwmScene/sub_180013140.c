/*
 * XREFs of sub_180013140 @ 0x180013140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_180012520 @ 0x180012520 (sub_180012520.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180019C5C @ 0x180019C5C (sub_180019C5C.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001D23C @ 0x18001D23C (sub_18001D23C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180036888 @ 0x180036888 (sub_180036888.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 *     sub_18004725C @ 0x18004725C (sub_18004725C.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180013140(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rcx
  __int128 *v14; // rax
  char v15; // si
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // r15
  __int64 v28; // r8
  __int64 v29; // rdx
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  unsigned __int64 v32; // rax
  char *v33; // rcx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rcx
  char *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int128 v57; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v58; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int128 v60; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v62; // [rsp+70h] [rbp-90h] BYREF
  __int128 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int128 v66; // [rsp+A0h] [rbp-60h] BYREF
  char *v67; // [rsp+B0h] [rbp-50h] BYREF
  char *v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  char *v70; // [rsp+C8h] [rbp-38h] BYREF
  char *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  _QWORD v73[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v74; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v75; // [rsp+100h] [rbp+0h] BYREF
  __int128 v76; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v77[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v78[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v79[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v80; // [rsp+150h] [rbp+50h] BYREF
  char v81; // [rsp+158h] [rbp+58h]
  _QWORD v82[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v83[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v84[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v85; // [rsp+190h] [rbp+90h] BYREF
  char v86; // [rsp+198h] [rbp+98h]
  _QWORD v87[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v88; // [rsp+1B0h] [rbp+B0h] BYREF
  char v89; // [rsp+1B8h] [rbp+B8h]
  _BYTE v90[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v91[4]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = qword_1801F7498;
  v5 = *(_QWORD *)(a1 + 16);
  v58 = 0LL;
  v6 = *(_QWORD *)(v5 + 80);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v58 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  sub_18002C460(v58 + 16, &v88);
  v9 = *(_QWORD *)(a1 + 16);
  sub_180043668(v9);
  v61 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
      if ( v12 == v11 )
      {
        v61 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = *(_QWORD *)(a2 + 40);
    }
    v73[0] = *(_QWORD *)(a2 + 32);
    v73[1] = v13;
    v14 = (__int128 *)v73;
    v15 = 5;
  }
  else
  {
    v76 = 0LL;
    v14 = &v76;
    v15 = 6;
  }
  v16 = *((_QWORD *)v14 + 1);
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *(_QWORD *)&v57 = *(_QWORD *)v14;
  *((_QWORD *)&v57 + 1) = v16;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)&v76);
  }
  if ( (v15 & 1) != 0 )
    sub_180010910((__int64)v73);
  if ( sub_1800122D0(&v61, &v57) )
  {
    v60 = 0LL;
    if ( sub_1800122B0(&v57) )
    {
      v17 = *(_QWORD *)(a1 + 184);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 104) = *(_DWORD *)(a1 + 200);
        v77[0] = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        v77[1] = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        sub_180010910((__int64)v77);
      }
      sub_180036888(*(_QWORD *)(v4 + 56), &v62);
      v18 = *((_QWORD *)&v62 + 1);
      v19 = v62;
      v62 = 0LL;
      v78[0] = 0LL;
      v60 = __PAIR128__(v18, v19);
      v78[1] = 0LL;
      sub_180010910((__int64)v78);
      sub_180010910((__int64)&v62);
      sub_18002C460(v19 + 16, &v80);
      v20 = sub_1800129F4(v91, (__int64)&qword_1801F8058);
      v21 = (__int64 *)sub_180046470(v19, v90, v20);
      v22 = *v21;
      v23 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      v79[0] = v57;
      *(_QWORD *)&v57 = v22;
      v79[1] = v16;
      v16 = v23;
      *((_QWORD *)&v57 + 1) = v23;
      sub_180010910((__int64)v79);
      sub_180010910((__int64)v90);
      v27 = 1;
      if ( v81 )
        j_LanguageEnumProc(v80, v24, v25, v26);
    }
    else
    {
      v28 = v57;
      v59 = 0LL;
      v29 = *(_QWORD *)(v57 + 80);
      if ( v29 )
      {
        v30 = *(_DWORD *)(v29 + 8);
        while ( v30 )
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 8), v30 + 1, v30);
          if ( v31 == v30 )
          {
            v59 = *(_OWORD *)(v28 + 72);
            break;
          }
        }
        v16 = *((_QWORD *)&v57 + 1);
      }
      v32 = *((_QWORD *)&v59 + 1);
      v19 = v59;
      v59 = 0LL;
      v82[0] = 0LL;
      v60 = __PAIR128__(v32, v19);
      v82[1] = 0LL;
      sub_180010910((__int64)v82);
      sub_180010910((__int64)&v59);
      v27 = 0;
    }
    if ( sub_1800122D0(&v58, &v60) )
    {
      sub_18002C460(v19 + 16, &v85);
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v27 )
      {
        sub_180012520(v19, (__int64)&v67);
        v33 = v67;
        v34 = v67;
        v35 = (__int64)v68;
        if ( v67 != v68 )
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)v34;
            if ( *(float *)(*(_QWORD *)v34 + 104LL) > 0.000001 )
              break;
            v34 += 16;
            if ( v34 == v68 )
              goto LABEL_49;
          }
          v37 = *((_QWORD *)v34 + 1);
          if ( v37 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
            v36 = *(_QWORD *)v34;
            v37 = *((_QWORD *)v34 + 1);
            v16 = *((_QWORD *)&v57 + 1);
          }
          v83[0] = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 184) = v36;
          v83[1] = *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 192) = v37;
          sub_180010910((__int64)v83);
          v35 = (__int64)v68;
          v33 = v67;
        }
LABEL_49:
        if ( v33 )
        {
          sub_1800126E8((__int64)v33, v35);
          sub_180010884(v67, (v69 - (_QWORD)v67) & 0xFFFFFFFFFFFFFFF0uLL);
        }
      }
      v38 = *(_QWORD *)(a1 + 16);
      v74 = 0LL;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v74 = v57;
      sub_1800400C8(v38, &v64, 131075LL, &v74);
      v63 = 0LL;
      v39 = *(_QWORD *)(a1 + 24);
      if ( v39 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
        v39 = *(_QWORD *)(a1 + 24);
      }
      *(_QWORD *)&v63 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)&v63 + 1) = v39;
      sub_180046DF4(v58, &v63);
      v40 = v65;
      if ( v65 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v65 + 8));
        v40 = v65;
      }
      v84[0] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v64;
      v84[1] = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v40;
      sub_180010910((__int64)v84);
      sub_180010910((__int64)&v64);
      if ( v86 )
        j_LanguageEnumProc(v85, v41, v42, v43);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v27 )
      {
        sub_180012520(v58, (__int64)&v70);
        v44 = v70;
        v45 = v70;
        v46 = (__int64)v71;
        if ( v70 != v71 )
        {
          while ( 1 )
          {
            v47 = *(_QWORD *)v45;
            if ( *(float *)(*(_QWORD *)v45 + 104LL) > 0.000001 )
              break;
            v45 += 16;
            if ( v45 == v71 )
              goto LABEL_69;
          }
          v48 = *((_QWORD *)v45 + 1);
          if ( v48 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v48 + 8));
            v47 = *(_QWORD *)v45;
            v48 = *((_QWORD *)v45 + 1);
            v16 = *((_QWORD *)&v57 + 1);
          }
          v87[0] = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 184) = v47;
          v87[1] = *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 192) = v48;
          sub_180010910((__int64)v87);
          v46 = (__int64)v71;
          v44 = v70;
        }
LABEL_69:
        if ( v44 )
        {
          sub_1800126E8((__int64)v44, v46);
          sub_180010884(v70, (v72 - (_QWORD)v70) & 0xFFFFFFFFFFFFFFF0uLL);
        }
      }
      v75 = 0LL;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v75 = v57;
      v66 = 0LL;
      v49 = *(_QWORD *)(a1 + 24);
      if ( v49 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
        v49 = *(_QWORD *)(a1 + 24);
      }
      *(_QWORD *)&v66 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)&v66 + 1) = v49;
      sub_18004725C(v58, &v66, &v75);
    }
    v50 = *(_QWORD *)(a1 + 184);
    if ( v50 )
      *(_DWORD *)(v50 + 104) = 0;
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) == 0 )
    {
      if ( (_QWORD)v61 )
      {
        v51 = sub_180019C5C(v4);
        if ( v51 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001D23C(v51, a1 + 72);
          else
            sub_18001D120(v51, a1 + 52);
        }
      }
      if ( (_QWORD)v57 )
      {
        v52 = sub_180019C5C(v4);
        if ( v52 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001D23C(v52, a1 + 72);
          else
            sub_18001D120(v52, a1 + 52);
        }
      }
    }
    sub_180010910((__int64)&v60);
  }
  sub_180010910((__int64)&v57);
  sub_180010910((__int64)&v61);
  if ( v89 )
    j_LanguageEnumProc(v88, v53, v54, v55);
  sub_180010910((__int64)&v58);
  return 0LL;
}
