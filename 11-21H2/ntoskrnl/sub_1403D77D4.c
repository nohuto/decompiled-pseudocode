/*
 * XREFs of sub_1403D77D4 @ 0x1403D77D4
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     sub_1409680B0 @ 0x1409680B0 (sub_1409680B0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403D240C @ 0x1403D240C (sub_1403D240C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 */

__int64 __fastcall sub_1403D77D4(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rax
  __int64 *v10; // r14
  __int16 v11; // cx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  BOOL v14; // esi
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  char v17; // al
  ULONG_PTR v18; // rcx
  int v19; // r8d
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int16 v27; // cx
  unsigned __int64 v29; // rax
  char v30; // dl
  _QWORD *v31; // r12
  __int64 v32; // rbx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r15
  unsigned __int8 v38; // r13
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rax
  _QWORD *v41; // r15
  unsigned __int64 v42; // r13
  BOOL v43; // r12d
  _QWORD *v44; // rax
  unsigned __int64 v45; // r13
  __int64 *v46; // r14
  int v47; // r15d
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v52; // r9
  int v53; // eax
  bool v54; // zf
  unsigned __int8 v55; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v56; // [rsp+20h] [rbp-E0h]
  BOOL v57; // [rsp+28h] [rbp-D8h]
  __int64 v58; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 *v65; // [rsp+58h] [rbp-A8h]
  _QWORD *v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+70h] [rbp-90h]
  unsigned __int64 v69; // [rsp+78h] [rbp-88h]
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  _QWORD v72[24]; // [rsp+90h] [rbp-70h] BYREF

  v67 = a1;
  v5 = a2;
  v63 = a3;
  v6 = a3;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = a4;
  v9 = *(unsigned int *)(a1 + 40);
  v10 = (__int64 *)(a1 + 48);
  v11 = v7 + *(_QWORD *)(a1 + 32);
  v65 = v10;
  v64 = v11 & 0xFFF;
  v12 = (unsigned __int64)(v9 + 4095 + v64) >> 12;
  v62 = v12;
  v13 = 511LL;
  v70 = 0LL;
  v57 = 0;
  v71 = v7 + ((__int64)(a2 << 25) >> 16);
  v14 = 0;
  if ( (a2 & 0xFFF) == 0 && !v6 && (v12 & 0x1FF) == 0 )
  {
    v14 = (*(_DWORD *)v10 & 0x1FFLL) == 0;
LABEL_29:
    v57 = v14;
  }
  v61 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( v6 )
    v17 = sub_1402CF4F0(v6);
  else
    v17 = 17;
  v55 = v17;
  while ( 1 )
  {
    if ( v17 != 17 )
    {
      if ( !v16 )
        goto LABEL_34;
      if ( (v5 & 0xFFF) == 0 )
      {
        sub_14020D8D0(v6, v16);
LABEL_34:
        v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        sub_14031DE00(v6, v16, 0LL, v13);
      }
    }
    v18 = *v10;
    v19 = v8;
    if ( *v10 <= (unsigned __int64)qword_140C50840
      && (*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v20 = 48 * v18 - 0x220000000000LL;
      if ( !*(_WORD *)(v20 + 32) && !dword_140C529CC )
        sub_140593B18(v18, 2uLL);
      if ( (*(_BYTE *)(v20 + 34) & 0xC0) == 0xC0 )
        sub_1403D240C(v20, a5);
      v19 = sub_14026C61C(a4, v20);
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        v19 = v8 | 0x18;
    }
    else
    {
      v19 = v8 | 8;
    }
    v21 = sub_1402CBD10(v5, *v10, v19 | 0xA0000000);
    v22 = v21;
    if ( v14 )
    {
      if ( v10 == v65 )
      {
        v15 = v21;
      }
      else
      {
        v29 = v15 ^ (v15 ^ ((v15 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
        v61 = v29;
        v15 = v29;
        if ( v29 == v22 )
          goto LABEL_17;
        if ( (((unsigned int)v22 | (unsigned int)v29) & 0x1FF000) != 0 )
        {
          if ( v55 != 17 )
          {
            if ( v16 )
              sub_14020D8D0(v6, v16);
            sub_1402B0CE0(v6, v55);
          }
          v14 = 0;
          v8 = a4;
          v62 = (v64 + 4095 + (unsigned __int64)*(unsigned int *)(v67 + 40)) >> 12;
          v5 -= 8 * (((__int64)v10 - v67 - 48) >> 3);
          v10 = v65;
          goto LABEL_29;
        }
        v15 = v29 ^ (v22 ^ v29) & 0xFFFFFFFFFF000LL;
      }
      v61 = v15;
    }
    else
    {
      v23 = v21;
      v24 = 0;
      if ( sub_140317A80(v5) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v24 = 1;
          if ( HIBYTE(word_140C51864) == v30 && (v22 & 1) != 0 )
            v23 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v22 & 1) != 0 )
            v23 |= 0x8000000000000000uLL;
          v15 = v61;
        }
      }
      *(_QWORD *)v5 = v23;
      if ( v24 )
        sub_1402294F0(v5, v23);
      v6 = v63;
      v14 = v57;
    }
LABEL_17:
    ++v10;
    v5 += 8LL;
    if ( !--v62 )
      break;
    v17 = v55;
    v8 = a4;
  }
  if ( v55 != 17 )
  {
    if ( v16 )
      sub_14020D8D0(v6, v16);
    sub_1402B0CE0(v6, v55);
  }
  if ( v14 )
  {
    memset(v72, 0, 0xB8uLL);
    v58 = 0LL;
    v31 = 0LL;
    v66 = 0LL;
    v32 = v63;
    v33 = (((v5 - 8 * (((unsigned __int64)*(unsigned int *)(v67 + 40) + v64 + 4095) >> 12)) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    v34 = ((unsigned __int64)*(unsigned int *)(v67 + 40) + v64 + 4095) >> 21;
    v35 = v22 | 0x80;
    v64 = v35;
    v36 = 0LL;
    v60 = 0LL;
    v37 = v33 + 8 * v34;
    v68 = v37;
    if ( v63 )
      v38 = sub_1402CF4F0(v63);
    else
      v38 = 17;
    v56 = v38;
    if ( v33 >= v37 )
    {
LABEL_95:
      if ( v38 != 17 )
        sub_1402B0CE0(v32, v38);
      v49 = ExAcquireSpinLockExclusive(&dword_140C53050);
      *v31 = qword_140C53060;
      qword_140C53060 = v58;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53050);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v49 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v52 = *((_QWORD *)CurrentPrcb + 4375);
            v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
            v54 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
            *(_DWORD *)(v52 + 20) &= v53;
            if ( v54 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v49);
      goto LABEL_21;
    }
    while ( 1 )
    {
      if ( v38 != 17 )
      {
        v36 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v60 = v36;
        sub_14031DE00(v32, v36, 0LL, 0x7FFFFFFFF8LL);
      }
      v39 = 512 - ((v33 >> 3) & 0x1FF);
      if ( v39 > (__int64)(v68 - v33) >> 3 )
        v39 = (__int64)(v68 - v33) >> 3;
      v69 = v39;
      v40 = v33 + 8 * v39;
      v62 = v40;
      if ( v33 < v40 )
      {
        v41 = (_QWORD *)v58;
        v42 = v40;
        do
        {
          v66 = v31;
          v61 = sub_140317A10(v33);
          v43 = 0;
          if ( sub_140317A80(v33) )
            v43 = sub_140229550() != 0;
          *(_QWORD *)v33 = 0LL;
          if ( v43 )
            sub_1402294F0(v33, 0LL);
          v31 = (_QWORD *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v61) >> 12) & 0xFFFFFFFFFFLL)
                         - 0x220000000000LL);
          v44 = v31;
          if ( v66 )
            v31 = v66;
          v33 += 8LL;
          *v44 = v41;
          v41 = v44;
        }
        while ( v33 < v42 );
        v35 = v64;
        v36 = v60;
        v39 = v69;
        v38 = v56;
        v58 = (__int64)v44;
        v66 = v31;
      }
      v72[1] = 20LL;
      LODWORD(v72[0]) = 0;
      WORD2(v72[0]) = 0;
      v72[2] = 0LL;
      v72[3] = 0LL;
      sub_1402CF280((__int64)v72, (__int64)((v33 << 25) - v70) >> 16, v39, 0);
      sub_14032F1B0((__int64)v72);
      v33 -= 8 * v39;
      if ( v33 < v62 )
        break;
LABEL_92:
      v32 = v63;
      if ( v36 )
        sub_14020D8D0(v63, v36);
      if ( v33 >= v68 )
        goto LABEL_95;
    }
    v45 = v62;
    v46 = v65;
    while ( 1 )
    {
      v47 = 0;
      v35 ^= (v35 ^ (*v46 << 12)) & 0xFFFFFFFFFF000LL;
      v48 = v35;
      if ( sub_140317A80(v33) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v47 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_86;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_86:
          if ( (v35 & 1) != 0 )
            v48 = v35 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v33 = v48;
      if ( v47 )
        sub_1402294F0(v33, v48);
      v46 += 512;
      v33 += 8LL;
      if ( v33 >= v45 )
      {
        v31 = v66;
        v38 = v56;
        v65 = v46;
        v36 = v60;
        v64 = v35;
        goto LABEL_92;
      }
    }
  }
LABEL_21:
  v25 = v67;
  v26 = v71;
  v27 = *(_WORD *)(v67 + 10) | 1;
  *(_QWORD *)(v67 + 24) = v71;
  *(_WORD *)(v25 + 10) = v27;
  if ( (v27 & 0x10) != 0 )
    *(_WORD *)(v25 + 10) = v27 | 0x20;
  return v26;
}
