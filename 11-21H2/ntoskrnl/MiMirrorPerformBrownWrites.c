/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x140399444
 * Callers:
 *     MiMirrorBrownPhase @ 0x140A48B0C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, char a2, _QWORD *a3)
{
  int v3; // r12d
  ULONG_PTR v4; // rsi
  int v5; // ebp
  __int64 v6; // r14
  char v7; // r13
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rdi
  __int64 j; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  _DWORD *v15; // r8
  __int64 v16; // r15
  unsigned __int64 k; // rcx
  unsigned __int64 v18; // rbx
  int v19; // r13d
  _DWORD *v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  volatile signed __int32 *v25; // r8
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  ULONG_PTR v34; // r9
  unsigned __int64 v35; // rdx
  volatile signed __int32 *v36; // r8
  unsigned int v37; // eax
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  ULONG_PTR v40; // r9
  unsigned __int64 v41; // rdx
  volatile signed __int32 *v42; // r8
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  bool v49; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rbp
  unsigned __int64 v60; // r14
  unsigned __int8 v61; // cl
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  int v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+30h] [rbp-58h]
  int v70; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v65 = 0;
  v4 = 0LL;
  v70 = 0;
  v5 = 0;
  v66 = 0LL;
  v6 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v8 = v4 & -(__int64)(v4 < qword_140C52A10);
    for ( i = qword_140C52A10 - 1; i - v8 == -1LL; i = v22 - 1 )
    {
      v12 = -1LL;
LABEL_45:
      if ( !v8 )
        goto LABEL_10;
      v22 = v4 + 1;
      v8 = 0LL;
      if ( v4 + 1 > qword_140C52A10 )
        v22 = qword_140C52A10;
    }
    v10 = (_QWORD *)(qword_140C52A18 + 8 * (v8 >> 6));
    for ( j = ((1LL << (v8 & 0x3F)) - 1) | ~*v10; j == -1; j = ~*v10 )
    {
      if ( (unsigned __int64)++v10 > qword_140C52A18 + 8 * (i >> 6) )
        goto LABEL_42;
    }
    _BitScanForward64((unsigned __int64 *)&j, ~j);
    v12 = j + (((__int64)v10 - qword_140C52A18) >> 3 << 6);
    if ( v12 > i )
    {
LABEL_42:
      v12 = -1LL;
      goto LABEL_45;
    }
    if ( v12 == -1LL )
      goto LABEL_45;
LABEL_10:
    if ( v12 < v4 || v12 == -1LL )
      goto LABEL_31;
    if ( qword_140C52A10 > v12 )
    {
      v13 = v12;
      v14 = qword_140C52A18 + 4 * ((unsigned __int64)(qword_140C52A10 - 1) >> 5);
      v15 = (_DWORD *)(qword_140C52A18 + 4 * (v12 >> 5));
      if ( v15 != (_DWORD *)v14 && (*v15 | *((_DWORD *)qword_140015FA0 + (v12 & 0x1F))) == -1 )
      {
        v13 = (v12 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v15; (unsigned __int64)v15 < v14 && *v15 == -1; ++v15 )
          v13 += 32LL;
      }
      while ( v13 < qword_140C52A10 && _bittest64((const signed __int64 *)qword_140C52A18, v13) )
        ++v13;
      v16 = 0LL;
      if ( v15 != (_DWORD *)v14 && (*v15 & ~*((_DWORD *)qword_140015FA0 + (v13 & 0x1F))) == 0 )
      {
        v16 = 32 - (v13 & 0x1F);
        if ( v16 == -1 )
          goto LABEL_25;
        v21 = v15 + 1;
        while ( (unsigned __int64)v21 < v14 && !*v21 )
        {
          ++v21;
          v16 += 32LL;
          if ( v16 == -1 )
            goto LABEL_25;
        }
      }
      for ( k = v16 + v13; k < qword_140C52A10 && !_bittest64((const signed __int64 *)qword_140C52A18, k) && v16 != -1; ++k )
        ++v16;
LABEL_25:
      if ( v16 )
        goto LABEL_26;
      goto LABEL_50;
    }
    v16 = 0LL;
LABEL_50:
    v13 = qword_140C52A10;
LABEL_26:
    v18 = v13 - v12;
    v19 = v7 & 8;
    if ( !v19 )
      goto LABEL_27;
    if ( !v5 )
      break;
    v23 = v12 & 0x1F;
    v24 = v18;
    v25 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v12 >> 5));
    if ( v23 + v18 <= 0x20 )
    {
      if ( v18 == 32 )
      {
        *v25 = -1;
        goto LABEL_64;
      }
      v26 = ((1 << v18) - 1) << v23;
      goto LABEL_63;
    }
    if ( (v12 & 0x1F) != 0 )
    {
      _InterlockedOr(v25, ((1 << (32 - (v12 & 0x1F))) - 1) << v23);
      v24 = v18 - (32 - (unsigned int)(v12 & 0x1F));
      ++v25;
    }
    if ( v24 >= 0x20 )
    {
      v27 = v24 >> 5;
      v24 += -32LL * (v24 >> 5);
      do
      {
        *v25++ = -1;
        --v27;
      }
      while ( v27 );
    }
    if ( v24 )
    {
      v26 = (1 << v24) - 1;
LABEL_63:
      _InterlockedOr(v25, v26);
    }
