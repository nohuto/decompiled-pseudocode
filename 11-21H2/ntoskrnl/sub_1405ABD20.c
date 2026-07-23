/*
 * XREFs of sub_1405ABD20 @ 0x1405ABD20
 * Callers:
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140234EB4 @ 0x140234EB4 (sub_140234EB4.c)
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_14030EBD0 @ 0x14030EBD0 (sub_14030EBD0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1405AB9F0 @ 0x1405AB9F0 (sub_1405AB9F0.c)
 *     sub_1405AC910 @ 0x1405AC910 (sub_1405AC910.c)
 */

__int64 __fastcall sub_1405ABD20(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r11
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // r12d
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r8d
  unsigned __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int8 v33; // bl
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // edx
  int v37; // r9d
  int v38; // r14d
  unsigned __int64 v39; // rdi
  __int64 v40; // r11
  unsigned __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // r15
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rbx
  int v49; // r14d
  __int64 v50; // rdi
  bool v51; // zf
  unsigned __int64 v52; // rax
  int v53; // ecx
  int v54; // edi
  __int64 v55; // rbx
  BOOL v56; // r14d
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rdx
  unsigned __int8 v62; // r8
  unsigned __int8 v63; // r11
  bool v64; // zf
  unsigned __int8 v65; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+24h] [rbp-DCh]
  unsigned int v67; // [rsp+28h] [rbp-D8h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  unsigned int v69; // [rsp+38h] [rbp-C8h]
  int v70; // [rsp+3Ch] [rbp-C4h]
  int v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  int v74; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v75; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+60h] [rbp-A0h]
  __int64 v77; // [rsp+68h] [rbp-98h]
  unsigned __int64 v78; // [rsp+70h] [rbp-90h]
  unsigned __int64 v79; // [rsp+78h] [rbp-88h]
  unsigned __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  unsigned __int64 v83; // [rsp+98h] [rbp-68h]
  int *v84; // [rsp+A0h] [rbp-60h]
  _QWORD v85[24]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v74 = a3;
  v84 = a5;
  v80 = 0LL;
  memset(v85, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v66 = 1;
  v76 = 0LL;
  v68 = *((_QWORD *)CurrentThread + 23);
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v85[0]) = 1;
  v75 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v85[0]) = 0;
  v85[2] = 0LL;
  LODWORD(v85[1]) = 20;
  v85[3] = 0LL;
  sub_1405AB9F0((__int64)CurrentThread);
  v12 = sub_1405AAF14(a1);
  v13 = v12[3];
  v14 = v12[4];
  v82 = v13;
  if ( v5 != 24 )
  {
    v15 = v5 & 7;
    if ( v15 != 1 && v15 != 4 )
      goto LABEL_31;
    v16 = sub_140200CF0(v13);
    if ( v16 )
    {
      v18 = 0;
      if ( v16 == 2 )
        v18 = v17;
    }
    else
    {
      v18 = 8;
    }
    v5 = v18 | v15;
    v74 = v5;
  }
  if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
  {
    v73 = 4;
    goto LABEL_11;
  }
  v73 = (*(_DWORD *)(v13 + 48) >> 7) & 0x1F;
  if ( (v73 & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_31;
  if ( !a4 )
    goto LABEL_11;
  v24 = sub_14030EBD0(v13);
  v25 = a4 & 0x20000;
  if ( (v24 & 0x20000) != 0 )
  {
    if ( !v25 )
      goto LABEL_31;
  }
  else if ( v25 )
  {
    goto LABEL_31;
  }
  v26 = a4 & 0x40000;
  if ( (v24 & 0x40000) != 0 )
  {
    if ( !v26 )
      goto LABEL_31;
    goto LABEL_27;
  }
  if ( v26 )
  {
LABEL_31:
    sub_1405AC910(CurrentThread, v11);
    return 3221225496LL;
  }
LABEL_27:
  v27 = v24 & 0xFFF9FFFF;
  if ( (v27 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v27 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v27 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_31;
  }
LABEL_11:
  sub_1405AC910(CurrentThread, v11);
  v71 = *(_DWORD *)(v13 + 48) & 0x600000;
  v79 = *(_QWORD *)(v14 + 16);
  v70 = 0;
  v19 = v71 != 6291456 ? 0x80000000 : 0;
  v20 = sub_1405AB030((__int64)v12);
  v22 = v21;
  if ( v20 )
    v22 = v20;
  v81 = v22;
  if ( v22 == 512 )
  {
    v23 = 1;
LABEL_15:
    v77 = 1LL;
    v19 |= 0x4000000u;
    goto LABEL_36;
  }
  if ( v22 == 0x40000 )
  {
    v23 = 2;
    goto LABEL_15;
  }
  v23 = 0;
  v77 = v21;
LABEL_36:
  v67 = v23;
  v69 = v19;
  if ( v21 == 1 )
  {
    v29 = v75;
  }
  else
  {
    if ( ((v10 >> 3) & 0x1FF) % v22 )
      return 3221225496LL;
    v29 = v75;
    if ( (((__int64)(v75 - v10) >> 3) + 1) % v22 )
      return 3221225496LL;
  }
  v30 = v23;
  if ( v23 )
  {
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v30;
    }
    while ( v30 );
    v75 = v29;
  }
  v31 = 0LL;
  v78 = v10;
  v32 = v10;
  v33 = sub_1402CF4F0(v68 + 1664);
  v65 = v33;
  if ( v10 <= v75 )
  {
    v34 = 0LL;
    while ( !v34 || (v10 & 0xFFF) == 0 )
    {
      sub_14032F1B0((__int64)v85);
      if ( v76 )
      {
        v31 = 0LL;
        sub_14020D8D0(v68 + 1664, v76);
        sub_1402B0CE0(v68 + 1664, v33);
        sub_1402CF4F0(v68 + 1664);
      }
      v34 = sub_14027D6E0(v68 + 1664, v10, &v80);
      v76 = v34;
      if ( v34 == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_123:
      v10 += 8LL;
      if ( v10 > v75 )
        goto LABEL_124;
    }
    if ( v71 == 6291456 && (v77 == 1 || !(((v10 >> 3) & 0x1FF) % v79)) )
      v70 = 0;
    v35 = sub_140317A10(v10);
    v72 = v35;
    if ( !v35 )
    {
LABEL_122:
      v23 = v67;
      v34 = v76;
      goto LABEL_123;
    }
    if ( (v35 & 1) != 0 )
    {
      if ( !v31 )
        v31 = v10;
      v83 = v31;
      if ( v10 == v32 )
      {
        v36 = (v35 & 0x800) != 0 ? 4 : 2;
        if ( v73 >> 3 == 1 )
        {
          v37 = v36 | 0x200;
LABEL_66:
          v66 = v37;
          goto LABEL_67;
        }
        v66 = (v35 & 0x800) != 0 ? 4 : 2;
        if ( v73 >> 3 == 3 )
        {
          v66 = (v35 & 0x800) != 0 ? 4 : 2;
          if ( (v73 & 7) != 0 )
          {
            v37 = v36 | 0x400;
            goto LABEL_66;
          }
        }
      }
LABEL_67:
      v38 = v71;
      if ( v71 == 6291456 && !v70 && (v35 & 0x42) != 0 )
      {
        v39 = sub_1402CFEB0(v10);
        v41 = v81 / v79;
        if ( v81 / v79 )
        {
          v42 = v82;
          v43 = v40;
          v44 = v79 << 12;
          do
          {
            sub_1402358D4(v68, v39, v42);
            v39 += v44;
            v41 -= v43;
          }
          while ( v41 );
          v5 = v74;
          LODWORD(v40) = 1;
          v19 = v69;
          v31 = v83;
        }
        v23 = v67;
        v38 = 6291456;
        v70 = v40;
      }
      v45 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v72) >> 12) & 0xFFFFFFFFFFLL;
      if ( v5 != 24 )
      {
        v52 = sub_1402CBD10(v10, v45, v19 | v5);
        v48 = v52;
        if ( !v23 )
          sub_14033DBC0(v10, v52);
        if ( (v5 & 4) != 0 && v38 != 6291456 )
          v48 |= 0x42uLL;
        goto LABEL_93;
      }
      v46 = sub_1402E4D28(v45, 24);
      v72 = v46;
      v48 = v46;
      if ( v23 )
      {
LABEL_94:
        sub_1403C2C58(v68 + 1664, (volatile __int64 *)v10, v48, v47);
        sub_1402285E8((__int64)v85, v23, v10);
LABEL_121:
        v33 = v65;
        v32 = v78;
        goto LABEL_122;
      }
      v49 = 0;
      v50 = v46;
      if ( sub_140317A80(v10) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v49 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v51 = (v48 & 1) == 0;
            goto LABEL_81;
          }
        }
        else
        {
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v51 = (v48 & 1) == 0;
            v48 = v72;
LABEL_81:
            if ( !v51 )
              v50 |= 0x8000000000000000uLL;
            goto LABEL_86;
          }
          v48 = v72;
        }
      }
