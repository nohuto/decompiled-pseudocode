/*
 * XREFs of sub_1405D5704 @ 0x1405D5704
 * Callers:
 *     sub_1403B9B9C @ 0x1403B9B9C (sub_1403B9B9C.c)
 *     sub_1405D5E24 @ 0x1405D5E24 (sub_1405D5E24.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B92D0 @ 0x1403B92D0 (sub_1403B92D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C75AC @ 0x1405C75AC (sub_1405C75AC.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CEDA8 @ 0x1405CEDA8 (sub_1405CEDA8.c)
 *     sub_1405CEED0 @ 0x1405CEED0 (sub_1405CEED0.c)
 *     sub_1405D4A54 @ 0x1405D4A54 (sub_1405D4A54.c)
 *     sub_1405D5604 @ 0x1405D5604 (sub_1405D5604.c)
 *     sub_1405D655C @ 0x1405D655C (sub_1405D655C.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 */

void __fastcall sub_1405D5704(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  ULONG_PTR v4; // rsi
  char *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int i; // edi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  _DWORD *v10; // r8
  int v11; // r12d
  signed __int32 v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // r10
  _DWORD *v17; // r9
  unsigned int *v18; // r11
  int v19; // r14d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rdi
  unsigned int *v30; // rdi
  int v31; // r11d
  unsigned int v32; // edx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 v35; // r10
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  unsigned __int8 CurrentIrql; // al
  KIRQL v39; // bl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v41; // r8
  int v42; // eax
  bool v43; // zf
  KIRQL v44; // [rsp+20h] [rbp-E0h]
  bool v45; // [rsp+21h] [rbp-DFh]
  char v46; // [rsp+22h] [rbp-DEh]
  signed __int32 v47; // [rsp+24h] [rbp-DCh] BYREF
  int v48; // [rsp+28h] [rbp-D8h] BYREF
  int v49; // [rsp+2Ch] [rbp-D4h]
  __int128 *v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  __int128 v53; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v54[20]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v55[32]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v48 = 0;
  v53 = 0LL;
  memset(v54, 0, 0x94uLL);
  v4 = *(_QWORD *)(a1 + 32);
  v50 = 0LL;
  if ( !*(_QWORD *)(v4 + 48) )
  {
    if ( (*(_DWORD *)(v4 + 824) & 2) != 0 )
      sub_1405D5604(a1, v2);
    return;
  }
  *(_BYTE *)(a1 + 188) = 0;
  v5 = (char *)&v54[3];
  v6 = 32LL;
  *(_OWORD *)&v54[1] = *(_OWORD *)(v4 + 216);
  if ( ((unsigned __int8)&v54[3] & 4) != 0 )
  {
    LODWORD(v54[3]) = 1;
    v6 = 31LL;
    v5 = (char *)&v54[3] + 4;
  }
  memset64(v5, 0x100000001uLL, v6 >> 1);
  if ( (v6 & 1) != 0 )
    *(_DWORD *)&v5[4 * v6 - 4] = 1;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    LODWORD(v54[0]) = i;
    *(_QWORD *)&v53 = v54;
    DWORD2(v53) = 8;
    v50 = &v53;
    EmClientRuleEvaluate(qword_14003C178, &v50, 1LL, &v48);
    if ( v48 == 2 )
      *(_BYTE *)(a1 + 188) = 1;
  }
  v52 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
  sub_1402D2864(v52, 0, 0);
  v8 = v55[0];
  v9 = (unsigned __int64)v55 & 4;
  v10 = v55;
  if ( ((unsigned __int8)v55 & 4) != 0 )
    v8 = 1;
  v55[0] = v8;
  if ( ((unsigned __int8)v55 & 4) != 0 )
    v10 = &v55[1];
  memset64(v10, 0x100000001uLL, 16LL - ((unsigned int)v9 != 0LL));
  if ( ((unsigned __int8)v55 & 4) != 0 )
    *(_DWORD *)((char *)v10 + (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v11 = sub_1405C75AC();
  v49 = v11;
  v45 = 0;
  v47 = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
  v12 = v47;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 600));
  *(_DWORD *)(v4 + 616) = v47;
  memset((void *)(v4 + 632), 0, 0xC0uLL);
  *(_BYTE *)(v4 + 608) = 0;
  if ( sub_1405CEED0(*(_QWORD *)(a1 + 32), (__int64)v55, v2) || *(_BYTE *)(a1 + 188) )
  {
    v45 = sub_1405D4A54(&v47);
    if ( *(_BYTE *)(a1 + 188) )
    {
      if ( (_DWORD)v2 )
      {
        v13 = 0LL;
        v14 = v2;
        do
        {
          v15 = *(_DWORD *)((char *)&v54[3] + v13 * 4);
          if ( v55[v13] < v15 )
            v55[v13] = v15;
          ++v13;
          --v14;
        }
        while ( v14 );
        goto LABEL_28;
      }
    }
    else if ( (_DWORD)v2 )
    {
LABEL_28:
      v16 = 0LL;
      v17 = v55;
      v18 = v55;
      v19 = 1;
      v20 = 0;
      do
      {
        if ( !*(_BYTE *)(v16 + qword_140D05108 + 57) && *v17 != 1 )
          sub_1405CAE6C(0x620uLL, v4, v20, 0LL);
        v21 = *v18;
        v22 = 1;
        do
        {
          if ( v22 >= v21 )
            break;
          v23 = v22++ - 1;
          *(_DWORD *)(a1 + 4 * v23 + 144) |= v19;
        }
        while ( v22 <= 3 );
        if ( v11 != -1 && v20 == v11 && v21 > 1 )
        {
          *(_DWORD *)(v4 + 612) = v21;
          *(_QWORD *)(v4 + 624) = MEMORY[0xFFFFF78000000008];
          *(_BYTE *)(v4 + 608) = 1;
          _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x810u);
        }
        ++v18;
        v19 *= 2;
        ++v20;
        v16 += 448LL;
        ++v17;
      }
      while ( v20 < (unsigned int)v2 );
    }
    v24 = *(_DWORD *)(a1 + 152);
    v12 = v47;
    *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 164) = v24;
  }
  *(_DWORD *)(v4 + 616) = v12;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 600));
  v25 = *(int *)(a1 + 168);
  if ( (_DWORD)v25 != 4 )
    sub_1403B92D0(0, *(_DWORD *)(a1 + 4 * v25 + 140), 1, (volatile signed __int32 *)(a1 + 184));
  if ( *(_BYTE *)(a1 + 124) )
  {
    v26 = 0;
    v46 = 0;
    if ( !*(_DWORD *)(a1 + 180) )
      goto LABEL_68;
    while ( 1 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v4 + 832) + 8LL * v26);
      v28 = a1 + 208LL * v26;
      memset(v55, 0, sizeof(v55));
      v29 = v27 + 200;
      v51 = v29;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v29);
      *(_DWORD *)(v29 + 16) = v12;
      memset((void *)(v29 + 32), 0, 0xC0uLL);
      *(_BYTE *)(v29 + 8) = 0;
      if ( sub_1405CEDA8(*(_QWORD *)(a1 + 32), v26, (__int64)v55, v2) )
      {
        v45 = sub_1405D4A54(&v47);
        v30 = v55;
        v31 = 1;
        v32 = 0;
        if ( (_DWORD)v2 )
        {
          v33 = v51;
          v34 = v55;
          v35 = 0LL;
          do
          {
            if ( !*(_BYTE *)(v35 + qword_140D05108 + 57) && *v34 )
              sub_1405CAE6C(0x621uLL, v4, v26, v32);
            v36 = 0;
            if ( *(_DWORD *)(v28 + 380) )
            {
              v37 = (_DWORD *)(*(_QWORD *)(v28 + 392) + 16LL);
              do
              {
                if ( v36 >= *v30 )
                  break;
                *v37 |= v31;
                ++v36;
                v37 += 6;
              }
              while ( v36 < *(_DWORD *)(v28 + 380) );
            }
            if ( v49 != -1 && v32 == v49 && *v30 )
            {
              *(_DWORD *)(v33 + 12) = *v30;
              *(_QWORD *)(v33 + 24) = MEMORY[0xFFFFF78000000008];
              *(_BYTE *)(v33 + 8) = 1;
              v46 = 1;
              _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x10u);
            }
            ++v30;
            v31 *= 2;
            ++v32;
            v35 += 448LL;
            ++v34;
          }
          while ( v32 < (unsigned int)v2 );
        }
        v12 = v47;
        v29 = v51;
      }
      *(_DWORD *)(v29 + 16) = v12;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v29);
      sub_1403B92D0(
        0,
        *(_DWORD *)(*(_QWORD *)(v28 + 392) + 24LL * *(unsigned int *)(v28 + 368) + 16),
        1,
        (volatile signed __int32 *)(v28 + 384));
      if ( v46 )
        _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v4 + 824), 0xFFFFFEFF);
      if ( ++v26 >= *(_DWORD *)(a1 + 180) )
        break;
      v12 = v47;
    }
    if ( *(_BYTE *)(a1 + 124) )
      goto LABEL_68;
  }
  if ( *(_BYTE *)(a1 + 188) )
LABEL_68:
    *(_DWORD *)(a1 + 172) = 2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v39 = v44;
    if ( v44 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v41 = *((_QWORD *)CurrentPrcb + 4375);
      v42 = ~(unsigned __int16)(-1LL << (v44 + 1));
      v43 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
      *(_DWORD *)(v41 + 20) &= v42;
      if ( v43 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v39 = v44;
  }
  __writecr8(v39);
  sub_1402D25CC(v52);
  if ( v45 )
    sub_1405D655C();
}
