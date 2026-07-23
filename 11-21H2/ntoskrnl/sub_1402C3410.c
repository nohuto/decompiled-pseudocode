/*
 * XREFs of sub_1402C3410 @ 0x1402C3410
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_14098194C @ 0x14098194C (sub_14098194C.c)
 * Callees:
 *     sub_140232AD0 @ 0x140232AD0 (sub_140232AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403CF698 @ 0x1403CF698 (sub_1403CF698.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B3340 @ 0x1405B3340 (sub_1405B3340.c)
 */

__int64 __fastcall sub_1402C3410(ULONG_PTR a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 i; // r10
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  bool v14; // zf
  PMDL v15; // rcx
  PMDL v16; // rcx
  __int64 v17; // rbx
  struct _KPRCB *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  struct _KPRCB *v24; // r8
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  unsigned int v30; // edx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  int v33; // ebx
  unsigned __int64 v34; // rdx
  PVOID MappedSystemVa; // r8
  unsigned __int64 v36; // r15
  PVOID v37; // rdx
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v40; // r9
  int v41; // eax
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  __int64 v45; // r9
  int v46; // eax
  unsigned __int64 v47; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int128 v49; // [rsp+58h] [rbp-50h]
  __int64 v50; // [rsp+68h] [rbp-40h]
  int v51; // [rsp+B8h] [rbp+10h] BYREF
  int v52; // [rsp+C0h] [rbp+18h]
  int v53; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  v4 = -1LL;
  v47 = -1LL;
  v5 = a2;
  v52 = a3 & 1;
  v53 = v52 + 6;
  if ( a2 )
  {
    for ( i = 2LL; ; i = 2LL )
    {
      if ( (a1 & 0xF) == 0 )
      {
        v33 = (qword_140D068D8 & 0x2000000000LL) == 0;
        while ( 1 )
        {
          v29 = qword_14001C780[v33];
          if ( ((v29 - 1) & a1) == 0 && v5 >= v29 && (unsigned int)sub_140232AD0(a1, v33) )
            break;
          if ( (unsigned int)++v33 >= 3 )
            goto LABEL_4;
        }
        v3 += sub_14028CA70(a1, v30, v31);
        a1 += v29;
        v5 -= v29;
        goto LABEL_30;
      }
LABEL_4:
      if ( v4 != (a1 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v47 = a1 & 0xFFFFFFFFFFFFFE00uLL;
        sub_1402C38D0(
          *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
          a1 & 0xFFFFFE00,
          512,
          0,
          0);
        i = 2LL;
      }
      v8 = 1LL;
      v9 = 48 * a1;
      v10 = 48 * a1 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(i);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v51 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v51);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      v12 = *(_QWORD *)(v10 + 40);
      v13 = *(_QWORD *)(qword_140C51F48 + 8 * ((v12 >> 43) & 0x3FF));
      if ( !byte_140C58C66
        || !_bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * (v9 >> 4)) >> 9) )
      {
        v49 = 0LL;
        v50 = 0LL;
      }
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      v14 = *(_WORD *)(v10 + 32) == 2;
      *(_WORD *)(v10 + 32) -= 2;
      if ( v14 )
      {
        if ( byte_140C58C66
          && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * (v9 >> 4)) >> 9) )
        {
LABEL_63:
          v8 = 0LL;
        }
        else
        {
          v15 = MemoryDescriptorList;
          if ( MemoryDescriptorList )
          {
            if ( ((v12 >> 60) & 7) == 1 )
            {
              v34 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4);
              if ( MemoryDescriptorList )
              {
                do
                {
                  MappedSystemVa = v15->MappedSystemVa;
                  if ( v34 >= (unsigned __int64)MappedSystemVa )
                  {
                    if ( (PVOID)(v34 - (unsigned __int64)MappedSystemVa) < v15->StartVa )
                      goto LABEL_63;
                    v15 = *(PMDL *)&v15->Size;
                  }
                  else
                  {
                    v15 = v15->Next;
                  }
                }
                while ( v15 );
              }
            }
          }
        }
        if ( v52 )
        {
          *(_BYTE *)(v10 + 34) &= ~0x10u;
        }
        else
        {
          v16 = MemoryDescriptorList;
          if ( MemoryDescriptorList )
          {
            if ( ((v12 >> 60) & 7) == 1 )
            {
              v36 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4);
              if ( MemoryDescriptorList )
              {
                do
                {
                  v37 = v16->MappedSystemVa;
                  if ( v36 >= (unsigned __int64)v37 )
                  {
                    if ( (PVOID)(v36 - (unsigned __int64)v37) < v16->StartVa )
                      break;
                    v16 = *(PMDL *)&v16->Size;
                  }
                  else
                  {
                    v16 = v16->Next;
                  }
                }
                while ( v16 );
              }
            }
          }
        }
        sub_1402C6EB0(a1);
      }
      else
      {
        *(_BYTE *)(v10 + 34) |= 7u;
        *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
        v8 = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v40 = *((_QWORD *)CurrentPrcb + 4375);
            v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
            *(_DWORD *)(v40 + 20) &= v41;
            if ( v14 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !v8 )
        goto LABEL_29;
      v17 = v8;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_QWORD *)(v13 + 16056) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 16040), &LockHandle);
        v17 = sub_1405B3340(v13, v8);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v43 = KeGetCurrentIrql();
            if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
            {
              v44 = KeGetCurrentPrcb();
              v45 = *((_QWORD *)v44 + 4375);
              v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
              *(_DWORD *)(v45 + 20) &= v46;
              if ( v14 )
                sub_140418E4C(v44);
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v17 )
          goto LABEL_25;
      }
      if ( (ULONG_PTR *)v13 != &StartContext )
        break;
      v18 = KeGetCurrentPrcb();
      _m_prefetchw((char *)v18 + 34456);
      v19 = *((unsigned int *)v18 + 8614);
      if ( (unsigned __int64)(v17 + v19) > 0x100 )
        break;
      while ( 1 )
      {
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)v18 + 8614, v19 + v17, v19);
        if ( v32 == v19 )
          break;
        v19 = v32;
        if ( (unsigned __int64)(v32 + v17) > 0x100 )
          goto LABEL_23;
      }
      v23 = v8;
