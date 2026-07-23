/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14063F7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405816E4 @ 0x1405816E4 (sub_1405816E4.c)
 *     sub_140640A9C @ 0x140640A9C (sub_140640A9C.c)
 *     sub_140640DE4 @ 0x140640DE4 (sub_140640DE4.c)
 *     sub_140640FF0 @ 0x140640FF0 (sub_140640FF0.c)
 *     sub_140641354 @ 0x140641354 (sub_140641354.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 *     sub_140A02994 @ 0x140A02994 (sub_140A02994.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  ULONG_PTR *v4; // r13
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v7; // rsi
  int v8; // r14d
  __int64 v9; // rdi
  struct _KTHREAD *v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int Count; // edi
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *v17; // r15
  unsigned int v18; // edi
  unsigned __int8 CurrentIrql; // di
  __int64 v20; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  struct _KTHREAD *v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v32; // rax
  __int64 *v33; // rcx
  __int64 *v34; // rdi
  struct _KTHREAD *v35; // rsi
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rdi
  int v39; // r8d
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rdi
  struct _KTHREAD *v43; // rsi
  unsigned int v44; // ecx
  __int64 v45; // rdi
  unsigned int v46; // edx
  int v47; // r8d
  ULONG_PTR *PoolWithTag; // rax
  char v49; // si
  unsigned __int8 v50; // di
  __int64 v51; // r9
  struct _EX_RUNDOWN_REF *v52; // rcx
  struct _EX_RUNDOWN_REF *i; // rdx
  ULONG_PTR v54; // rax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  __int64 v57; // r9
  int v58; // eax
  unsigned __int8 v59; // di
  __int64 v60; // r9
  ULONG_PTR v61; // rcx
  ULONG_PTR **v62; // rax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  ULONG_PTR v67; // rsi
  struct _KTHREAD *v68; // rdi
  unsigned int v69; // r8d
  __int64 v70; // rbx
  unsigned int v71; // ecx
  int v72; // r8d
  struct _KTHREAD *v73; // rdx
  struct _EX_RUNDOWN_REF *Object; // [rsp+40h] [rbp-89h]
  ULONG_PTR v75; // [rsp+48h] [rbp-81h]
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-71h] BYREF
  int Interface; // [rsp+70h] [rbp-59h]
  int v79; // [rsp+74h] [rbp-55h]
  struct _KTHREAD *v80; // [rsp+78h] [rbp-51h]
  struct _EX_RUNDOWN_REF *v81; // [rsp+80h] [rbp-49h]
  _QWORD v82[18]; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v84; // [rsp+140h] [rbp+77h]

  memset(v82, 0, 0x58uLL);
  *a2 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v4 = 0LL;
  if ( !qword_140C114A8 )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v80 = CurrentThread;
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)CurrentThread + 23);
  Object = v7;
  v81 = v7 + 139;
  if ( !sub_140347810(v7 + 139) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&qword_14000FEC8, 88, 1, a1, v82);
  v8 = Interface;
  if ( Interface >= 0 )
  {
    --*((_WORD *)CurrentThread + 243);
    v9 = (__int64)&v7[274];
    v10 = KeGetCurrentThread();
    v11 = 0LL;
    _disable();
    v12 = *((unsigned __int8 *)v10 + 792);
    if ( *((_BYTE *)v10 + 792) || (v12 = sub_14029F6A8(v9, (__int64)v10)) != 0 )
    {
      _BitScanForward((unsigned int *)&v13, v12);
      *((_BYTE *)v10 + 792) = v12 & ~(1 << v13);
      _enable();
      v11 = (__int64)v10 + 96 * v13 + 1696;
      if ( (unsigned __int64)(v9 - qword_140C50630) >= 0x8000000000LL )
        v14 = -1;
      else
        v14 = sub_140287F30(*((_QWORD *)v10 + 23));
      *(_DWORD *)(v11 + 8) = v14;
      *(_QWORD *)v11 = v9 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      sub_14029F120((unsigned __int64 *)v9, v11, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    Count = Object[272].Count;
    if ( !Count )
    {
      v84 = sub_140640A9C();
      Count = v84;
      if ( !v84 )
      {
        v8 = -1073741709;
        v17 = Object;
        goto LABEL_159;
      }
      if ( !(unsigned int)sub_140A02994(Object) )
        Count = Object[272].Count;
    }
    v18 = Count - 1;
    v84 = v18;
    v75 = Object[273].Count;
    if ( v75 )
    {
      v8 = Interface;
    }
    else
    {
      v8 = sub_14042A5E0(v18, 0LL);
      if ( v8 < 0 )
        goto LABEL_119;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Object[275].Count;
      sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&Object[275]);
      if ( Object[273].Count )
        v75 = Object[273].Count;
      else
        Object[273].Count = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v25 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v26 = KeGetCurrentThread();
    v79 = 0;
    v27 = 0LL;
    _disable();
    v28 = *((unsigned __int8 *)v26 + 792);
    if ( *((_BYTE *)v26 + 792) || (v28 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)v26)) != 0 )
    {
      _BitScanForward((unsigned int *)&v29, v28);
      v79 = v29;
      *((_BYTE *)v26 + 792) = v28 & ~(1 << v29);
      _enable();
      v27 = (__int64)v26 + 96 * v29 + 1696;
      if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
        v30 = -1;
      else
        v30 = sub_140287F30(*((_QWORD *)v26 + 23));
      *(_DWORD *)(v27 + 8) = v30;
      *(_QWORD *)v27 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
      sub_14029F120(&qword_140C11530, v27, (__int64)&qword_140C11530);
    if ( v27 )
      *(_BYTE *)(v27 + 18) = 1;
    v32 = (__int64 *)qword_140C11540;
    if ( (__int64 *)qword_140C11540 != &qword_140C11540 )
    {
      do
      {
        v33 = v32;
        v34 = v32;
        P = v32;
        if ( v32[3] == a1 )
          break;
        v32 = (__int64 *)*v32;
      }
      while ( v32 != &qword_140C11540 );
      if ( v34[3] == a1 )
      {
        if ( v33 )
        {
          if ( *((_BYTE *)v34 + 17) )
          {
            v8 = -1073741637;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&qword_140C11530);
            v35 = KeGetCurrentThread();
            if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
              v37 = -1;
            else
              v37 = sub_140287F30(*((_QWORD *)v35 + 23));
            _disable();
            v38 = (__int64)v35 + 1696;
            v16 = 0LL;
            while ( (*(_QWORD *)v38 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(v38 + 18)
                 || (*(_DWORD *)v38 & 1) != 0
                 || *(_DWORD *)(v38 + 8) != v37 )
            {
              v16 = (unsigned int)(v16 + 1);
              v38 += 96LL;
              if ( (unsigned int)v16 >= 6 )
                goto LABEL_74;
            }
            *(_BYTE *)(v38 + 18) = 0;
            if ( !v38 )
            {
LABEL_74:
              if ( (*((_DWORD *)v35 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&qword_140C11530, v37, 0LL);
              goto LABEL_118;
            }
            if ( *(__int64 *)v38 < 0 )
            {
              *(_BYTE *)v38 |= 2u;
              _enable();
              sub_14034EE30(v38);
              _disable();
            }
            v39 = *(_DWORD *)(v38 + 88);
            *(_DWORD *)(v38 + 88) = 0;
            *(_BYTE *)(v38 + 17) = 0;
            *(_QWORD *)v38 = 0LL;
            v40 = *((unsigned __int8 *)v35 + 792) | (1 << *(_BYTE *)(v38 + 16));
LABEL_116:
            *((_BYTE *)v35 + 792) = v40;
            _enable();
            if ( v39 )
              sub_14022B568((ULONG_PTR)v35, (__int64)&qword_140C11530, v39);
            goto LABEL_119;
          }
          if ( *((_BYTE *)v34 + 16) )
          {
            v8 = sub_140640DE4(v75, v34);
            if ( v8 < 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&qword_140C11530);
              v35 = KeGetCurrentThread();
              if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
                v41 = -1;
              else
                v41 = sub_140287F30(*((_QWORD *)v35 + 23));
              _disable();
              v42 = (__int64)v35 + 1696;
              v16 = 0LL;
              while ( (*(_QWORD *)v42 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
                   || !*(_BYTE *)(v42 + 18)
                   || (*(_DWORD *)v42 & 1) != 0
                   || *(_DWORD *)(v42 + 8) != v41 )
              {
                v16 = (unsigned int)(v16 + 1);
                v42 += 96LL;
                if ( (unsigned int)v16 >= 6 )
                  goto LABEL_95;
              }
              *(_BYTE *)(v42 + 18) = 0;
              if ( v42 )
              {
LABEL_113:
                if ( *(__int64 *)v42 < 0 )
                {
                  *(_BYTE *)v42 |= 2u;
                  _enable();
                  sub_14034EE30(v42);
                  _disable();
                }
                v39 = *(_DWORD *)(v42 + 88);
                *(_DWORD *)(v42 + 88) = 0;
                *(_BYTE *)(v42 + 17) = 0;
                *(_QWORD *)v42 = 0LL;
                v16 = *(unsigned __int8 *)(v42 + 16);
                v40 = *((unsigned __int8 *)v35 + 792) | (1 << v16);
                goto LABEL_116;
              }
LABEL_95:
              if ( (*((_DWORD *)v35 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&qword_140C11530, v41, 0LL);
              goto LABEL_118;
            }
            *((_BYTE *)v34 + 16) = 0;
          }
          ++*((_DWORD *)v34 + 8);
          ++*((_DWORD *)v34 + 9);
          goto LABEL_99;
        }
      }
      else
      {
        P = 0LL;
      }
    }
    v8 = sub_140640FF0(a1, v75, v82, &P);
    if ( v8 < 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C11530);
      v35 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
        v36 = -1;
      else
        v36 = sub_140287F30(*((_QWORD *)v35 + 23));
      _disable();
      v42 = (__int64)v35 + 1696;
      v16 = 0LL;
      while ( (*(_QWORD *)v42 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v42 + 18)
           || (*(_DWORD *)v42 & 1) != 0
           || *(_DWORD *)(v42 + 8) != v36 )
      {
        v16 = (unsigned int)(v16 + 1);
        v42 += 96LL;
        if ( (unsigned int)v16 >= 6 )
          goto LABEL_110;
      }
      *(_BYTE *)(v42 + 18) = 0;
      if ( v42 )
        goto LABEL_113;
LABEL_110:
      if ( (*((_DWORD *)v35 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&qword_140C11530, v36, 0LL);
LABEL_118:
      _enable();
      goto LABEL_119;
    }
LABEL_99:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C11530);
    v43 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
      v44 = -1;
    else
      v44 = sub_140287F30(*((_QWORD *)v43 + 23));
    _disable();
    v45 = (__int64)v43 + 1696;
    v46 = 0;
    while ( (*(_QWORD *)v45 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v45 + 18)
         || (*(_DWORD *)v45 & 1) != 0
         || *(_DWORD *)(v45 + 8) != v44 )
    {
      ++v46;
      v45 += 96LL;
      if ( v46 >= 6 )
        goto LABEL_127;
    }
    *(_BYTE *)(v45 + 18) = 0;
    if ( !v45 )
    {
LABEL_127:
      if ( (*((_DWORD *)v43 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v43, (ULONG_PTR)&qword_140C11530, v44, 0LL);
      _enable();
      goto LABEL_135;
    }
    if ( *(__int64 *)v45 < 0 )
    {
      *(_BYTE *)v45 |= 2u;
      _enable();
      sub_14034EE30(v45);
      _disable();
    }
    v47 = *(_DWORD *)(v45 + 88);
    *(_DWORD *)(v45 + 88) = 0;
    *(_BYTE *)(v45 + 17) = 0;
    *(_QWORD *)v45 = 0LL;
    *((_BYTE *)v43 + 792) |= 1 << *(_BYTE *)(v45 + 16);
    _enable();
    if ( v47 )
      sub_14022B568((ULONG_PTR)v43, (__int64)&qword_140C11530, v47);
LABEL_135:
    PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v49 = 0;
      PoolWithTag[2] = (ULONG_PTR)P;
      v50 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v50 <= 0xFu )
      {
        v51 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v51 + 20) |= (-1 << (v50 + 1)) & 0xFFFC;
      }
      v17 = Object;
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Object[275].Count;
      sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&Object[275]);
      v52 = Object + 276;
      for ( i = (struct _EX_RUNDOWN_REF *)Object[276].Count; i != v52; i = (struct _EX_RUNDOWN_REF *)i->Count )
      {
        if ( *(_QWORD *)(i[2].Count + 24) == a1 )
        {
          v49 = 1;
          goto LABEL_147;
        }
      }
      v54 = v52->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v52->Count + 8) != v52 )
        goto LABEL_183;
      *v4 = v54;
      v4[1] = (ULONG_PTR)v52;
      *(_QWORD *)(v54 + 8) = v4;
      v52->Count = (ULONG_PTR)v4;
LABEL_147:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && v50 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = *((_QWORD *)v56 + 4375);
            v58 = ~(unsigned __int16)(-1LL << (v50 + 1));
            v25 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
            *(_DWORD *)(v57 + 20) &= v58;
            if ( v25 )
              sub_140418E4C((__int64)v56);
          }
        }
      }
      __writecr8(v50);
      if ( v49 )
      {
        sub_140348B40((ULONG_PTR)v4);
        v4 = 0LL;
      }
      else
      {
        sub_1405816E4();
        v8 = sub_14042A5E0(v75, *((_QWORD *)P + 23));
        if ( v8 >= 0 )
          v8 = sub_14042A5E0(v75, Object[5].Count & 0xFFFFFFFFFFFFF000uLL);
      }
