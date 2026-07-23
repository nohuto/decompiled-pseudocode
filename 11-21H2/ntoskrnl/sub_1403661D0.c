/*
 * XREFs of sub_1403661D0 @ 0x1403661D0
 * Callers:
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403661D0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _RTL_BALANCED_NODE *v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _RTL_BALANCED_NODE **v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int v13; // ecx
  unsigned __int64 v14; // rax
  _OWORD *Pool2; // rax
  _OWORD *v17; // r14
  KIRQL v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  KIRQL v42; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_RTL_BALANCED_NODE **)(a1 + 488);
  v9 = a1 + 520;
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_5:
    v10 = (unsigned __int64 *)(a1 + 520);
    v42 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v11 = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 520);
    if ( (v11 & 1) != 0 )
    {
      if ( !v12 )
      {
        v12 = 0LL;
        goto LABEL_20;
      }
      v12 ^= (unsigned __int64)v10;
    }
    v13 = v11 & 1;
    while ( v12 )
    {
      if ( *(_QWORD *)(v12 + 24) <= (unsigned __int64)v3 )
      {
        if ( *(_QWORD *)(v12 + 24) >= (unsigned __int64)v3 )
          break;
        v14 = *(_QWORD *)(v12 + 8);
        if ( !v13 || !v14 )
        {
LABEL_16:
          v12 = v14;
          continue;
        }
      }
      else
      {
        v14 = *(_QWORD *)v12;
        if ( !v13 || !v14 )
          goto LABEL_16;
      }
      v12 ^= v14;
    }
LABEL_20:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v42 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          v32 = ~(unsigned __int16)(-1LL << (v42 + 1));
          v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v33 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v42);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      return 0LL;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 48LL, 1850762051LL);
    v17 = Pool2;
    if ( !Pool2 )
    {
      if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
        _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
      return 3221225626LL;
    }
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *((_QWORD *)v17 + 5) = a2;
    *((_QWORD *)v17 + 3) = v3;
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
    v19 = *(_QWORD *)(a1 + 528);
    v20 = *v10;
    v21 = v18;
    if ( (v19 & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_33;
      v20 ^= (unsigned __int64)v10;
    }
    v22 = v19 & 1;
    while ( v20 )
    {
      if ( *(_QWORD *)(v20 + 24) <= (unsigned __int64)v3 )
      {
        if ( *(_QWORD *)(v20 + 24) >= (unsigned __int64)v3 )
          goto LABEL_50;
        v23 = *(_QWORD *)(v20 + 8);
        if ( v22 && v23 )
        {
LABEL_49:
          v20 ^= v23;
          continue;
        }
      }
      else
      {
        v23 = *(_QWORD *)v20;
        if ( v22 && v23 )
          goto LABEL_49;
      }
      v20 = v23;
    }
LABEL_33:
    if ( !*(_QWORD *)(a1 + 568) )
    {
      v4 = sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 360));
      if ( !v4 )
      {
        v2 = -1073741431;
LABEL_50:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = *((_QWORD *)v35 + 4375);
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
              v33 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v37;
              if ( v33 )
                sub_140418E4C(v35);
            }
          }
        }
        __writecr8(v21);
        ObfDereferenceObject(*((PVOID *)v17 + 5));
        ExFreePoolWithTag(v17, 0);
        return v2;
      }
      *(_QWORD *)(a1 + 568) = a1;
      *(_QWORD *)(a1 + 560) = sub_1402298D0;
      v7 = 1;
      *(_QWORD *)(a1 + 544) = 0LL;
    }
    *((_QWORD *)v17 + 4) = *(_QWORD *)(a1 + 536);
    *(_QWORD *)(a1 + 536) = v17 + 2;
    v24 = *(_QWORD *)(a1 + 528);
    v25 = *v10;
    if ( (v24 & 1) != 0 )
    {
      if ( !v25 )
      {
        v25 = 0LL;
        v26 = 0;
        goto LABEL_60;
      }
      v25 ^= (unsigned __int64)v10;
    }
    v26 = 0;
    v27 = v24 & 1;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v25 + 24) <= (unsigned __int64)v3 )
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_58;
            v28 ^= v25;
          }
          if ( !v28 )
          {
LABEL_58:
            v26 = 1;
            break;
          }
        }
        else
        {
          v28 = *(_QWORD *)v25;
          if ( v27 )
          {
            if ( !v28 )
              break;
            v28 ^= v25;
          }
          if ( !v28 )
            break;
        }
        v25 = v28;
      }
    }
LABEL_60:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v25, v26, (PRTL_BALANCED_NODE)v17);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = *((_QWORD *)v39 + 4375);
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v33 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= v41;
          if ( v33 )
            sub_140418E4C(v39);
        }
      }
    }
    __writecr8(v21);
    if ( v7 )
    {
      v4 = 0;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
    }
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    if ( v4 )
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 360));
    return 0LL;
  }
  while ( *v8 != v3 )
  {
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_5;
  }
  return 0LL;
}
