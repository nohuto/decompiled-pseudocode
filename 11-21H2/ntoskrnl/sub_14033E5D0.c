/*
 * XREFs of sub_14033E5D0 @ 0x14033E5D0
 * Callers:
 *     sub_14024DB60 @ 0x14024DB60 (sub_14024DB60.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140240C38 @ 0x140240C38 (sub_140240C38.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_14033E5D0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // rsi
  int v18; // r14d
  int v19; // r12d
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int16 v26; // ax
  __int64 v27; // r15
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  int v37; // eax
  unsigned __int8 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v39; // [rsp+41h] [rbp-BFh]
  int v40; // [rsp+44h] [rbp-BCh]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v53; // [rsp+A4h] [rbp-5Ch]
  __int16 v54; // [rsp+A6h] [rbp-5Ah]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  _BYTE v58[152]; // [rsp+C0h] [rbp-40h] BYREF

  v45 = a3;
  v5 = a3;
  v48 = 0LL;
  v47 = 0;
  v50 = 0LL;
  v44 = a4;
  v54 = 0;
  memset(v58, 0, sizeof(v58));
  v40 = 0;
  v8 = 0;
  v41 = 0LL;
  v9 = 0LL;
  v38 = 17;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = 20LL;
  v52 = 1;
  v12 = 0LL;
  v53 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v46 = v11;
  v43 = 0LL;
  v51 = *((_QWORD *)KeGetCurrentThread() + 23);
  v42 = v51 + 1664;
  v39 = sub_1402CF4F0(v51 + 1664);
  v13 = v39;
  if ( v10 > v11 )
    goto LABEL_31;
  do
  {
    if ( v43 )
    {
      sub_14020D8D0(v42, v43);
      v43 = 0LL;
    }
    v14 = sub_14028F080(v10, v11, (__int64)&v52, v13, 0, &v47);
    v16 = 1;
    if ( v14 != v10 )
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x200000) != 0
        || !*(_QWORD *)(v5 + 80)
        || !sub_140319600(v5, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49) )
      {
        v8 = -1073740748;
        v40 = -1073740748;
        if ( !v14 )
        {
          v12 = v43;
          v13 = v39;
          break;
        }
        v10 = v14;
LABEL_6:
        v43 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_7;
      }
      v16 = 0;
    }
    if ( v14 )
      goto LABEL_6;
LABEL_7:
    while ( 1 )
    {
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      if ( v16 )
      {
        v20 = *(_QWORD *)v10;
        if ( sub_140317A80(v10)
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v29 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 8 * ((v10 >> 3) & 0x1FF));
            v31 = v20 | 0x20;
            if ( (v30 & 0x20) == 0 )
              v31 = v20;
            v20 = v31;
            if ( (v30 & 0x42) != 0 )
              v20 = v31 | 0x42;
          }
        }
        if ( v20 )
          break;
      }
      v21 = v45;
      if ( (*(_DWORD *)(v45 + 48) & 0x200000) == 0 && *(_QWORD *)(v45 + 80) )
      {
        v17 = sub_140319600(v45, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49);
        if ( v17 )
          goto LABEL_65;
        if ( !v16 )
        {
          v8 = v40;
LABEL_98:
          v11 = v46;
LABEL_23:
          if ( v9 )
          {
            sub_140334790(v9, v38, v21, v15);
            v9 = 0LL;
            v41 = 0LL;
          }
          sub_14032F1B0((__int64)&v52);
          v12 = v43;
          v27 = v42;
          if ( v43 )
          {
            sub_14020D8D0(v42, v43);
            v12 = 0LL;
            v43 = 0LL;
          }
          sub_1402B0CE0(v27, v39);
          if ( v19 == -1073740748 )
            sub_1405BCAF8(v27, 3221226548LL);
          v13 = v39;
          goto LABEL_30;
        }
      }
LABEL_12:
      if ( v9 )
      {
        sub_140334790(v9, v38, v21, v15);
        v9 = 0LL;
        v22 = 0LL;
        v41 = 0LL;
      }
      else
      {
        v22 = v41;
      }
LABEL_14:
      v23 = sub_14033E970(v45, v16, v10, v17, v44, a5, &v50, &v48);
      switch ( v23 )
      {
        case 0u:
          goto LABEL_15;
        case 0x112u:
          sub_1402CF280((__int64)&v52, (__int64)(v10 << 25) >> 16, 1LL, 0);
          sub_14032F1B0((__int64)&v52);
          v37 = sub_140316400((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          v22 = v41;
          v19 = v37;
          v10 -= 8LL;
          v18 = 1;
          goto LABEL_15;
        case 0xC0000021:
          sub_1402CF280((__int64)&v52, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_15:
          v8 = v40;
          goto LABEL_16;
      }
      v8 = v23;
      v40 = v23;
LABEL_16:
      v24 = v48;
      if ( v48 )
      {
        if ( v9 )
        {
          sub_140334790(v9, v38, v21, v15);
          v24 = v48;
          v9 = 0LL;
          v22 = 0LL;
          v41 = 0LL;
        }
        sub_1402E20D0(v50, v24, 1);
      }
      v10 += 8LL;
      v25 = v10;
      v26 = v10;
      if ( v18 )
        goto LABEL_98;
      v40 = v8;
      v41 = v22;
      if ( v19 < 0 )
        goto LABEL_98;
LABEL_19:
      v11 = v46;
      if ( v25 > v46
        || (v26 & 0xFFF) == 0
        || (v26 & 0x78) == 0 && (unsigned int)sub_1403531F0(v42)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_23;
      }
    }
    if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 )
      goto LABEL_12;
    v32 = v44;
    if ( v44 == 2 && sub_1402802DC(v20) )
    {
      v33 = v20;
      if ( qword_140C50780 && (v20 & 0x10) == 0 )
        v33 = v20 & ~qword_140C50780;
      v17 = v33 >> 16;
    }
    else
    {
      if ( sub_1402802DC(v20) )
      {
        if ( v32 == 1 )
          goto LABEL_91;
        if ( v9 )
        {
          sub_140334790(v9, v38, v21, v15);
          v9 = 0LL;
          v41 = 0LL;
        }
        sub_14032F1B0((__int64)&v52);
        v40 = sub_140240C38(v10, 24LL, v39);
        v8 = v40;
        if ( v40 < 0 )
        {
LABEL_91:
          v8 = -1073740748;
          v40 = -1073740748;
        }
        else
        {
          v10 -= 8LL;
        }
        v25 = v10 + 8;
        v10 = v25;
        v26 = v25;
        goto LABEL_19;
      }
      v34 = ((__int64)(v10 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v34 == 2147352576 || v34 == qword_140C50678 && qword_140C50678) && (*(_DWORD *)(v51 + 2172) & 1) == 0 )
        goto LABEL_91;
      v21 = v45;
      if ( (*(_DWORD *)(v45 + 48) & 0x200000) != 0 || !*(_QWORD *)(v45 + 80) )
        goto LABEL_108;
      v17 = sub_140319600(v45, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49);
      if ( !sub_1402806A0(v20) )
      {
        v35 = v20;
        if ( qword_140C50780 && (v20 & 0x10) == 0 )
          v35 = v20 & ~qword_140C50780;
        if ( v17 != v35 >> 16 )
        {
LABEL_108:
          v36 = v20;
          if ( qword_140C50780 && (v20 & 0x10) == 0 )
            v36 = v20 & ~qword_140C50780;
          v17 = v36 >> 16;
          if ( v44 != 2 )
            goto LABEL_91;
        }
      }
    }
    if ( !v17 )
      goto LABEL_12;
LABEL_65:
    v22 = v41;
    if ( ((v17 ^ v41) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      goto LABEL_14;
    if ( v9 )
    {
      sub_140334790(v9, v38, v21, v15);
      v41 = 0LL;
    }
    v9 = sub_140273AF0(v17, (__int64)&v38);
    if ( v9 )
    {
      v22 = v17;
      v41 = v17;
      goto LABEL_14;
    }
    sub_14032F1B0((__int64)&v52);
    v12 = v43;
    if ( v43 )
    {
      sub_14020D8D0(v42, v43);
      v12 = 0LL;
      v43 = 0LL;
    }
    v13 = v39;
    sub_1402B0CE0(v42, v39);
    sub_14031C860(2uLL, v17, 0, 0LL);
    v8 = v40;
    v11 = v46;
LABEL_30:
    sub_1402CF4F0(v42);
    v5 = v45;
  }
  while ( v10 <= v11 );
LABEL_31:
  sub_14032F1B0((__int64)&v52);
  if ( v12 )
    sub_14020D8D0(v42, v12);
  sub_1402B0CE0(v42, v13);
  return v8;
}