LABEL_159:
      sub_14042A5E0(v82[1], v16);
      if ( v8 >= 0 )
      {
        *a2 = v84;
LABEL_177:
        v7 = Object;
        goto LABEL_178;
      }
      if ( P )
        sub_140641354(P);
      if ( !v4 )
        goto LABEL_177;
      v59 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v59 <= 0xFu )
      {
        v60 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v60 + 20) |= (-1 << (v59 + 1)) & 0xFFFC;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &v17[275].Count;
      sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&v17[275]);
      v61 = *v4;
      v62 = (ULONG_PTR **)v4[1];
      if ( *(ULONG_PTR **)(*v4 + 8) == v4 && *v62 == v4 )
      {
        *v62 = (ULONG_PTR *)v61;
        *(_QWORD *)(v61 + 8) = v62;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v63 = KeGetCurrentIrql();
            if ( v63 <= 0xFu && v59 <= 0xFu && v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = *((_QWORD *)v64 + 4375);
              v66 = ~(unsigned __int16)(-1LL << (v59 + 1));
              v25 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
              *(_DWORD *)(v65 + 20) &= v66;
              if ( v25 )
                sub_140418E4C((__int64)v64);
            }
          }
        }
        __writecr8(v59);
        sub_140348B40((ULONG_PTR)v4);
        goto LABEL_177;
      }
