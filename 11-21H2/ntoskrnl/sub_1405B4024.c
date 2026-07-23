/*
 * XREFs of sub_1405B4024 @ 0x1405B4024
 * Callers:
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140277C9C @ 0x140277C9C (sub_140277C9C.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14036C428 @ 0x14036C428 (sub_14036C428.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B3384 @ 0x1405B3384 (sub_1405B3384.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 */

ULONG_PTR __fastcall sub_1405B4024(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  __int64 v5; // rbp
  ULONG_PTR v7; // r15
  unsigned int v8; // ecx
  __m128i *v9; // rbp
  int v10; // r12d
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int8 *v15; // rax
  PEX_SPIN_LOCK v16; // r14
  int v17; // edx
  unsigned __int8 *v18; // r8
  volatile LONG *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  _QWORD *v22; // r12
  volatile LONG *v23; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v25; // r9
  ULONG_PTR v26; // r12
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  __int64 v48; // r8
  int v49; // eax
  ULONG_PTR v51; // r9
  unsigned __int64 v52; // rdx
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // r9
  ULONG_PTR v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // r8
  ULONG_PTR v60; // r9
  __int64 v61; // rax
  __int64 v62; // r8
  BOOL v63; // eax
  __int64 v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  _QWORD *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rbx
  int v72; // eax
  char v73; // bl
  char v74; // al
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // rax
  __int64 v77; // r9
  int v78; // edx
  signed __int32 v79[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v80; // [rsp+20h] [rbp-88h]
  PEX_SPIN_LOCK SpinLock; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v82; // [rsp+30h] [rbp-78h]
  int v83; // [rsp+38h] [rbp-70h]
  _QWORD *v84; // [rsp+40h] [rbp-68h]
  unsigned __int64 v85; // [rsp+48h] [rbp-60h]
  __int64 v86; // [rsp+50h] [rbp-58h]
  int v87; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int8 *v88; // [rsp+60h] [rbp-48h]
  PEX_SPIN_LOCK v89; // [rsp+68h] [rbp-40h]
  int v90; // [rsp+B0h] [rbp+8h]
  __int64 v91; // [rsp+B0h] [rbp+8h]
  int v92; // [rsp+B8h] [rbp+10h]

  v5 = 48 * a1;
  v7 = a1;
  v8 = dword_140D05004;
  v9 = (__m128i *)(v5 - 0x220000000000LL);
  v10 = 0;
  v11 = 24512LL * a2;
  v12 = 0;
  v92 = 0;
  v13 = ((unsigned __int64)v9[2].m128i_i64[1] >> 43) & 0x3FF;
  v90 = 0;
  v80 = dword_140D05004;
  v14 = *(_QWORD *)(qword_140C51F48 + 8 * v13);
  v15 = 0LL;
  v86 = v14;
  v82 = 0LL;
  v16 = (PEX_SPIN_LOCK)(*(_QWORD *)(v14 + 16) + v11);
  v89 = v16;
  v17 = v16[5696] & 1;
  v83 = v17;
  if ( (unsigned int)dword_140D05004 > 1 )
  {
    v15 = (unsigned __int8 *)v16 + 22817;
    v82 = (unsigned __int8 *)v16 + 22817;
    if ( v17 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v8 = 1;
        v92 = a3;
        v80 = 1;
        v10 = a3;
        v15 = 0LL;
      }
      else
      {
        if ( (a4 & 8) == 0 )
          goto LABEL_10;
        v15 = (unsigned __int8 *)v16 + 22821;
      }
      v82 = v15;
    }
    else
    {
      if ( *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)v9[0x22000000000LL].m128i_i64 >> 4)) + 2) == a2 )
        return v7;
      v15 = v82;
      v12 = a3;
      v8 = v80;
      v17 = v83;
      v14 = v86;
      v90 = a3;
    }
  }
LABEL_10:
  v18 = &v15[v8];
  v88 = v18;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( v17 )
      {
        v10 = *v15;
        v92 = v10;
        if ( *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)v9[0x22000000000LL].m128i_i64 >> 4)) + 2) == a2
          && v10 == (unsigned int)sub_1402E8990((__int64)v9) )
        {
          return v7;
        }
        v14 = v86;
        v18 = v88;
      }
      else
      {
        v92 = v12;
        v10 = v12;
        v12 = v12 + 1 < v8 ? v12 + 1 : 0;
        v90 = v12;
      }
    }
    v85 = v14 + 3584;
    v19 = &v16[176 * v10];
    v20 = v14 + 2880;
    if ( v14 + 2880 < (unsigned __int64)(v14 + 3584) )
      break;
