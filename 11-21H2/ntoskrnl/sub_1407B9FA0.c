/*
 * XREFs of sub_1407B9FA0 @ 0x1407B9FA0
 * Callers:
 *     sub_14057352C @ 0x14057352C (sub_14057352C.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_1402EDC48 @ 0x1402EDC48 (sub_1402EDC48.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     PoRegisterDeviceNotify @ 0x140372920 (PoRegisterDeviceNotify.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407BBF50 @ 0x1407BBF50 (sub_1407BBF50.c)
 */

__int64 __fastcall sub_1407B9FA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  int v8; // r14d
  char v9; // dl
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  int v15; // ecx
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rax
  ULONG_PTR v19; // rdi
  char v20; // r10
  unsigned int v21; // r8d
  unsigned int v22; // edx
  int v23; // r9d
  int v24; // ecx
  int v25; // r14d
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rcx
  int v28; // ecx
  char *v29; // rcx
  int v30; // r13d
  __int64 result; // rax
  unsigned int v32; // ebx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rax
  int v39; // ebx
  int v40; // edx
  int v41; // [rsp+28h] [rbp-100h]
  char v42; // [rsp+60h] [rbp-C8h]
  unsigned int v43; // [rsp+64h] [rbp-C4h]
  int v44; // [rsp+68h] [rbp-C0h]
  int v45; // [rsp+6Ch] [rbp-BCh] BYREF
  int v46; // [rsp+70h] [rbp-B8h] BYREF
  int v47; // [rsp+74h] [rbp-B4h]
  int v48; // [rsp+78h] [rbp-B0h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+88h] [rbp-A0h]
  int v51; // [rsp+90h] [rbp-98h]
  int v52; // [rsp+94h] [rbp-94h]
  PVOID P; // [rsp+98h] [rbp-90h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-88h]
  unsigned int v55; // [rsp+ACh] [rbp-7Ch]
  __int64 v56; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v58; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v60; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v61; // [rsp+D8h] [rbp-50h]
  __int64 v62[9]; // [rsp+E0h] [rbp-48h] BYREF
  char v67; // [rsp+150h] [rbp+28h]

  v6 = a2;
  v7 = a5;
  v8 = 0;
  v46 = 0;
  v45 = 0;
  *a6 = 1;
  v48 = 0;
  v9 = 0;
  v44 = 0;
  v42 = 1;
  v10 = *a3;
  v54 = v10;
  v58 = v10;
  v11 = *a4;
  v56 = v11;
  v59 = v11;
  v12 = a5 & 0x7F800;
  v47 = a5 & 0x7F800;
  if ( (a5 & 0x7F800) != 0 )
  {
    result = PoRegisterDeviceNotify();
    v46 = result;
    if ( (int)result < 0 )
      return result;
  }
  v52 = a5 >> 31;
  LODWORD(P) = a5 >> 31;
  v13 = a5 & 0xB0000000;
  v55 = a5 & 0xB0000000;
  v14 = a5 & 0x4FF807FF;
  if ( (a5 & 0x40000000) != 0 )
  {
    if ( (v7 & 0xF0) == 0 )
      return 3221225714LL;
    v42 = v9;
    v14 = v7 & 0xFF807FF;
  }
  if ( v14 )
  {
    v15 = sub_14032BCC0(v14);
    v43 = v15;
    v51 = v15;
    if ( v15 != -1 )
      goto LABEL_5;
    return 3221225541LL;
  }
  if ( v13 != 0x80000000 && v13 != 0x10000000 )
    return 3221225541LL;
  v15 = 24;
  v43 = 24;
  v51 = 24;
