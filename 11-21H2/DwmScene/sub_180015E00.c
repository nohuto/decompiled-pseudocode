/*
 * XREFs of sub_180015E00 @ 0x180015E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
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
__int64 __fastcall sub_180015E00(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rcx
  __int64 *v14; // r14
  char v15; // si
  __int64 v16; // rbx
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int128 v42; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v44; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int128 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v52[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v55; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v56[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v57[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v58; // [rsp+118h] [rbp+10h] BYREF
  char v59; // [rsp+120h] [rbp+18h]
  _QWORD v60[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v61[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v62; // [rsp+148h] [rbp+40h] BYREF
  char v63; // [rsp+150h] [rbp+48h]
  __int64 v64; // [rsp+158h] [rbp+50h] BYREF
  char v65; // [rsp+160h] [rbp+58h]
  _BYTE v66[16]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v67[4]; // [rsp+178h] [rbp+70h] BYREF

  v4 = qword_1801F7498;
  v5 = *(_QWORD *)(a1 + 32);
  v43 = 0LL;
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
        v43 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  sub_18002C460(v43 + 16, &v64);
  v9 = *(_QWORD *)(a1 + 32);
  sub_180043668(v9);
  v51 = 0LL;
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
        v51 = *(_OWORD *)(v9 + 56);
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
    v52[0] = *(_QWORD *)(a2 + 32);
    v52[1] = v13;
    v14 = v52;
    v15 = 5;
  }
  else
  {
    v55 = 0LL;
    v14 = (__int64 *)&v55;
    v15 = 6;
  }
  v16 = v14[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  v17 = *v14;
  *(_QWORD *)&v42 = v17;
  *((_QWORD *)&v42 + 1) = v16;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)&v55);
  }
  if ( (v15 & 1) != 0 )
    sub_180010910((__int64)v52);
  if ( sub_1800122D0(&v51, &v42) )
  {
    v45 = 0LL;
    if ( sub_1800122B0(&v42) )
    {
      sub_180036888(*(_QWORD *)(v4 + 56), &v46);
      v18 = *((_QWORD *)&v46 + 1);
      v19 = v46;
      v46 = 0LL;
      v56[0] = 0LL;
      v45 = __PAIR128__(v18, v19);
      v56[1] = 0LL;
      sub_180010910((__int64)v56);
      sub_180010910((__int64)&v46);
      sub_18002C460(v19 + 16, &v58);
      v20 = sub_1800129F4(v67, (__int64)&qword_1801F7FD8);
      v21 = (__int64 *)sub_180046470(v19, v66, v20);
      v22 = *v21;
      v23 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      v57[0] = v17;
      *(_QWORD *)&v42 = v22;
      v57[1] = v16;
      v16 = v23;
      *((_QWORD *)&v42 + 1) = v23;
      sub_180010910((__int64)v57);
      sub_180010910((__int64)v66);
      if ( v59 )
        j_LanguageEnumProc(v58, v24, v25, v26);
    }
    else
    {
      v44 = 0LL;
      v27 = *(_QWORD *)(v17 + 80);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 + 8);
        while ( v28 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 8), v28 + 1, v28);
          if ( v29 == v28 )
          {
            v44 = *(_OWORD *)(v17 + 72);
            break;
          }
        }
        v16 = *((_QWORD *)&v42 + 1);
      }
      v30 = *((_QWORD *)&v44 + 1);
      v19 = v44;
      v44 = 0LL;
      v60[0] = 0LL;
      v45 = __PAIR128__(v30, v19);
      v60[1] = 0LL;
      sub_180010910((__int64)v60);
      sub_180010910((__int64)&v44);
    }
    if ( sub_1800122D0(&v43, &v45) )
    {
      sub_18002C460(v19 + 16, &v62);
      v31 = *(_QWORD *)(a1 + 32);
      v53 = 0LL;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v53 = v42;
      sub_1800400C8(v31, &v48, 131075LL, &v53);
      v47 = 0LL;
      v32 = *(_QWORD *)(a1 + 40);
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
        v32 = *(_QWORD *)(a1 + 40);
      }
      *(_QWORD *)&v47 = *(_QWORD *)(a1 + 32);
      *((_QWORD *)&v47 + 1) = v32;
      sub_180046DF4(v43, &v47);
      v33 = v49;
      if ( v49 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
        v33 = v49;
      }
      v61[0] = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v48;
      v61[1] = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v33;
      sub_180010910((__int64)v61);
      sub_180010910((__int64)&v48);
      if ( v63 )
        j_LanguageEnumProc(v62, v34, v35, v36);
    }
    else
    {
      v54 = 0LL;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v54 = v42;
      v50 = 0LL;
      v37 = *(_QWORD *)(a1 + 40);
      if ( v37 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
        v37 = *(_QWORD *)(a1 + 40);
      }
      *(_QWORD *)&v50 = *(_QWORD *)(a1 + 32);
      *((_QWORD *)&v50 + 1) = v37;
      sub_18004725C(v43, &v50, &v54);
    }
    sub_180010910((__int64)&v45);
  }
  sub_180010910((__int64)&v42);
  sub_180010910((__int64)&v51);
  if ( v65 )
    j_LanguageEnumProc(v64, v38, v39, v40);
  sub_180010910((__int64)&v43);
  return 0LL;
}