LABEL_64:
    v4 = v18 + v16 + v12;
LABEL_30:
    v6 = v66;
    v7 = a2;
    if ( v4 >= qword_140C52A10 )
      goto LABEL_31;
  }
  v4 = v12;
  v28 = 3 * v12;
  v16 = 0LL;
  if ( v18 > 0x100 )
    v18 = 256LL;
  v29 = -1LL;
  v30 = 16 * v28 - 0x220000000000LL;
  v31 = v30 + 48 * v18;
  v32 = v30 + 24;
  while ( 1 )
  {
    v33 = (unsigned __int8)MiLockPageInline(v30);
    if ( *(_WORD *)(v32 + 8) || (unsigned __int8)((*(_BYTE *)(v32 + 10) & 7) - 2) > 2u )
      goto LABEL_100;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v32 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
    {
      v34 = v4 & 0x1F;
      LOBYTE(v35) = 1;
      v36 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v4 >> 5));
      if ( v34 + 1 > 0x20 )
      {
        if ( (v4 & 0x1F) != 0 )
        {
          _InterlockedOr(v36++, ((1 << (32 - (v4 & 0x1F))) - 1) << v34);
          v35 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
          if ( v35 >= 0x20 )
          {
            v38 = v35 >> 5;
            v35 += -32LL * (v35 >> 5);
            do
            {
              *v36++ = -1;
              --v38;
            }
            while ( v38 );
          }
          if ( !v35 )
          {
LABEL_100:
            _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
                  v49 = (v53 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v53;
                  if ( v49 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v33);
            if ( v29 != -1 )
              goto LABEL_122;
            goto LABEL_108;
          }
        }
        v37 = (1 << v35) - 1;
      }
      else
      {
        v37 = 1 << v34;
      }
      _InterlockedOr(v36, v37);
      goto LABEL_100;
    }
    if ( (MiUnlinkPageFromListEx(v30, 0) & 3) != 0 )
      break;
    *(_QWORD *)v32 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v30, 0LL, v39) )
    {
      MiPfnReferenceCountIsZero(v30, v4);
      goto LABEL_112;
    }
    v40 = v4 & 0x1F;
    LOBYTE(v41) = 1;
    v42 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v4 >> 5));
    if ( v40 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v42++, ~(((1 << (32 - (v4 & 0x1F))) - 1) << v40));
        v41 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
        if ( v41 >= 0x20 )
        {
          v44 = v41 >> 5;
          v41 += -32LL * (v41 >> 5);
          do
          {
            *v42++ = 0;
            --v44;
          }
          while ( v44 );
        }
        if ( !v41 )
          goto LABEL_91;
      }
      v43 = -1 << v41;
    }
    else
    {
      v43 = ~(1 << v40);
    }
    _InterlockedAnd(v42, v43);
LABEL_91:
    _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
          v49 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(v33);
    if ( v29 == -1 )
      v29 = v4;
LABEL_108:
    v30 += 48LL;
    v32 += 48LL;
    ++v4;
    if ( v30 >= v31 )
    {
      v5 = v70;
      goto LABEL_120;
    }
  }
  MiDiscardTransitionPteEx(v30, 0);
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
        v49 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(v33);
  v5 = 1;
  v70 = 1;
LABEL_120:
  if ( v29 == -1 )
  {
    v3 = v65;
    goto LABEL_30;
  }
LABEL_122:
  v12 = v29;
  v18 = v4 - v29;
  v6 = v66;
LABEL_27:
  v66 = v18 + v6;
  v65 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v12 << 12, v18 << 12);
  v3 = v65;
  if ( v19 )
  {
    v58 = 48 * v12 - 0x220000000000LL;
    v59 = v58 + 48 * v18;
    do
    {
      v60 = (unsigned __int8)MiLockPageInline(v58);
      MiRemoveLockedPageChargeAndDecRef(v58);
      _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v61 = KeGetCurrentIrql();
          if ( v61 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v61 >= 2u )
          {
            v62 = KeGetCurrentPrcb();
            v63 = v62->SchedulerAssist;
            v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
            v49 = (v64 & v63[5]) == 0;
            v63[5] &= v64;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick(v62);
          }
        }
      }
      __writecr8(v60);
      v58 += 48LL;
    }
    while ( v58 < v59 );
    v3 = v65;
  }
  if ( v3 >= 0 )
  {
    v5 = v70;
    v4 = v16 + v12 + v18;
    goto LABEL_30;
  }
LABEL_31:
  *a3 = v66;
  return (unsigned int)v3;
}