LABEL_5:
  v16 = (v11 + v10 - 1) | 0xFFF;
  v61 = v16;
  v17 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v60 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v57 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( (v15 & 0xFFFFFFF8) == 0x10 )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1
      || *(_QWORD *)(v6 + 1408) && ((v37 = *(_WORD *)(v6 + 2412), v37 == 332) || v37 == 452) )
    {
      v34 = v50;
    }
    else
    {
      v57 = *((_QWORD *)KeGetCurrentThread() + 30);
      v49 = v57;
      v34 = *(_QWORD *)(v57 + 16) & 0xFFFFFFFFFFFFF000uLL;
      v50 = v34;
    }
    v49 = v34;
  }
  P = 0LL;
  v59 = v16 >> 12;
  v18 = sub_14030E7C0(v17, 0, &v46);
  v19 = v18;
  v58 = v18;
  if ( !v18 )
  {
    v30 = v46;
    if ( v46 != -1073741664 )
      goto LABEL_121;
    goto LABEL_83;
  }
  P = (PVOID)v18;
  if ( v59 > (*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) )
  {
    v30 = -1073741800;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(v18 + 48) & 0x2200000) == 0x2200000 )
  {
    if ( !v12 )
    {
      v30 = -1073741755;
      goto LABEL_121;
    }
  }
  else if ( v12 )
  {
    v30 = -1073741755;
    goto LABEL_121;
  }
  v20 = 0;
  v67 = 0;
  v21 = v43;
  if ( (v43 & 2) != 0 )
  {
    v30 = sub_1402EDC48(a2, a1, v18, v43, v17, v16);
    if ( v30 < 0 )
      goto LABEL_121;
    v33 = *(_DWORD *)(v19 + 48);
    if ( (v33 & 0x100) == 0 && v42 )
    {
      LOBYTE(v8) = *(_QWORD *)(*(_QWORD *)(a2 + 1680) + 432LL) != 0LL;
      if ( !(unsigned int)PsGetHostSilo() )
      {
LABEL_49:
        if ( v8 )
        {
          if ( (v33 & 8) != 0 )
          {
            v30 = sub_1407A4C90(v19, v54, v56, v43, *((_BYTE *)KeGetCurrentThread() + 562));
            if ( v30 < 0 )
              goto LABEL_121;
            v67 = 1;
            v49 = v50;
          }
          v62[0] = v17;
          v62[1] = v16;
          v30 = sub_1406F74A8(v19, v62, v8);
          if ( v30 < 0 )
            goto LABEL_121;
          v20 = v67;
          v21 = v43;
          v12 = v47;
        }
        else
        {
          v20 = 0;
          v21 = v43;
          v12 = v47;
        }
        goto LABEL_11;
      }
      v44 = v8 | 4;
    }
    v8 = v44;
    goto LABEL_49;
  }
LABEL_11:
  v22 = *(_DWORD *)(v19 + 48);
  v23 = v22 & 0x200000;
  if ( (v22 & 0x200000) != 0 && ((v22 & 0x800000) != 0 || (v22 & 0x180000) >= 0x100000) || (v24 = v22 & 0x70, v24 == 80) )
  {
    if ( (v22 & 0xA00000) == 0xA00000 )
    {
      v38 = sub_14030EBF4(v19);
      if ( ((v54 | (v16 + 1)) & ((v38 << 12) - 1)) != 0 )
      {
        v30 = -1073741800;
        goto LABEL_121;
      }
      v24 = v22 & 0x70;
      goto LABEL_13;
    }
    if ( v21 == ((v22 >> 7) & 0x1F) )
    {
      sub_14032E700((char *)v19);
      goto LABEL_97;
    }
LABEL_83:
    v30 = -1073741800;
    goto LABEL_121;
  }
