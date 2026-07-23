/*
 * XREFs of sub_140582D7C @ 0x140582D7C
 * Callers:
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_140246160 @ 0x140246160 (sub_140246160.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_140268A48 @ 0x140268A48 (sub_140268A48.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033E11C @ 0x14033E11C (sub_14033E11C.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059109C @ 0x14059109C (sub_14059109C.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     sub_1405BFE08 @ 0x1405BFE08 (sub_1405BFE08.c)
 *     sub_1405C04D4 @ 0x1405C04D4 (sub_1405C04D4.c)
 *     sub_1405C0634 @ 0x1405C0634 (sub_1405C0634.c)
 */

void __fastcall sub_140582D7C(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  unsigned __int16 *v6; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  KIRQL v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // r9d
  ULONG_PTR v20; // rsi
  char v21; // r13
  ULONG_PTR v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // r8
  ULONG_PTR *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  unsigned __int8 v34; // di
  int v35; // r14d
  unsigned __int64 v36; // rsi
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned __int8 v41; // al
  unsigned __int8 v42; // di
  struct _KPRCB *v43; // r10
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  __int64 v47; // r8
  int v48; // eax
  char v49[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v52; // [rsp+50h] [rbp-B0h]
  ULONG_PTR *v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __m128i v60[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v61[28]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a3;
  v53 = (ULONG_PTR *)a3;
  v52 = a6;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset(v61, 0, 0xD8uLL);
  LOWORD(v50) = *v6;
  v11 = 48 * BugCheckParameter2 - 0x220000000000LL;
  LODWORD(v51) = 5;
  if ( (a4 & 0x10000A) == 8 )
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140C55048);
    qword_140C590D0 += a2;
    v13 = v12;
    byte_140C54F8C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v17 = (v16 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    v6 = (unsigned __int16 *)v53;
    LODWORD(v51) = 6;
  }
  if ( (a4 & 1) != 0 )
  {
    memset(v60, 0, sizeof(v60));
    if ( (a4 & 0x3000) != 0 )
    {
      v18 = sub_1403B78C4(0, (a4 >> 12) & 1);
      sub_140246160(v6, BugCheckParameter2, a2, v19, 1, v18 == 0, 0);
    }
    if ( (a4 & 2) != 0 )
    {
      v20 = *(_QWORD *)(a5 + 8);
      sub_14033E11C(**(_QWORD **)a5, *(_QWORD *)a5, a2);
      a4 |= *(_DWORD *)(a5 + 16);
    }
    else
    {
      if ( v53 != &StartContext )
        sub_1405BFE08(v53, &StartContext, BugCheckParameter2, a2);
      v20 = 0LL;
    }
    v51 = 0LL;
    v21 = 17;
    v49[0] = 17;
    if ( a5 )
      sub_1403B770C((__int64)v60, a4, v50);
    while ( a2 )
    {
      v22 = sub_1403B7A10(BugCheckParameter2, a2);
      v23 = v22;
      if ( a5 )
      {
        if ( v22 > (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3 )
          v23 = (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3;
        v51 = sub_140273AAC(v20, (__int64)v49);
        sub_1403B790C(
          (__m128i *)(48 * BugCheckParameter2 - 0x220000000000LL),
          v23,
          v60,
          v50,
          a4,
          *(_QWORD *)a5,
          (unsigned __int64 *)v20);
        v21 = v49[0];
      }
      else
      {
        v27 = sub_1402C1550(BugCheckParameter2);
        sub_1405C04D4(v61, *((unsigned int *)v27 + 2), 1LL);
        v61[21] = v53;
        v28 = LODWORD(v61[23]) | 4;
        HIDWORD(v61[22]) = a4;
        v61[0] = BugCheckParameter2;
        v61[1] = v23;
        LODWORD(v61[23]) |= 4u;
        v61[20] = v52;
        if ( v52 )
        {
          v28 |= 8u;
          LODWORD(v61[23]) = v28;
        }
        if ( (a4 & 0x80000) == 0 )
          LODWORD(v61[23]) = v28 | 2;
        sub_1405C0634(v61);
      }
      if ( v20 )
      {
        LOBYTE(v24) = v21;
        sub_140334790(v51, v24, v25, v26);
        v20 += 8 * v23;
      }
      a2 -= v23;
      BugCheckParameter2 += v23;
      v52 += 512 * v23;
    }
    return;
  }
  if ( (a4 & 2) == 0 )
    sub_1402C38D0((__int64)&StartContext, BugCheckParameter2, a2, 0, 0);
  v29 = 0x1FF80000000000LL;
  v30 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
  *((_QWORD *)&v58 + 1) |= 0x8000000000000000uLL;
  *((_QWORD *)&v55 + 1) |= 0x8000000000000000uLL;
  v31 = (unsigned __int64)*(unsigned __int16 *)v30 << 43;
  BYTE2(v56) = v51 | BYTE2(v56) & 0xF8;
  v52 = v30;
  *((_QWORD *)&v56 + 1) ^= (*((_QWORD *)&v56 + 1) ^ v31) & 0x1FF80000000000LL;
  if ( v30 != &StartContext )
    sub_1405BFE08(&StartContext, v30, BugCheckParameter2, a2);
  v32 = v11 + 48 * a2;
  v33 = 0LL;
  v34 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v34 <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v30 = (ULONG_PTR *)((-1LL << (v34 + 1)) & 4);
    v29 = (unsigned int)v30 | *(_DWORD *)(v10 + 20);
    *(_DWORD *)(v10 + 20) = v29;
  }
  v49[0] = v34;
  if ( v11 < v32 )
  {
    v35 = a4 & 0x20;
    v36 = v11 + 24;
    while ( 1 )
    {
      v50 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v50, (__int64)v30, v29, v10);
        while ( *(__int64 *)v36 < 0 );
      }
      if ( (*(_BYTE *)(v36 + 11) & 0x40) != 0 )
        sub_1405ADDA8(v11, 0LL, 1LL);
      if ( sub_140268A48((__int64)v52) )
        break;
      if ( v35 )
        goto LABEL_53;
      v37 = v55;
      *(_OWORD *)v11 = v54;
      v38 = v56;
LABEL_54:
      *(_OWORD *)(v11 + 16) = v37;
      *(_OWORD *)(v11 + 32) = v38;
LABEL_55:
      _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
      v11 += 48LL;
      v36 += 48LL;
      if ( (++v33 & 0x3F) != 0 || !(unsigned int)sub_14059109C() )
      {
        v34 = v49[0];
      }
      else
      {
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v41 = KeGetCurrentIrql(), v41 <= 0xFu) )
        {
          v42 = v49[0];
          if ( v49[0] <= 0xFu && v41 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v10 = *((_QWORD *)v43 + 4375);
            v42 = v49[0];
            v30 = (ULONG_PTR *)(-1LL << (v49[0] + 1));
            v44 = ~(unsigned __int16)v30;
            v17 = (v44 & *(_DWORD *)(v10 + 20)) == 0;
            v29 = (unsigned int)v44 & *(_DWORD *)(v10 + 20);
            *(_DWORD *)(v10 + 20) = v29;
            if ( v17 )
              sub_140418E4C((__int64)v43);
          }
        }
        else
        {
          v42 = v49[0];
        }
        __writecr8(v42);
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v34 <= 0xFu )
        {
          v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v30 = (ULONG_PTR *)((-1LL << (v34 + 1)) & 4);
          v29 = (unsigned int)v30 | *(_DWORD *)(v10 + 20);
          *(_DWORD *)(v10 + 20) = v29;
        }
        v49[0] = v34;
      }
      if ( v11 >= v32 )
        goto LABEL_72;
    }
    v39 = v55;
    *(_OWORD *)v11 = v54;
    v40 = v56;
    *(_OWORD *)(v11 + 16) = v39;
    *(_OWORD *)(v11 + 32) = v40;
    sub_140268998(v11);
    if ( !v35 )
      goto LABEL_55;
LABEL_53:
    v37 = v58;
    *(_OWORD *)v11 = v57;
    v38 = v59;
    goto LABEL_54;
  }
LABEL_72:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && v34 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = *((_QWORD *)v46 + 4375);
        v34 = v49[0];
        v48 = ~(unsigned __int16)(-1LL << (v49[0] + 1));
        v17 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
        *(_DWORD *)(v47 + 20) &= v48;
        if ( v17 )
          sub_140418E4C((__int64)v46);
      }
    }
  }
  __writecr8(v34);
}
