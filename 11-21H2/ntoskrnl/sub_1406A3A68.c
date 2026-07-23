/*
 * XREFs of sub_1406A3A68 @ 0x1406A3A68
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022CBE0 @ 0x14022CBE0 (sub_14022CBE0.c)
 *     sub_14022CD50 @ 0x14022CD50 (sub_14022CD50.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140597BA8 @ 0x140597BA8 (sub_140597BA8.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1406A3A68(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // r10
  __int128 *v5; // r14
  unsigned int v7; // r15d
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm1
  char v10; // al
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int128 v16; // xmm0
  unsigned __int64 v17; // rsi
  int v18; // r13d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned __int64 v22; // rbx
  unsigned int v23; // edi
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rdi
  __int16 v28; // cx
  unsigned int v29; // r9d
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int16 v32; // cx
  int v33; // eax
  __int16 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  __int64 *v40; // rdi
  unsigned __int64 v41; // rax
  PVOID v42; // r15
  __int64 v43; // rbp
  unsigned __int64 v44; // r14
  int v45; // edi
  __int64 v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // [rsp+20h] [rbp-108h]
  unsigned __int64 v49; // [rsp+28h] [rbp-100h]
  __int64 v50; // [rsp+30h] [rbp-F8h]
  __int128 v51; // [rsp+40h] [rbp-E8h] BYREF
  __int128 Privileges; // [rsp+50h] [rbp-D8h]
  __int128 v53; // [rsp+60h] [rbp-C8h]
  __int128 v54; // [rsp+70h] [rbp-B8h]
  __int128 v55; // [rsp+80h] [rbp-A8h]
  __int128 v56; // [rsp+90h] [rbp-98h]
  __int128 v57; // [rsp+A0h] [rbp-88h]
  __int128 v58; // [rsp+B0h] [rbp-78h]
  __int128 v59; // [rsp+C0h] [rbp-68h]
  __int64 v60; // [rsp+D0h] [rbp-58h]
  __int64 v61; // [rsp+130h] [rbp+8h]
  __int64 v65; // [rsp+148h] [rbp+20h]
  __int64 *v66; // [rsp+150h] [rbp+28h] BYREF
  va_list va; // [rsp+150h] [rbp+28h]
  va_list va1; // [rsp+158h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v66 = va_arg(va1, __int64 *);
  v5 = &v51;
  v61 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  v7 = a3;
  *v66 = 0LL;
  v8 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v50 = *(_QWORD *)v4;
  v9 = *(_OWORD *)(a1 + 16);
  v10 = *(_BYTE *)(v4 + 62);
  v51 = *(_OWORD *)a1;
  v48 = v8;
  v11 = *(_OWORD *)(a1 + 32);
  Privileges = v9;
  v12 = *(_OWORD *)(a1 + 48);
  v13 = 0LL;
  v53 = v11;
  v14 = (-(__int64)((v10 & 0xC) != 0) & 0x100000) + 0x100000;
  v15 = *(_QWORD *)(a1 + 144);
  v16 = *(_OWORD *)(a1 + 64);
  v17 = 0LL;
  v18 = 0;
  v49 = v14;
  v54 = v12;
  v19 = *(_OWORD *)(a1 + 80);
  v55 = v16;
  v20 = *(_OWORD *)(a1 + 96);
  v56 = v19;
  v21 = *(_OWORD *)(a1 + 128);
  v57 = v20;
  v58 = *(_OWORD *)(a1 + 112);
  v59 = v21;
  v60 = v15;
  if ( v7 )
    DWORD1(v54) ^= (DWORD1(v54) ^ (DWORD1(v54) - v7)) & 0x3FFFFFFF;
  v22 = 0LL;
  while ( 1 )
  {
    if ( v8 - v13 > v14 )
      v23 = v14;
    else
      v23 = v8 - v13;
    v24 = sub_1402828F0(64, 0x98uLL, 0x64536D4Du);
    v25 = v24;
    if ( !v24 )
    {
      v37 = Privileges;
LABEL_46:
      v45 = -1073741670;
      goto LABEL_47;
    }
    v26 = v23 >> 3;
    v24[11] = v24 + 10;
    v24[10] = v24 + 10;
    *((_QWORD *)v5 + 2) = v24;
    *v24 = v61;
    *((_DWORD *)v24 + 11) = v23 >> 3;
    v13 += v23;
    if ( v13 > 8 * a4 )
      *((_DWORD *)v24 + 13) ^= (*((_DWORD *)v24 + 13) ^ ((v13 >> 3) - a4)) & 0x3FFFFFFF;
    v27 = v50;
    v28 = v24[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v50 + 14) >> 1) & 0x1F));
    *((_WORD *)v24 + 16) = v28;
    if ( v5 == &v51 )
    {
      *((_WORD *)v5 + 17) &= 0xFu;
      v29 = *((_DWORD *)v5 + 11);
      v30 = *((unsigned int *)v5 + 9);
      v31 = (unsigned __int64)((_WORD)v5[2] & 0xFFC0) << 26;
      *((_DWORD *)v5 + 10) = v29;
      v22 = v30 | v31;
      v28 = *((_WORD *)v25 + 16);
    }
    else
    {
      v29 = *((_DWORD *)v5 + 10);
    }
    v22 += v29;
    *((_DWORD *)v25 + 9) = v22;
    *((_WORD *)v25 + 16) = v28 & 0x3F | (WORD2(v22) << 6);
    if ( v13 >= v48 )
      break;
    *((_DWORD *)v25 + 10) = v26;
    v5 = (__int128 *)v25;
    v8 = v48;
    v14 = v49;
  }
  v32 = *((_WORD *)v25 + 17);
  *((_DWORD *)v25 + 10) = (*a2 >> 12) - v22;
  *((_WORD *)v25 + 17) = (16 * *(_WORD *)a2) | v32 & 0xF;
  if ( v7 && (*(_BYTE *)(v61 + 62) & 0xC) != 0 && *(_QWORD *)(a1 + 8) )
  {
    sub_140597BA8((_DWORD *)a1);
    *v66 = a1;
  }
  v33 = sub_14022CBE0((__int64 *)a1, (__int64)&v51, 0);
  if ( !v33 )
  {
LABEL_14:
    v34 = *(_WORD *)(v27 + 12);
    v35 = (*(unsigned int *)(v27 + 8) | ((unsigned __int64)(v34 & 0x3FF) << 32)) + a4 + v7;
    *(_DWORD *)(v27 + 8) += a4 + v7;
    *(_WORD *)(v27 + 12) = v34 ^ (v34 ^ WORD2(v35)) & 0x3FF;
    return 0LL;
  }
  v37 = Privileges;
LABEL_16:
  if ( (v33 & 1) != 0 )
  {
    v38 = v48;
    v18 |= 1u;
    v39 = 0LL;
    v40 = (__int64 *)v37;
    while ( 1 )
    {
      v41 = v38 - v39;
      if ( v41 > v49 )
        LODWORD(v41) = v49;
      v39 += (unsigned int)v41;
      v42 = sub_1402828F0(274, (unsigned int)v41, 0x74536D4Du);
      if ( !v42 )
        goto LABEL_46;
      sub_1406F4768((ULONG_PTR)v42);
      if ( (*(_BYTE *)(v61 + 62) & 0xC) != 0 )
      {
        if ( !*v66 )
          *v66 = (__int64)v40;
      }
      else if ( (v18 & 2) != 0 )
      {
        sub_1402869C0(v40, 0);
      }
      sub_14022CD50(v40, (__int64)v42, 0xFFFFFFFF, 0LL);
      sub_14026EA80((__int64)(v40 + 15), 1);
      v38 = v48;
      v40 = (__int64 *)v40[2];
      if ( v39 >= v48 )
      {
        v7 = a3;
        goto LABEL_26;
      }
    }
  }
  v18 |= 2u;
  v43 = v37;
  while ( 1 )
  {
    v44 = *(_DWORD *)(v43 + 44) - (*(_DWORD *)(v43 + 52) & 0x3FFFFFFFu);
    v45 = sub_1405C4980(v43, v44);
    if ( v45 < 0 )
      break;
    if ( (int)sub_140286EC0((_QWORD *)v43, 56) <= 1 )
    {
      v17 += v44;
      break;
    }
    v43 = *(_QWORD *)(v43 + 16);
    if ( !v43 )
    {
      if ( v7 )
      {
        v45 = sub_1405C4980(a1, v7);
        if ( v45 < 0 )
          break;
        v17 += v7;
      }
LABEL_26:
      v33 = sub_14022CBE0((__int64 *)a1, (__int64)&v51, v18);
      if ( v33 )
        goto LABEL_16;
      v27 = v50;
      goto LABEL_14;
    }
  }
LABEL_47:
  v46 = sub_14030EC14(v61);
  v65 = v46;
  if ( v17 )
  {
    sub_1405C4B8C(v46, 1, v17);
    v17 = 0LL;
  }
  if ( v37 )
  {
    do
    {
      v47 = *(_QWORD *)(v37 + 16);
      if ( (*(_BYTE *)(v61 + 62) & 0xC) != 0 )
      {
        if ( *(_QWORD *)(v37 + 8) )
        {
          v66 = 0LL;
          sub_140273390((__int64 *)v37, (__int64)va);
        }
      }
      else
      {
        if ( (v18 & 2) != 0 && (*(_DWORD *)(v37 + 48) & 0x3FFFFFFF) != 0 )
          v17 += sub_1402869C0((_QWORD *)v37, 24);
        if ( *(_QWORD *)(v37 + 8) )
        {
          sub_14026EA80(v37 + 120, 0);
          ExFreePoolWithTag(*(PVOID *)(v37 + 8), 0);
        }
      }
      SeFreePrivileges((PPRIVILEGE_SET)v37);
      v37 = v47;
    }
    while ( v47 );
    if ( v17 )
      sub_1405C4B8C(v65, 1, v17);
  }
  return (unsigned int)v45;
}