LABEL_13:
  if ( (v22 & 0x6200000) == 0x4200000 )
  {
    v32 = sub_1405A9744(a2, a1, v19, v17, v16, v14, v21, v13, a6, a3, a4);
    sub_14032E700((char *)v19);
    return v32;
  }
  if ( (v13 & 0x5FFFFFFF) != 0 )
  {
    v30 = -1073741755;
    goto LABEL_121;
  }
  if ( !v14 )
  {
    v30 = -1073741755;
    goto LABEL_121;
  }
  if ( v24 == 48 )
  {
    v39 = sub_1405ABD20(v17, v16, v21, v12, &v45);
    if ( v39 >= 0 )
    {
      sub_14032E700((char *)v19);
      *a4 = v16 - v17 + 1;
      *a3 = v17;
      *a6 = v45;
      return (unsigned int)v39;
    }
    v30 = -1073741800;
    goto LABEL_121;
  }
  if ( v24 == 16 )
  {
    v30 = -1073741800;
    goto LABEL_121;
  }
  v25 = v52;
  if ( v52 && (v23 || (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0x20) != 0) )
    goto LABEL_120;
  if ( (v22 & 8) == 0 || v20 )
  {
    v26 = v49;
  }
  else
  {
    v30 = sub_1407A4C90(v19, v54, v56, v21, *((_BYTE *)KeGetCurrentThread() + 562));
    if ( v30 < 0 )
      goto LABEL_121;
    v26 = v50;
    v21 = v43;
  }
  v27 = *(unsigned int *)(v19 + 48);
  if ( (v27 & 0x200000) == 0 )
  {
    if ( (v14 & 0x600) == 0 )
    {
      if ( (v27 & 0x70) == 0x20 )
      {
        if ( (v14 & 4) != 0 )
          v14 = v14 & 0xFFFFFFF3 | 8;
        if ( (v14 & 0x40) != 0 )
          v14 = v14 & 0xFFFFFF3F | 0x80;
      }
      v28 = dword_140015E20[(v27 >> 7) & 7] | 0x700;
      if ( (v14 | v28) != v28 )
      {
        v30 = -1073741746;
        goto LABEL_121;
      }
      if ( (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0xA0) == 0x80 )
        goto LABEL_32;
      if ( !sub_14030EC40(v19) )
      {
        if ( !(unsigned int)sub_1407BBF50(v29, v17, v16) )
        {
          v30 = -1073741779;
          goto LABEL_121;
        }
LABEL_32:
        v30 = sub_14032D1C0(a2, v19, v17, v16, v14, v25, &v45, (__int64)&v48);
        if ( v30 >= 0 )
          goto LABEL_33;
        goto LABEL_121;
      }
      if ( v14 != 128 && v14 != 8 )
      {
        v30 = -1073741746;
        goto LABEL_121;
      }
      sub_14032E700(v29);
LABEL_97:
      *a4 = v16 - v17 + 1;
      *a3 = v17;
      *a6 = dword_140016150[v43];
      return 0LL;
    }
LABEL_120:
    v30 = -1073741582;
    goto LABEL_121;
  }
  if ( (v14 & 0x88) != 0 || v25 )
    goto LABEL_120;
  if ( (v27 & 0x70) == 0x40 )
  {
    if ( (v14 & 0xFFFFF9F9) != 0 )
    {
      v30 = -1073741755;
      goto LABEL_121;
    }
    v14 &= 0x7FFFF9FFu;
    v40 = *(_DWORD *)(v19 + 48) & 0xC00;
    if ( (*(_DWORD *)(v19 + 48) & 0x380) != 0 && v40 == 3072 )
    {
      v14 |= 0x400u;
    }
    else if ( v40 == 1024 )
    {
      v14 |= 0x200u;
    }
    v21 = sub_14032BCC0(v14);
  }
  v30 = sub_14032EA60(v19, v17, v16, v21, v14, v41, &v45, &v48);
  if ( v30 >= 0 )
  {
    if ( v26 )
    {
      if ( v26 < v16 )
      {
        v35 = v26 >> 12;
        if ( v35 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) )
        {
          v36 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
          if ( v35 <= v36 && (v16 + 1) >> 12 <= v36 )
            *(_QWORD *)(v57 + 16) = v16 + 1;
        }
      }
    }
LABEL_33:
    sub_14032E700((char *)v19);
    *a4 = v16 - v17 + 1;
    *a3 = v17;
    *a6 = v45;
    if ( v48 )
      return 1073741847LL;
    return 0LL;
  }
LABEL_121:
  if ( P )
    sub_14032E700((char *)P);
  return (unsigned int)v30;
}
