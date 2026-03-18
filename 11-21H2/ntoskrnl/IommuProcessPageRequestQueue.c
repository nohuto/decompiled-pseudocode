/*
 * XREFs of IommuProcessPageRequestQueue @ 0x140526870
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall IommuProcessPageRequestQueue(unsigned int a1)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r15
  unsigned __int8 v18; // bl
  _DWORD *v19; // r9
  KSPIN_LOCK *v20; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // r15
  _QWORD *i; // rdx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  char *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  int v37; // eax
  int v38; // r12d
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  int v43; // r14d
  int v44; // eax
  void *v45; // rdx
  __int64 v46; // r9
  unsigned __int64 v47; // r12
  int v48; // ecx
  void *v49; // rdx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  int v56; // eax
  _DWORD *v57; // r8
  _BYTE v59[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned __int16 v60; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v61; // [rsp+58h] [rbp+8h] BYREF
  void *Src; // [rsp+60h] [rbp+10h]
  __int64 v63; // [rsp+68h] [rbp+18h] BYREF
  _QWORD *v64; // [rsp+70h] [rbp+20h]
  __int64 v65; // [rsp+78h] [rbp+28h] BYREF
  __int64 v66; // [rsp+80h] [rbp+30h] BYREF
  __int128 v67; // [rsp+88h] [rbp+38h] BYREF
  __int64 v68; // [rsp+98h] [rbp+48h]

  v61 = 0;
  v66 = 0LL;
  v63 = 0LL;
  v60 = 0;
  v67 = 0LL;
  v68 = 0LL;
  if ( HalpHvIommu )
  {
    v1 = (_QWORD *)(IommupHvPageRequestQueues + ((unsigned __int64)a1 << 6));
    v3 = v1;
    v4 = (ULONG_PTR)(v1 + 3);
  }
  else
  {
    v1 = (_QWORD *)HalpIommuList;
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
  v65 = 0LL;
  v5 = *(unsigned int *)(v4 + 20);
  v6 = v5 + 15;
  v64 = v3;
  if ( v5 + 15 < v5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = alloca(v7);
  v59[0] = 0;
  v10 = v59;
  Src = v59;
  ExAcquirePushLockSharedEx(v4, 0LL);
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
    if ( !(*(unsigned int (__fastcall **)(_QWORD *, _BYTE *, unsigned int *, __int64 *, unsigned __int16 *, __int128 *, __int64 *, __int64 *))(v4 + 24))(
            v3,
            v10,
            &v61,
            &v65,
            &v60,
            &v67,
            &v66,
            &v63) )
      break;
    v59[0] = 1;
    if ( (v63 & 0x40) != 0 )
    {
      ++*(_DWORD *)(v4 + 16);
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 8));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      v17 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(HalIommuDispatch + 104))(v61) + 8);
      v18 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
      {
        v19 = KeGetCurrentPrcb()->SchedulerAssist;
        v19[5] |= (-1 << (v18 + 1)) & 0xFFFC;
      }
      v20 = (KSPIN_LOCK *)(v17 + 24);
      KxAcquireSpinLock((PKSPIN_LOCK)(v17 + 24));
      v21 = *(_QWORD **)(v17 + 40);
      v22 = 0LL;
      while ( v21 != (_QWORD *)(v17 + 40) )
      {
        v22 = v21;
        if ( (_QWORD *)v21[2] == v1 )
          break;
        v21 = (_QWORD *)*v21;
      }
      v23 = v22 + 3;
      v24 = 0LL;
      for ( i = (_QWORD *)*v23; i != v23; i = (_QWORD *)*i )
      {
        v24 = i;
        if ( *(_QWORD *)(i[5] + 40LL) == v65 )
          break;
      }
      KxReleaseSpinLock(v20);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && v18 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v16 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v27);
          }
        }
      }
      __writecr8(v18);
      if ( *((_BYTE *)v24 + 56) )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 8));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
        }
        __writecr8(v11);
        (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 112))(v61);
        v10 = Src;
        v3 = v64;
      }
      else
      {
        if ( *((_DWORD *)v24 + 15) != *(_DWORD *)(v4 + 16) )
        {
          v34 = (char *)v24 + 68;
          v35 = 512LL;
          do
          {
            *(_DWORD *)v34 &= ~2u;
            *((_DWORD *)v34 - 1) = 0;
            v34[20] = 0;
            v34 += 32;
            --v35;
          }
          while ( v35 );
          *((_DWORD *)v24 + 15) = *(_DWORD *)(v4 + 16);
        }
        v36 = &v24[4 * v60 + 8];
        v37 = *((_DWORD *)v36 + 1);
        ++*(_DWORD *)v36;
        v38 = v37 & 2;
        if ( (v63 & 0x10) != 0 )
        {
          v16 = HalpHvIommu == 0;
          *((_DWORD *)v36 + 1) = v37 | 1;
          *(_OWORD *)(v36 + 1) = v67;
          v36[3] = v68;
          if ( !v16 )
            memmove((void *)(v24[2056] + *(_DWORD *)(v4 + 20) * (unsigned int)v60), Src, *(unsigned int *)(v4 + 20));
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 8));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v42 & v41[5]) == 0;
              v41[5] &= v42;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v40);
            }
          }
        }
        __writecr8(v11);
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(HalIommuDispatch + 120))(v63, v66, v61);
        v44 = 0;
        if ( HalpHvIommu && v43 >= 0 && !v38 && (v63 & 0x30) == 0 )
        {
          if ( !IommupHvGpaAlwaysValid )
          {
            v45 = Src;
            *((_QWORD *)Src + 5) |= 0x4000000000000000uLL;
            v44 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))qword_140C4C5A0)(1LL, v45, 0LL);
          }
          v43 = v44;
        }
        v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
        if ( v43 < 0 )
          *((_DWORD *)v36 + 1) |= 2u;
        v16 = (*(_DWORD *)v36)-- == 1;
        if ( v16 && (v48 = *((_DWORD *)v36 + 1), (v48 & 1) != 0) )
        {
          if ( (v48 & 2) != 0 )
            v43 = -1073741823;
          if ( HalpHvIommu )
            v49 = (void *)(v24[2056] + *(_DWORD *)(v4 + 20) * (unsigned int)v60);
          else
            v49 = Src;
          v3 = v64;
          LOBYTE(v46) = 1;
          (*(void (__fastcall **)(_QWORD *, void *, _QWORD, __int64, _QWORD *))(v4 + 32))(
            v64,
            v49,
            (unsigned int)v43,
            v46,
            v36 + 1);
          *((_DWORD *)v36 + 1) &= 0xFFFFFFFC;
        }
        else
        {
          v3 = v64;
          if ( (v63 & 0x20) != 0 )
          {
            v10 = Src;
            (*(void (__fastcall **)(_QWORD *, void *, _QWORD, _QWORD, __int128 *))(v4 + 32))(
              v64,
              Src,
              (unsigned int)v43,
              0LL,
              &v67);
            goto LABEL_79;
          }
        }
        v10 = Src;
LABEL_79:
        KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 8));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
              v16 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v51);
            }
          }
        }
        __writecr8(v47);
        (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 112))(v61);
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 8));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v57 = v55->SchedulerAssist;
        v16 = (v56 & v57[5]) == 0;
        v57[5] &= v56;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v55);
      }
    }
  }
  __writecr8(v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v59[0];
}
