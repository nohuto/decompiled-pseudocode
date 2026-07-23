/*
 * XREFs of sub_140526870 @ 0x140526870
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall sub_140526870(unsigned int a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rax
  _QWORD *v3; // r15
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  _BYTE *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // r15
  unsigned __int8 v19; // bl
  __int64 v20; // r9
  KSPIN_LOCK *v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  _QWORD *v24; // r8
  _QWORD *v25; // r15
  _QWORD *i; // rdx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  char *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  int v39; // eax
  int v40; // r12d
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  __int64 v43; // r9
  int v44; // eax
  int v45; // r14d
  int v46; // eax
  void *v47; // rdx
  unsigned __int64 v48; // r12
  void *v49; // rdx
  __int64 v50; // rdx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  __int64 v53; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  int v57; // eax
  __int64 v58; // r8
  _BYTE v60[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned __int16 v61; // [rsp+54h] [rbp+4h]
  unsigned int v62; // [rsp+58h] [rbp+8h]
  void *Src; // [rsp+60h] [rbp+10h]
  __int64 v64; // [rsp+68h] [rbp+18h]
  _QWORD *v65; // [rsp+70h] [rbp+20h]
  __int64 v66; // [rsp+78h] [rbp+28h]
  __int64 v67; // [rsp+80h] [rbp+30h]
  __int128 v68; // [rsp+88h] [rbp+38h]
  __int64 v69; // [rsp+98h] [rbp+48h]

  v62 = 0;
  v67 = 0LL;
  v64 = 0LL;
  v61 = 0;
  v68 = 0LL;
  v69 = 0LL;
  if ( byte_140C4BCBC )
  {
    v1 = (_QWORD *)(qword_140C4A128 + ((unsigned __int64)a1 << 6));
    v3 = v1;
    v4 = (ULONG_PTR)(v1 + 3);
  }
  else
  {
    v1 = (_QWORD *)qword_140C4BCE0;
    if ( a1 )
    {
      v2 = a1;
      do
      {
        v1 = (_QWORD *)*v1;
        --v2;
      }
      while ( v2 );
    }
    v3 = (_QWORD *)v1[2];
    v4 = (ULONG_PTR)(v1 + 50);
  }
  v66 = 0LL;
  v5 = *(unsigned int *)(v4 + 20);
  v6 = v5 + 15;
  v65 = v3;
  if ( v5 + 15 < v5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = alloca(v7);
  v60[0] = 0;
  v10 = v60;
  Src = v60;
  ExAcquirePushLockSharedEx(v4, 0LL);
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
    if ( !(unsigned int)sub_14042A5E0(v3, v10) )
      break;
    v60[0] = 1;
    if ( (v64 & 0x40) != 0 )
    {
      ++*(_DWORD *)(v4 + 16);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 8));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      v18 = *(_QWORD *)(sub_14042A5E0(v62, v12) + 8);
      v19 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v19 <= 0xFu )
      {
        v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v20 + 20) |= (-1 << (v19 + 1)) & 0xFFFC;
      }
      v21 = (KSPIN_LOCK *)(v18 + 24);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 24));
      v22 = *(_QWORD **)(v18 + 40);
      v23 = 0LL;
      while ( v22 != (_QWORD *)(v18 + 40) )
      {
        v23 = v22;
        if ( (_QWORD *)v22[2] == v1 )
          break;
        v22 = (_QWORD *)*v22;
      }
      v24 = v23 + 3;
      v25 = 0LL;
      for ( i = (_QWORD *)*v24; i != v24; i = (_QWORD *)*i )
      {
        v25 = i;
        if ( *(_QWORD *)(i[5] + 40LL) == v66 )
          break;
      }
      KeReleaseSpinLockFromDpcLevel(v21);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v19 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << (v19 + 1));
            v17 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v17 )
              sub_140418E4C((__int64)v28);
          }
        }
      }
      __writecr8(v19);
      if ( *((_BYTE *)v25 + 56) )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 8));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v31 = -1LL << ((unsigned __int8)v11 + 1);
              v34 = *((_QWORD *)v33 + 4375);
              v35 = ~(unsigned __int16)v31;
              v17 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
              *(_DWORD *)(v34 + 20) &= v35;
              if ( v17 )
                sub_140418E4C((__int64)v33);
            }
          }
        }
        __writecr8(v11);
        sub_14042A5E0(v62, v31);
        v10 = Src;
        v3 = v65;
      }
      else
      {
        if ( *((_DWORD *)v25 + 15) != *(_DWORD *)(v4 + 16) )
        {
          v36 = (char *)v25 + 68;
          v37 = 512LL;
          do
          {
            *(_DWORD *)v36 &= ~2u;
            *((_DWORD *)v36 - 1) = 0;
            v36[20] = 0;
            v36 += 32;
            --v37;
          }
          while ( v37 );
          *((_DWORD *)v25 + 15) = *(_DWORD *)(v4 + 16);
        }
        v38 = &v25[4 * v61 + 8];
        v39 = *((_DWORD *)v38 + 1);
        ++*(_DWORD *)v38;
        v40 = v39 & 2;
        if ( (v64 & 0x10) != 0 )
        {
          v17 = byte_140C4BCBC == 0;
          *((_DWORD *)v38 + 1) = v39 | 1;
          *(_OWORD *)(v38 + 1) = v68;
          v38[3] = v69;
          if ( !v17 )
            memmove((void *)(v25[2056] + *(_DWORD *)(v4 + 20) * (unsigned int)v61), Src, *(unsigned int *)(v4 + 20));
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 8));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = *((_QWORD *)v42 + 4375);
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
              *(_DWORD *)(v43 + 20) &= v44;
              if ( v17 )
                sub_140418E4C((__int64)v42);
            }
          }
        }
        __writecr8(v11);
        v45 = sub_14042A5E0(v64, v67);
        v46 = 0;
        if ( byte_140C4BCBC && v45 >= 0 && !v40 && (v64 & 0x30) == 0 )
        {
          if ( !byte_140C4A118 )
          {
            v47 = Src;
            *((_QWORD *)Src + 5) |= 0x4000000000000000uLL;
            v46 = sub_14042A5E0(1LL, v47);
          }
          v45 = v46;
        }
        v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
        if ( v45 < 0 )
          *((_DWORD *)v38 + 1) |= 2u;
        v17 = (*(_DWORD *)v38)-- == 1;
        if ( v17 && (*((_DWORD *)v38 + 1) & 1) != 0 )
        {
          if ( byte_140C4BCBC )
            v49 = (void *)(v25[2056] + *(_DWORD *)(v4 + 20) * (unsigned int)v61);
          else
            v49 = Src;
          v3 = v65;
          sub_14042A5E0(v65, v49);
          *((_DWORD *)v38 + 1) &= 0xFFFFFFFC;
        }
        else
        {
          v3 = v65;
          if ( (v64 & 0x20) != 0 )
          {
            v10 = Src;
            sub_14042A5E0(v65, Src);
            goto LABEL_77;
          }
        }
        v10 = Src;
LABEL_77:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 8));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v50 = -1LL << ((unsigned __int8)v48 + 1);
              v53 = *((_QWORD *)v52 + 4375);
              v54 = ~(unsigned __int16)v50;
              v17 = (v54 & *(_DWORD *)(v53 + 20)) == 0;
              *(_DWORD *)(v53 + 20) &= v54;
              if ( v17 )
                sub_140418E4C((__int64)v52);
            }
          }
        }
        __writecr8(v48);
        sub_14042A5E0(v62, v50);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 8));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v55 = KeGetCurrentIrql();
      if ( v55 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v58 = *((_QWORD *)v56 + 4375);
        v17 = (v57 & *(_DWORD *)(v58 + 20)) == 0;
        *(_DWORD *)(v58 + 20) &= v57;
        if ( v17 )
          sub_140418E4C((__int64)v56);
      }
    }
  }
  __writecr8(v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  sub_1402AFC00(v4);
  return v60[0];
}
