/*
 * XREFs of sub_1403CE6F8 @ 0x1403CE6F8
 * Callers:
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081A654 @ 0x14081A654 (sub_14081A654.c)
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1403CE6F8()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _BYTE *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // r13
  char *v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // r12d
  WORD Group; // r15
  __int64 v14; // rcx
  KAFFINITY v15; // r14
  char *v16; // rbx
  unsigned __int8 v17; // si
  __int64 v18; // rdi
  __int64 v19; // rax
  _BYTE *v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // r14d
  unsigned __int8 *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  char *v28; // r8
  BOOL v29; // r8d
  unsigned __int8 v30; // r8
  __int64 v31; // rax
  void *v32; // r15
  void *v33; // rdi
  unsigned int *v34; // rbx
  unsigned int v35; // eax
  void *v36; // rcx
  size_t v37; // r8
  size_t v38; // rdi
  size_t v39; // rdi
  __int64 v40; // rcx
  unsigned __int8 *v41; // r15
  KIRQL v42; // al
  unsigned __int64 v43; // rbx
  PVOID v44; // r15
  PVOID *v45; // rbx
  __int64 v46; // r14
  PVOID *v47; // rdi
  __int64 v48; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v52; // r9
  int v53; // eax
  bool v54; // zf
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 *v57; // r15
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  char *v61; // r8
  __int64 v62; // r12
  unsigned int *v63; // r14
  unsigned int *v64; // rsi
  int v65; // eax
  void *v66; // rcx
  unsigned int v67; // eax
  size_t v68; // r8
  size_t v69; // rdi
  size_t v70; // rdi
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  __int64 v73; // r8
  int v74; // eax
  PVOID v75; // r12
  PVOID *v76; // rbx
  __int64 v77; // r14
  __int64 v78; // rsi
  PVOID *v79; // rdi
  USHORT Count[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v81; // [rsp+2Ch] [rbp-DCh]
  unsigned int v82; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v83; // [rsp+34h] [rbp-D4h]
  __int64 v84; // [rsp+38h] [rbp-D0h]
  __int64 v85; // [rsp+40h] [rbp-C8h]
  void *v86; // [rsp+48h] [rbp-C0h]
  PVOID Pool2; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h]
  PVOID Affinity; // [rsp+60h] [rbp-A8h]
  _GROUP_AFFINITY Affinity_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v91; // [rsp+78h] [rbp-90h] BYREF
  __int64 v92; // [rsp+88h] [rbp-80h]
  _QWORD v93[34]; // [rsp+98h] [rbp-70h] BYREF

  memset(v93, 0, 0x108uLL);
  v91 = 0LL;
  v92 = 0LL;
  v82 = 0;
  Affinity_8 = 0LL;
  Count[0] = 0;
  P = 0LL;
  Affinity = 0LL;
  LODWORD(v84) = 0;
  if ( qword_140C1CF38 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C22FC0);
    v1 = (unsigned int)dword_140C1CF34;
    v2 = qword_140C1CF38;
    v3 = v0;
    Affinity = (PVOID)qword_140C1CF28;
    LODWORD(v84) = dword_140C1CF34;
    P = (PVOID)qword_140C1CF38;
    dword_140C1CF34 = 0;
    qword_140C1CF38 = 0LL;
    qword_140C1CF28 = 0LL;
    KeReleaseSpinLockFromDpcLevel(&qword_140C22FC0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v52 = *((_QWORD *)CurrentPrcb + 4375);
          v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v54 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
          *(_DWORD *)(v52 + 20) &= v53;
          if ( v54 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    if ( (_DWORD)v1 )
    {
      v4 = (_BYTE *)(v2 + 146);
      while ( 1 )
      {
        if ( !*(_QWORD *)(v4 - 74) || (*v4 & 8) == 0 )
          goto LABEL_7;
        LODWORD(v93[0]) = 2097153;
        memset((char *)v93 + 4, 0, 0x104uLL);
        v55 = *((unsigned __int16 *)v4 - 71);
        v56 = *(_QWORD *)(v4 - 138);
        if ( !(_WORD)v55 )
          goto LABEL_86;
        if ( WORD1(v93[0]) > (unsigned __int16)v55 )
          break;
LABEL_87:
        sub_140293A88((__int64)v93, (__int64)sub_1405C8360, 0LL, 0LL);
LABEL_7:
        v4 += 336;
        if ( !--v1 )
          goto LABEL_8;
      }
      LOWORD(v93[0]) = v55 + 1;
LABEL_86:
      v93[v55 + 1] |= v56;
      goto LABEL_87;
    }
  }
LABEL_8:
  v5 = 0;
  v6 = 0LL;
  v83 = 0;
  if ( word_140D05000 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v5, 0LL, Count);
      if ( Count[0] )
        v6 = (unsigned int)(v6 + 1);
      ++v5;
    }
    while ( v5 < (unsigned __int16)word_140D05000 );
    v83 = v6;
  }
  Pool2 = (PVOID)ExAllocatePool2(64LL, (unsigned int)(336 * v6), 1884115024LL);
  v7 = (char *)Pool2;
  v86 = 0LL;
  if ( !Pool2 )
    goto LABEL_60;
  byte_140C1CF31 = 1;
  byte_140C1CF24 = dword_140D05154 != 0;
  byte_140C1CF30 = dword_140D05154 == 2;
  if ( dword_140D05154 )
  {
    LODWORD(v8) = 0;
    *((_QWORD *)&v91 + 1) = qword_140C0B8E8[0];
    *(_QWORD *)&v91 = word_140C0B8E0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v91) )
    {
      v9 = sub_140348800(v82);
      v10 = *(_QWORD *)(v9 + 34912) - ((*(_QWORD *)(v9 + 34912) >> 1) & 0x5555555555555555LL);
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 != (unsigned int)((0x101010101010101LL
                                         * (((v10 & 0x3333333333333333LL)
                                           + ((v10 >> 2) & 0x3333333333333333LL)
                                           + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
          byte_140C1CF24 = 0;
      }
      else
      {
        v8 = (0x101010101010101LL
            * (((v10 & 0x3333333333333333LL)
              + ((v10 >> 2) & 0x3333333333333333LL)
              + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      }
    }
    v6 = v83;
    if ( byte_140C1CF24 )
      byte_140C1CF31 = v8;
  }
  v11 = 0;
  v81 = 0;
  v12 = 0;
  LODWORD(v85) = 0;
  if ( !word_140D05000 )
  {
LABEL_52:
    v31 = ExAllocatePool2(64LL, 8LL * v11, 1884115024LL);
    v86 = (void *)v31;
    v32 = (void *)v31;
    if ( !v31 )
      goto LABEL_121;
    v33 = (void *)v31;
    if ( (_DWORD)v6 )
    {
      v34 = (unsigned int *)(v7 + 120);
      v85 = v6;
      do
      {
        v35 = *((unsigned __int8 *)v34 - 114);
        v36 = v33;
        *((_QWORD *)v34 - 5) = v33;
        v37 = 8LL * ++v35;
        v38 = (size_t)v33 + v37;
        *v34 = v35;
        *((_QWORD *)v34 - 4) = v38;
        v39 = v37 + v38;
        *((_QWORD *)v34 - 3) = v39;
        v33 = (void *)(v37 + v39);
        memmove(v36, (const void *)(*((_QWORD *)v34 - 6) + 328LL), v37);
        memmove(*((void **)v34 - 4), (const void *)(*((_QWORD *)v34 - 6) + 328LL), 8LL * *v34);
        v40 = *((_QWORD *)v34 - 6);
        v41 = (unsigned __int8 *)(v34 + 2);
        *((_QWORD *)v34 - 2) = *(_QWORD *)(v40 + 24);
        *((_QWORD *)v34 - 1) = *(_QWORD *)(v40 + 24);
        if ( *((_BYTE *)v34 - 114) != *((_BYTE *)v34 + 8) )
        {
          v62 = 2LL;
          v63 = v34 + 8;
          v64 = v34 + 22;
          do
          {
            v65 = *v41;
            v66 = v33;
            if ( (_BYTE)v65 )
            {
              *((_QWORD *)v64 - 5) = v33;
              v67 = v65 + 1;
              v68 = 8LL * v67;
              v69 = (size_t)v33 + v68;
              *v64 = v67;
              *((_QWORD *)v64 - 4) = v69;
              v70 = v68 + v69;
              *((_QWORD *)v64 - 3) = v70;
              v33 = (void *)(v68 + v70);
              memmove(v66, (const void *)(*(_QWORD *)v63 + 328LL), v68);
              memmove(*((void **)v64 - 4), (const void *)(*(_QWORD *)v63 + 328LL), 8LL * *v64);
              *((_QWORD *)v64 - 2) = *(_QWORD *)(*(_QWORD *)v63 + 24LL);
              *((_QWORD *)v64 - 1) = *(_QWORD *)(*(_QWORD *)v63 + 24LL);
            }
            v63 += 2;
            v64 += 12;
            ++v41;
            --v62;
          }
          while ( v62 );
          v6 = v85;
        }
        v34 += 84;
        v85 = --v6;
      }
      while ( v6 );
      LODWORD(v6) = v83;
      v32 = v86;
    }
    v42 = KeAcquireSpinLockRaiseToDpc(&qword_140C22FC0);
    qword_140C1CF38 = (__int64)Pool2;
    v43 = v42;
    dword_140C1CF34 = v6;
    qword_140C1CF28 = (__int64)v32;
    KeReleaseSpinLockFromDpcLevel(&qword_140C22FC0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = *((_QWORD *)v72 + 4375);
          v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
          v54 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
          *(_DWORD *)(v73 + 20) &= v74;
          if ( v54 )
            sub_140418E4C(v72);
        }
      }
    }
    __writecr8(v43);
    goto LABEL_60;
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v12, &Affinity_8, 0LL);
    Group = Affinity_8.Group;
    v14 = Affinity_8.Group >= (unsigned int)word_140C0B8E0[0]
        ? 0LL
        : *(_QWORD *)&word_140C0B8E0[4 * Affinity_8.Group + 4];
    v15 = v14 & Affinity_8.Mask;
    Affinity_8.Mask &= v14;
    if ( Affinity_8.Mask )
      break;
LABEL_50:
    if ( ++v12 >= (unsigned __int16)word_140D05000 )
    {
      v11 = v81;
      goto LABEL_52;
    }
  }
  v16 = &v7[336 * (unsigned int)v85];
  LODWORD(v85) = v85 + 1;
  v17 = 0;
  *((_WORD *)v16 + 2) = Affinity_8.Group;
  *((_QWORD *)v16 + 1) = v15;
  do
  {
    v18 = v17;
    if ( v17 )
    {
      v18 = dword_140D05054 != 0 ? v17 : 0;
      if ( byte_140D068BC )
      {
        if ( dword_140D05054 )
          v18 = 0LL;
      }
    }
    LOWORD(v92) = Group;
    *((_QWORD *)&v91 + 1) = v15;
    *(_QWORD *)&v91 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v91) )
    {
      v19 = sub_140348800(v82);
      if ( *(_BYTE *)(v19 + 34056) == v17 )
      {
        ++v16[v18 + 128];
        *(_QWORD *)&v16[8 * v18 + 16] |= *(_QWORD *)(v19 + 200);
      }
    }
    ++v17;
    Group = Affinity_8.Group;
  }
  while ( v17 < 2u );
  v6 = v83;
  v20 = v16 + 128;
  v21 = 0;
  if ( !v16[128] )
  {
    *v20 = v16[129];
    *((_QWORD *)v16 + 2) = *((_QWORD *)v16 + 3);
    v16[129] = 0;
    *((_QWORD *)v16 + 3) = 0LL;
    goto LABEL_36;
  }
  if ( !v16[129] )
LABEL_36:
    v16[146] |= 4u;
  v22 = 2LL;
  v23 = 0;
  v24 = (unsigned __int8 *)(v16 + 128);
  do
  {
    v25 = *v24;
    v24[10] = v25;
    v23 += v25;
    v24[15] = v25;
    ++v24;
    --v22;
  }
  while ( v22 );
  LODWORD(v93[0]) = 2097153;
  v81 += v23 + 2 * v23 + 3;
  memset((char *)v93 + 4, 0, 0x104uLL);
  v26 = *((unsigned __int16 *)v16 + 2);
  v27 = *((_QWORD *)v16 + 1);
  if ( !(_WORD)v26 )
    goto LABEL_40;
  if ( WORD1(v93[0]) > (unsigned __int16)v26 )
  {
    LOWORD(v93[0]) = v26 + 1;
LABEL_40:
    v93[v26 + 1] |= v27;
  }
  if ( v12 < (unsigned int)v84 )
    v28 = (char *)P + 336 * v12 + 72;
  else
    v28 = 0LL;
  if ( (int)sub_140849A30(v93, v16 + 72, v28) >= 0 )
  {
    if ( v23 == (unsigned __int8)*v20 )
    {
LABEL_47:
      v7 = (char *)Pool2;
      v16[6] = v23;
      v16[135] = v23;
      v16[137] = v23;
      v29 = dword_140D0515C != 0;
      v16[145] = v23 / v29;
      v30 = v23 / v29;
      if ( v30 < (unsigned __int8)byte_140C1CF31 )
        v30 = byte_140C1CF31;
      v16[145] = v30;
      goto LABEL_50;
    }
    v57 = (__int64 *)(v16 + 16);
    while ( 1 )
    {
      v58 = (unsigned __int8)*v20;
      if ( !(_BYTE)v58 )
        goto LABEL_106;
      LODWORD(v93[0]) = 2097153;
      v81 += v58 + 2 * v58 + 3;
      memset((char *)v93 + 4, 0, 0x104uLL);
      v59 = *((unsigned __int16 *)v16 + 2);
      v60 = *v57;
      if ( (_WORD)v59 )
      {
        if ( WORD1(v93[0]) <= (unsigned __int16)v59 )
          goto LABEL_101;
        LOWORD(v93[0]) = v59 + 1;
      }
      v93[v59 + 1] |= v60;
LABEL_101:
      if ( v12 >= (unsigned int)v84 )
        v61 = 0LL;
      else
        v61 = (char *)P + 336 * v12 + 8 * v21 + 152;
      if ( (int)sub_140849A30(v93, &v16[8 * v21 + 152], v61) < 0 )
      {
        v32 = v86;
        goto LABEL_121;
      }
LABEL_106:
      ++v57;
      ++v21;
      ++v20;
      if ( v21 >= 2 )
        goto LABEL_47;
    }
  }
  v32 = 0LL;
LABEL_121:
  v75 = Pool2;
  if ( (_DWORD)v6 )
  {
    v76 = (PVOID *)((char *)Pool2 + 72);
    v77 = (unsigned int)v6;
    do
    {
      if ( *v76 )
        ExFreePoolWithTag(*v76, 0x704D5050u);
      v78 = 2LL;
      v79 = v76 + 10;
      do
      {
        if ( *v79 )
          ExFreePoolWithTag(*v79, 0x704D5050u);
        ++v79;
        --v78;
      }
      while ( v78 );
      v76 += 42;
      --v77;
    }
    while ( v77 );
  }
  ExFreePoolWithTag(v75, 0x704D5050u);
  if ( v32 )
    ExFreePoolWithTag(v32, 0x704D5050u);
LABEL_60:
  v44 = P;
  if ( P )
  {
    if ( (_DWORD)v84 )
    {
      v45 = (PVOID *)((char *)P + 72);
      v46 = (unsigned int)v84;
      do
      {
        if ( *v45 )
          ExFreePoolWithTag(*v45, 0x704D5050u);
        v47 = v45 + 10;
        v48 = 2LL;
        do
        {
          if ( *v47 )
            ExFreePoolWithTag(*v47, 0x704D5050u);
          ++v47;
          --v48;
        }
        while ( v48 );
        v45 += 42;
        --v46;
      }
      while ( v46 );
    }
    ExFreePoolWithTag(v44, 0x704D5050u);
  }
  if ( Affinity )
    ExFreePoolWithTag(Affinity, 0x704D5050u);
  sub_1403CEDC4();
  return sub_14081A654();
}