LABEL_26:
      v24 = KeGetCurrentPrcb();
      v25 = *((int *)v24 + 8615);
      if ( (_DWORD)v25 == -1 )
      {
        v23 = v8;
LABEL_46:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 16960), v23);
        goto LABEL_29;
      }
      if ( (unsigned __int64)(v8 + v25) <= 0x100 )
      {
        do
        {
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, v25 + v8, v25);
          v14 = (_DWORD)v25 == v26;
          LODWORD(v25) = v26;
          if ( v14 )
            goto LABEL_29;
        }
        while ( v26 != -1 && (unsigned __int64)(v8 + v26) <= 0x100 );
      }
      if ( (int)v25 > 192 && (_DWORD)v25 == _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, 192, v25) )
        v23 = v8 + (int)v25 - 192;
      if ( v23 )
        goto LABEL_46;
LABEL_29:
      v3 += v8;
      ++a1;
      v4 = v47;
      --v5;
LABEL_30:
      if ( !v5 )
        return v3;
    }
LABEL_23:
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 17256), -v17);
    v21 = *(_QWORD *)(v13 + 16032);
    if ( v20 >= v21 && v20 - v17 < v21 || (v22 = *(_QWORD *)(v13 + 16024), v20 >= v22) && v20 - v17 < v22 )
      sub_1403CF698(v13, 0LL);
LABEL_25:
    v23 = v8;
    if ( (ULONG_PTR *)v13 != &StartContext )
      goto LABEL_46;
    goto LABEL_26;
  }
  return v3;
}