LABEL_51:
    v15 = v82 + 1;
    v82 = v15;
    if ( v15 >= v18 )
      return v7;
    v16 = v89;
    v8 = v80;
    v17 = v83;
  }
  v21 = v85;
  v22 = v19 + 818;
  v23 = (volatile LONG *)(v14 + 2912);
  v84 = v19 + 818;
  SpinLock = (PEX_SPIN_LOCK)(v14 + 2912);
  while ( *v22 == 0x3FFFFFFFFFLL )
  {
LABEL_49:
    v23 += 22;
    v22 += 11;
    v20 += 88LL;
    SpinLock = v23;
    v84 = v22;
    if ( v20 >= v21 )
    {
      v12 = v90;
      v10 = v92;
      v18 = v88;
      v14 = v86;
      goto LABEL_51;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v25 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v25 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v23);
  v26 = *v22;
  if ( v26 == 0x3FFFFFFFFFLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v23);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v31 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    v22 = v84;
LABEL_48:
    __writecr8(CurrentIrql);
    v21 = v85;
    goto LABEL_49;
  }
  v32 = 48 * v26 - 0x220000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    goto LABEL_53;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v87 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v87, v33, v34, v35);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v32 + 34) & 7) != 2 )
  {
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_QWORD *)v37 + 4375);
          v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v39;
          if ( v31 )
            sub_140418E4C((__int64)v37);
        }
      }
    }
    v20 -= 88LL;
    v23 = SpinLock - 22;
    v22 = v84 - 11;
    goto LABEL_48;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  if ( v26 != *v84 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    goto LABEL_40;
  }