LABEL_183:
      __fastfail(3u);
    }
    v8 = -1073741670;
LABEL_119:
    v17 = Object;
    goto LABEL_159;
  }
LABEL_178:
  v67 = (ULONG_PTR)&v7[274];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v67);
  v68 = KeGetCurrentThread();
  if ( v67 - qword_140C50630 >= 0x8000000000LL )
    v69 = -1;
  else
    v69 = sub_140287F30(*((_QWORD *)v68 + 23));
  _disable();
  v70 = (__int64)v68 + 1696;
  v71 = 0;
  while ( (*(_QWORD *)v70 & 0x7FFFFFFFFFFFFFFCLL) != (v67 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v70 + 18)
       || (*(_DWORD *)v70 & 1) != 0
       || *(_DWORD *)(v70 + 8) != v69 )
  {
    ++v71;
    v70 += 96LL;
    if ( v71 >= 6 )
      goto LABEL_191;
  }
  *(_BYTE *)(v70 + 18) = 0;
  if ( !v70 )
  {
LABEL_191:
    if ( (*((_DWORD *)v68 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v68, v67, v69, 0LL);
    _enable();
    goto LABEL_199;
  }
  if ( *(__int64 *)v70 < 0 )
  {
    *(_BYTE *)v70 |= 2u;
    _enable();
    sub_14034EE30(v70);
    _disable();
  }
  v72 = *(_DWORD *)(v70 + 88);
  *(_DWORD *)(v70 + 88) = 0;
  *(_BYTE *)(v70 + 17) = 0;
  *(_QWORD *)v70 = 0LL;
  *((_BYTE *)v68 + 792) |= 1 << *(_BYTE *)(v70 + 16);
  _enable();
  if ( v72 )
    sub_14022B568((ULONG_PTR)v68, v67, v72);
LABEL_199:
  v73 = v80;
  v25 = (*((_WORD *)v80 + 243))++ == 0xFFFF;
  if ( v25 && *((struct _KTHREAD **)v73 + 19) != (struct _KTHREAD *)((char *)v73 + 152) )
    KiCheckForKernelApcDelivery();
  sub_1402AD030(v81);
  return (unsigned int)v8;
}