LABEL_86:
      *(_QWORD *)v10 = v50;
      if ( !v49 )
        goto LABEL_95;
      sub_1402294F0(v10, v50);
      v23 = v67;
LABEL_93:
      if ( v23 )
        goto LABEL_94;
LABEL_95:
      sub_1402CF280((__int64)v85, (__int64)(v10 << 25) >> 16, 1LL, 0);
      goto LABEL_121;
    }
    v53 = v66;
    if ( v10 == v32 )
      v53 = 1;
    v66 = v53;
    if ( v5 == 24 )
      goto LABEL_122;
    v54 = 0;
    v55 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(32 * v5)) & 0x3E0;
    v56 = sub_140317A80(v10);
    v57 = v55;
    if ( v56 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v54 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_105;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_105;
      }
      if ( (v55 & 1) != 0 )
        v57 |= 0x8000000000000000uLL;
    }
LABEL_105:
    *(_QWORD *)v10 = v57;
    if ( v54 )
      sub_1402294F0(v10, v57);
    v58 = sub_140234EB4(v10);
    v72 = v58;
    v59 = v58;
    if ( (v19 & 0x4000000) != 0 )
    {
      v59 = v58 | 0x80;
      v72 = v58 | 0x80;
    }
    v60 = 0;
    v61 = v59;
    if ( !v56 )
      goto LABEL_117;
    if ( (unsigned int)sub_140229550() )
    {
      v63 = ++v60;
      if ( !HIBYTE(word_140C51864) )
      {
        v64 = (v62 & v63) == 0;
        goto LABEL_115;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v64 = (v62 & 1) == 0;
LABEL_115:
      if ( !v64 )
        v61 |= 0x8000000000000000uLL;
    }
LABEL_117:
    *(_QWORD *)v10 = v61;
    if ( v60 )
      sub_1402294F0(v10, v61);
    if ( !v31 )
      v31 = v10;
    goto LABEL_121;
  }
LABEL_124:
  sub_14032F1B0((__int64)v85);
  if ( v76 )
    sub_14020D8D0(v68 + 1664, v76);
  sub_1402B0CE0(v68 + 1664, v33);
  *v84 = v66;
  return 0LL;
}