LABEL_53:
  if ( _interlockedbittestandset64(&v9[1].m128i_i32[2], 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v31 )
            sub_140418E4C((__int64)v41);
        }
      }
    }
    goto LABEL_70;
  }
  if ( sub_140277C9C(48 * v26 - 0x220000000000LL) )
  {
    if ( dword_140C529CC != 1 )
      goto LABEL_82;
    v51 = v26 & 0x1F;
    LOBYTE(v52) = 1;
    v53 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v26 >> 5));
    if ( v51 + 1 > 0x20 )
    {
      if ( (v26 & 0x1F) != 0 )
      {
        _InterlockedOr(v53++, ((1 << (32 - (v26 & 0x1F))) - 1) << v51);
        v52 = 1LL - (32 - (unsigned int)(v26 & 0x1F));
        if ( v52 >= 0x20 )
        {
          v55 = v52 >> 5;
          v52 += -32LL * (v52 >> 5);
          do
          {
            *v53++ = -1;
            --v55;
          }
          while ( v55 );
        }
        if ( !v52 )
        {
LABEL_82:
          v56 = *(_QWORD *)v32 & 0xFFFFFFFFFFLL;
          v57 = *(_QWORD *)(v32 + 24) & 0xFFFFFFFFFFLL;
          if ( (*(_BYTE *)(v32 + 35) & 8) != 0 )
          {
            if ( sub_1402C1520(v57) )
            {
              v61 = sub_1402E7D14(v59[2], v7);
              *(_QWORD *)(v62 + 16) = v61;
            }
            else
            {
              *v59 ^= v58 & (v7 ^ *v59);
            }
            v63 = sub_1402C1520(v60);
            v65 = v7;
            v66 = v64;
            if ( v63 )
            {
              sub_14033C3E0(v64, v7);
              goto LABEL_95;
            }
          }
          else
          {
            if ( v57 == v44 )
              *(_QWORD *)(v20 + 16) = v7;
            else
              *(_QWORD *)(v45 + 48 * v57) ^= (v7 ^ *(_QWORD *)(v45 + 48 * v57)) & 0xFFFFFFFFFFLL;
            if ( v56 == v44 )
            {
              *(_QWORD *)(v20 + 24) = v7;
LABEL_95:
              sub_1403AC4E0(48 * v26 - 0x220000000000LL);
              sub_1402E5708((__int64)v9, *(unsigned __int8 *)(v32 + 34) >> 6, 1u);
              sub_1402E8AA0(v26, -1LL, 0);
              sub_1402E8154(v9, (__m128i *)(48 * v26 - 0x220000000000LL));
              sub_1405B3384((__int64)v9, 0LL);
              _InterlockedOr(v79, 0);
              if ( (((unsigned __int8)dword_140D31080 ^ ((unsigned __int64)v9[1].m128i_i64[1] >> 59)) & 7) != 0 )
                sub_14033C33C((__int64)v9, dword_140D31080, 1);
              v89 = (PEX_SPIN_LOCK)(v20 + 32);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
              v67 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL;
              v91 = v67;
              if ( v67 == v26 )
              {
                v68 = *(_QWORD *)(v32 + 8);
                sub_14033C3E0((__int64)v9, v7);
                *(_QWORD *)((v68 | 0x8000000000000000uLL) - 1392) = sub_14036C428(v7 << 12);
                v69 = (_QWORD *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
              }
              else
              {
                v69 = (_QWORD *)(sub_1402CC7C0(v67, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(v32 + 8) >> 3) & 0x1FF));
              }
              v70 = sub_140317A10((unsigned __int64)v69);
              v71 = sub_1402E7D14(v70, v7);
              if ( sub_140317A80((unsigned __int64)v69) )
              {
                if ( (unsigned int)sub_140229550() )
                {
                  v72 = 1;
                  if ( !HIBYTE(word_140C51864) && (v71 & 1) != 0 )
                    v71 |= 0x8000000000000000uLL;
                  goto LABEL_109;
                }
                if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v71 & 1) != 0 )
                  v71 |= 0x8000000000000000uLL;
              }
              v72 = 0;
LABEL_109:
              *v69 = v71;
              if ( v72 )
                sub_1402294F0((__int64)v69, v71);
              if ( v91 != v26 )
                sub_1402BEDD0((unsigned __int64)v69, 0x11u);
              sub_1402E7D60(v7, v26, 0LL, 6);
              _InterlockedOr(v79, 0);
              v73 = dword_140D31080;
              if ( (((unsigned __int8)dword_140D31080 ^ ((unsigned __int64)v9[1].m128i_i64[1] >> 59)) & 7) != 0 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel(v89);
                sub_14033C33C((__int64)v9, v73, 1);
                ExReleaseSpinLockExclusiveFromDpcLevel(v89);
              }
              _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
              v74 = *(_BYTE *)(v32 + 34);
              *(_QWORD *)(v32 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v32 + 34) = v74 & 0xC7;
              *(_BYTE *)(v32 + 35) &= ~0x20u;
              _InterlockedOr(v79, 0);
              sub_14033C33C(48 * v26 - 0x220000000000LL, dword_140D31080, 1);
              *(_QWORD *)v32 = 0LL;
              sub_140313CA0(48 * v26 - 0x220000000000LL, 0LL, 1);
              *(_BYTE *)(v32 + 34) = *(_BYTE *)(v32 + 34) & 0xF8 | 5;
              *(_QWORD *)(v32 + 16) = 0LL;
              sub_1402E89B0((unsigned __int64 *)(v32 + 16));
              *(_BYTE *)(v32 + 35) &= ~8u;
              sub_14033C300(48 * v26 - 0x220000000000LL, 0);
              *(_BYTE *)(v32 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v75 = KeGetCurrentIrql();
                  if ( v75 <= 0xFu && CurrentIrql <= 0xFu && v75 >= 2u )
                  {
                    v76 = KeGetCurrentPrcb();
                    v77 = *((_QWORD *)v76 + 4375);
                    v78 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v31 = (v78 & *(_DWORD *)(v77 + 20)) == 0;
                    *(_DWORD *)(v77 + 20) &= v78;
                    if ( v31 )
                      sub_140418E4C((__int64)v76);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v26;
            }
            v66 = v45 + 48 * v56;
            v65 = v7;
          }
          sub_140313CA0(v66, v65, 0);
          goto LABEL_95;
        }
      }
      v54 = (1 << v52) - 1;
    }
    else
    {
      v54 = 1 << v51;
    }
    _InterlockedOr(v53, v54);
    goto LABEL_82;
  }
  _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
  sub_1405B3FA4(48 * v26 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  sub_140268408((__int64)v9);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = *((_QWORD *)v47 + 4375);
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
        *(_DWORD *)(v48 + 20) &= v49;
        if ( v31 )
          sub_140418E4C((__int64)v47);
      }
    }
  }
  v7 = v26;
LABEL_70:
  __writecr8(CurrentIrql);
  return v7;
}
