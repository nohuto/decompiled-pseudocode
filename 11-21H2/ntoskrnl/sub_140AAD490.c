/*
 * XREFs of sub_140AAD490 @ 0x140AAD490
 * Callers:
 *     sub_140AADB90 @ 0x140AADB90 (sub_140AADB90.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403AA8D8 @ 0x1403AA8D8 (sub_1403AA8D8.c)
 *     sub_1403DD848 @ 0x1403DD848 (sub_1403DD848.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AAB1AC @ 0x140AAB1AC (sub_140AAB1AC.c)
 *     sub_140AAB5FC @ 0x140AAB5FC (sub_140AAB5FC.c)
 *     sub_140AAB88C @ 0x140AAB88C (sub_140AAB88C.c)
 *     sub_140AAB930 @ 0x140AAB930 (sub_140AAB930.c)
 *     sub_140AADC80 @ 0x140AADC80 (sub_140AADC80.c)
 *     sub_140AADCC4 @ 0x140AADCC4 (sub_140AADCC4.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 *     sub_140B5616C @ 0x140B5616C (sub_140B5616C.c)
 *     sub_140B56DF8 @ 0x140B56DF8 (sub_140B56DF8.c)
 */

__int64 __fastcall sub_140AAD490(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // r9
  int v7; // ebx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // r8
  void *v24; // rbx
  int v25; // eax
  __int64 v26; // rdi
  void *v27; // rbx
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  const wchar_t *v45; // r8
  __int64 v46; // rcx
  unsigned int v47; // [rsp+60h] [rbp+8h]
  unsigned int v49; // [rsp+70h] [rbp+18h]
  unsigned int v50; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 5u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
  if ( (dword_140C0DF90 & 1) != 0 && (dword_140C0DF90 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
  {
    sub_1403A7C40();
    if ( a2 == -1 )
    {
      qword_140C0DF40 = 0LL;
      dword_140C0DF90 = dword_140C0DF90 & 0xFFEFE7FD | 0x101800;
      xmmword_140C0DF20 = 0LL;
      xmmword_140C0DF30 = 0LL;
      result = sub_1403AA8D8(a1 + 32);
      if ( (int)result < 0 )
        return result;
      dword_140C0DF90 &= ~0x2000u;
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
      {
        sub_140AAB1AC(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v6);
        qword_140C0E058 = sub_140AAB88C(*(_QWORD *)(a1 + 256));
        qword_140C0E050 = sub_140AAB930(*(int **)(a1 + 264));
      }
      else
      {
        qword_140C0E058 = 0LL;
        qword_140C0E050 = 0LL;
      }
      sub_140AADCC4();
    }
    else
    {
      dword_140C0DF90 &= ~0x1000u;
      sub_140AAB5FC();
    }
    sub_1403A7BF0();
    goto LABEL_13;
  }
  if ( a2 == -1 )
  {
    dword_140C0DF90 = sub_140B56DF8() | 0xC04;
    qword_140C0E068 = (__int64)&qword_140C0E060;
    qword_140C0E060 = (__int64)&qword_140C0E060;
    v41 = *(_QWORD *)(v40 + 240);
    if ( !v41 || !*(_DWORD *)(a1 + 248) )
      return 3221225626LL;
    sub_140AADC80(v41, 0x4000LL, &unk_140D00140);
    v7 = sub_1403AA8D8(a1 + 32);
    if ( v7 < 0 )
      goto LABEL_60;
    xmmword_140C0DFC8 = *(_OWORD *)(a1 + 100);
    if ( !*(_QWORD *)(a1 + 88) )
      goto LABEL_67;
    v42 = sub_1403AA2B8(0x18uLL);
    if ( !v42 )
    {
LABEL_75:
      v7 = -1073741801;
      goto LABEL_60;
    }
    *(_QWORD *)v42 = *(_QWORD *)(a1 + 88);
    *(_DWORD *)(v42 + 8) = *(_DWORD *)(a1 + 96);
    *(_QWORD *)(v42 + 16) = *(_QWORD *)(a1 + 88);
    *(_DWORD *)(v42 + 12) = 1;
    qword_140C0E038 = v42;
    v7 = sub_140B5616C(v42, 0LL);
    if ( v7 >= 0 )
    {
LABEL_67:
      if ( *(_DWORD *)(a1 + 116) >= 3u )
      {
        qword_140C0E110 = *(_QWORD *)(a1 + 404);
        dword_140C0E118 = *(_DWORD *)(a1 + 412);
      }
      dword_140C0E0F8 = *(_DWORD *)(a1 + 400);
      v7 = sub_140B55C50(a1, 0xFFFFFFFFLL);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
LABEL_60:
    sub_140AAE918();
    return (unsigned int)v7;
  }
  sub_1403A7C40();
  v7 = sub_1403AA8D8(a1 + 32);
  if ( v7 < 0 )
  {
    sub_1403A7BF0();
    goto LABEL_60;
  }
  *(PHYSICAL_ADDRESS *)&xmmword_140C0DF70 = MmGetPhysicalAddress(qword_140C0DF40);
  DWORD2(xmmword_140C0DF70) = DWORD2(xmmword_140C0DF20);
  HIDWORD(xmmword_140C0DF70) = DWORD1(xmmword_140C0DF20);
  LODWORD(xmmword_140C0DF80) = HIDWORD(xmmword_140C0DF20);
  if ( (_DWORD)xmmword_140C0DF30 == 4 )
  {
    DWORD2(xmmword_140C0DF80) = 3;
  }
  else if ( (_DWORD)xmmword_140C0DF30 == 5 )
  {
    DWORD2(xmmword_140C0DF80) = 4;
  }
  else
  {
    DWORD2(xmmword_140C0DF80) = 0;
  }
  v8 = 0;
  v9 = 432;
  v10 = 0;
  xmmword_140C0E070 = *(_OWORD *)(a1 + 272);
  v11 = 0;
  xmmword_140C0E080 = *(_OWORD *)(a1 + 288);
  xmmword_140C0E090 = *(_OWORD *)(a1 + 304);
  xmmword_140C0E0A0 = *(_OWORD *)(a1 + 320);
  xmmword_140C0E0B0 = *(_OWORD *)(a1 + 336);
  xmmword_140C0E0C0 = *(_OWORD *)(a1 + 352);
  xmmword_140C0E0D0 = *(_OWORD *)(a1 + 368);
  xmmword_140C0E0E0 = *(_OWORD *)(a1 + 384);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v10 = 32;
    v11 = *(_DWORD *)(a1 + 84);
    v8 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
    v9 = v8 + 464;
  }
  v12 = 0;
  v13 = 0;
  v47 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v12 = 32;
    v47 = 32;
    v13 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
    v9 += v13 + 32;
  }
  v14 = v11 + 16496 + v9;
  v15 = v14 - v8 - v12 - v13 - v10 - 432;
  v16 = ((v15 >> 3) + 15) & 0xFFFFFFF0;
  v49 = v16 + v14;
  v17 = sub_1403AA2B8(v16 + v14);
  qword_140C0DFC0 = v17;
  v18 = v17;
  if ( !v17 )
  {
    sub_1403A7BF0();
    goto LABEL_75;
  }
  v19 = 3LL;
  v20 = (_OWORD *)v17;
  v21 = (_OWORD *)a1;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    v22 = v21[7];
    v21 += 8;
    *(v20 - 1) = v22;
    --v19;
  }
  while ( v19 );
  *v20 = *v21;
  v20[1] = v21[1];
  *((_QWORD *)v20 + 4) = *((_QWORD *)v21 + 4);
  *(_DWORD *)v18 = v49;
  *(_DWORD *)(v18 + 120) |= 0x100000u;
  *(_QWORD *)(v18 + 240) = 0LL;
  *(_DWORD *)(v18 + 248) = 0;
  *(_QWORD *)(v18 + 264) = 0LL;
  *(_QWORD *)(v18 + 256) = 0LL;
  v50 = v8 + v10;
  v23 = v18 + v13 + v8 + v10 + v47 + 432;
  sub_140AADC80(v23 + v16, v15, v23);
  qword_140C0E040 = 0LL;
  if ( !v8 )
    goto LABEL_76;
  v24 = (void *)(v18 + 432 + v10);
  memmove(v24, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
  *(_DWORD *)(v18 + 444) = 1;
  *(_QWORD *)(v18 + 432) = v24;
  *(_DWORD *)(v18 + 440) = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(v18 + 448) = v24;
  dword_140C0DF90 |= 0x800u;
  v25 = sub_140B5616C(v18 + 432, 1LL);
  dword_140C0DF90 &= ~0x800u;
  if ( v25 >= 0 )
    qword_140C0E040 = v18 + 432;
  if ( !qword_140C0E040 )
LABEL_76:
    DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
  qword_140C0E048 = 0LL;
  if ( v13 )
  {
    v26 = v18 + v50 + 432;
    v27 = (void *)(v26 + v47);
    memmove(v27, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
    *(_DWORD *)(v26 + 12) = 1;
    *(_QWORD *)v26 = v27;
    *(_DWORD *)(v26 + 8) = *(_DWORD *)(a1 + 136);
    *(_QWORD *)(v26 + 16) = v27;
    qword_140C0E048 = v26;
  }
  memset(&qword_140C0DFD8, 0, 0x58uLL);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v28 = (void *)sub_1403AA2B8(*(unsigned int *)(a1 + 160));
    qword_140C0DFD8 = v28;
    if ( v28 )
    {
      memmove(v28, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
      LODWORD(dword_140C0DFE8) = *(_DWORD *)(a1 + 160);
      qword_140C0DFEC = *(_QWORD *)(a1 + 164);
    }
  }
  v29 = *(_QWORD *)(a1 + 184);
  if ( v29 && (int)sub_1403DD848(v29, &qword_140C0E018) < 0 )
    qword_140C0E018 = 0LL;
  v30 = *(_QWORD *)(a1 + 216);
  if ( v30 )
  {
    v43 = -1LL;
    v44 = -1LL;
    do
      ++v44;
    while ( *(_WORD *)(v30 + 2 * v44) );
    Dst = (wchar_t *)sub_1403AA2B8(2 * v44 + 2);
    if ( Dst )
    {
      v45 = *(const wchar_t **)(a1 + 216);
      do
        ++v43;
      while ( v45[v43] );
      wcscpy_s(Dst, v43 + 1, v45);
    }
  }
  qword_140C0E038 = 0LL;
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_46;
  v31 = (void *)sub_1403AA2B8(*(unsigned int *)(a1 + 96));
  v32 = (__int64)v31;
  if ( !v31 )
    goto LABEL_46;
  memmove(v31, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
  v33 = sub_1403AA2B8(0x18uLL);
  v34 = v33;
  if ( !v33 )
  {
    v46 = v32;
LABEL_85:
    sub_1403A8CB4(v46);
    goto LABEL_46;
  }
  *(_DWORD *)(v33 + 12) = 0;
  *(_QWORD *)v33 = v32;
  *(_DWORD *)(v33 + 8) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v33 + 16) = v32;
  if ( (int)sub_140B5616C(v33, 0LL) < 0 )
  {
    sub_1403A8CB4(v32);
    v46 = v34;
    goto LABEL_85;
  }
  qword_140C0E038 = v34;
LABEL_46:
  if ( *(_DWORD *)(a1 + 116) >= 3u )
  {
    qword_140C0E110 = *(_QWORD *)(a1 + 404);
    dword_140C0E118 = *(_DWORD *)(a1 + 412);
  }
  dword_140C0E0F8 = *(_DWORD *)(a1 + 400);
  if ( *(_DWORD *)(a1 + 116) >= 5u )
    dword_140C0E11C = *(_DWORD *)(a1 + 416);
  dword_140C0DF90 |= 0x8000u;
  sub_140B55C50(a1, a2);
  dword_140C0DF90 = dword_140C0DF90 & 0xFFFF77FF | 0x800;
  v35 = sub_1403AA2B8(0x48uLL);
  dword_140C0DF90 &= ~0x800u;
  v36 = v35;
  if ( v35 )
  {
    v37 = *(_QWORD *)(a1 + 256);
    if ( v37 )
    {
      *(_OWORD *)v36 = *(_OWORD *)v37;
      *(_OWORD *)(v36 + 16) = *(_OWORD *)(v37 + 16);
      *(_DWORD *)(v36 + 32) = *(_DWORD *)(v37 + 32);
      *(_QWORD *)(v18 + 256) = v36;
      v36 += 36LL;
    }
    v38 = *(_QWORD *)(a1 + 264);
    if ( v38 )
    {
      *(_OWORD *)v36 = *(_OWORD *)v38;
      *(_OWORD *)(v36 + 16) = *(_OWORD *)(v38 + 16);
      *(_DWORD *)(v36 + 32) = *(_DWORD *)(v38 + 32);
      *(_QWORD *)(v18 + 264) = v36;
    }
  }
  qword_140C0E058 = sub_140AAB88C(*(_QWORD *)(a1 + 256));
  qword_140C0E050 = sub_140AAB930(*(int **)(a1 + 264));
  v39 = *(_DWORD *)(a1 + 124);
  dword_140C0DF90 |= v4 | 0x80;
  dword_140C0DF94 = v39;
  sub_1403A7BF0();
  qword_140C0E030 = *(_QWORD *)(a1 + 232);
LABEL_13:
  dword_140C0DF90 |= 1u;
  return 0;
}
