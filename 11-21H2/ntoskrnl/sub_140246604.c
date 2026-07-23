/*
 * XREFs of sub_140246604 @ 0x140246604
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     sub_140252C54 @ 0x140252C54 (sub_140252C54.c)
 *     sub_140252E8C @ 0x140252E8C (sub_140252E8C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406C3CA8 @ 0x1406C3CA8 (sub_1406C3CA8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140246604(unsigned int *a1, int *a2, __int64 a3)
{
  __int64 v4; // r12
  _DWORD *v5; // r15
  unsigned int v6; // r14d
  int v7; // r13d
  PVOID *PoolWithTag; // rdi
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // edx
  int v12; // r9d
  void **v13; // rcx
  void *v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  PVOID *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  char v21; // r12
  __int64 v22; // rdx
  unsigned int v23; // r8d
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  bool v28; // r14
  unsigned __int64 OldIrql; // r15
  PVOID *v30; // rbx
  int v32; // eax
  unsigned int v33; // ebx
  int v34; // r14d
  PVOID *v35; // r12
  __int64 v36; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v39; // r9
  int v40; // eax
  bool v41; // zf
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v43; // [rsp+44h] [rbp-BCh]
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  int v45; // [rsp+4Ch] [rbp-B4h]
  int v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+54h] [rbp-ACh]
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v52; // [rsp+70h] [rbp-90h]
  int *v53; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE P[256]; // [rsp+A0h] [rbp-60h] BYREF

  v50 = 0LL;
  v42 = 0;
  v4 = *a1;
  v5 = a1;
  v6 = *a2;
  v7 = 1;
  v53 = a2;
  v43 = -1073741811;
  v52 = a1 + 2;
  if ( (unsigned int)v4 > 0x10 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16 * v4, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (PVOID *)P;
  }
  KeWaitForSingleObject(&::Object, Executive, 0, 0, 0LL);
  v9 = 0;
  LOBYTE(v48) = 0;
  v10 = 0LL;
  v46 = 0;
  v44 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v11) = 0;
  v49 = v7;
  v12 = 0;
  v45 = v11;
  v47 = 0;
  if ( (_DWORD)v4 )
  {
    v13 = (void **)(v5 + 2);
    while ( 1 )
    {
      v14 = *v13;
      Object = 0LL;
      v43 = ObReferenceObjectByHandle(v14, 4u, qword_140D06B20, 1, &Object, 0LL);
      if ( v43 < 0 )
        break;
      v15 = Object;
      v16 = 0;
      if ( (_DWORD)v10 )
      {
        v17 = PoolWithTag;
        while ( Object != *v17 )
        {
          ++v16;
          v17 += 2;
          if ( v16 >= (unsigned int)v10 )
            goto LABEL_10;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        LOBYTE(v11) = v45;
        v9 = v46;
        v12 = v47;
      }
      else
      {
LABEL_10:
        v11 = (unsigned __int8)v45;
        if ( *((_QWORD *)Object + 9) )
          v11 = 1;
        v18 = 2LL * (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v45 = v11;
        PoolWithTag[v18] = Object;
        if ( *((_QWORD *)v15 + 12) )
        {
          v7 = (unsigned __int8)v7;
          if ( v15[29] )
            v7 = 1;
          v49 = v7;
        }
        if ( *((_QWORD *)v15 + 16) )
        {
          v32 = (unsigned __int8)v48;
          if ( v15[37] )
            v32 = 1;
          v48 = v32;
        }
        v9 = ((v15[29] + 7) & 0xFFFFFFF8) + v46;
        v19 = v15[37] + 7;
        v46 = v9;
        v12 = (v19 & 0xFFFFFFF8) + v47;
        v47 = v12;
      }
      v13 = (void **)(v52 + 2);
      ++v44;
      v52 += 2;
      if ( v44 >= (unsigned int)v4 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v20 = v12 + v9;
    v44 = v12 + v9;
    if ( (_BYTE)v11 == 1 && (_DWORD)v10 )
    {
      v35 = PoolWithTag;
      v36 = (unsigned int)v10;
      do
      {
        if ( *((_QWORD *)*v35 + 9) )
          sub_140252C54();
        v35 += 2;
        --v36;
      }
      while ( v36 );
      v20 = v44;
      LOBYTE(v7) = v49;
    }
    v21 = v48;
    if ( (unsigned __int8)v48 | (unsigned __int8)v7 )
    {
      if ( v20 > v6 )
      {
        v34 = 56;
        v5[11] = 32;
        *v5 = 56;
        v5[12] = v20;
      }
      else
      {
        v33 = v6;
        if ( (_BYTE)v7 )
        {
          sub_1406C3CA8((_DWORD)PoolWithTag, v10, (_DWORD)v5, v12, (__int64)&v42, (__int64)&v50, 1);
          LODWORD(v5) = v42 + (_DWORD)v5;
          v33 = v6 - v42;
        }
        if ( v21 )
        {
          sub_1406C3CA8((_DWORD)PoolWithTag, v10, (_DWORD)v5, v12, (__int64)&v42, (__int64)&v50, 0);
          v33 -= v42;
        }
        if ( v50 )
          *(_DWORD *)(v50 + 12) = 0;
        v34 = v6 - v33;
      }
      *v53 = v34;
    }
    else
    {
      v22 = a3 + 120;
      v23 = 0;
      *(_QWORD *)&LockHandle.OldIrql = 0LL;
      *(_QWORD *)(a3 + 128) = a3 + 120;
      *(_QWORD *)(a3 + 120) = a3 + 120;
      for ( LockHandle.LockQueue = 0LL; v23 < (unsigned int)v10; *(_QWORD *)(a3 + 128) = v25 )
      {
        v24 = PoolWithTag[2 * v23];
        v24[9] = a3;
        v25 = v24 + 10;
        v26 = *(_QWORD **)(a3 + 128);
        if ( *v26 != v22 )
          __fastfail(3u);
        *v25 = v22;
        ++v23;
        v25[1] = v26;
        *v26 = v25;
      }
      v27 = *(_QWORD *)(a3 + 184);
      v43 = 259;
      v28 = 0;
      *(_BYTE *)(v27 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&qword_140C16628, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)&sub_140252E20);
      if ( *(_BYTE *)(a3 + 68) )
      {
        sub_140252E8C(a3);
        v43 = -1073741536;
        v28 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v39 = *((_QWORD *)CurrentPrcb + 4375);
            v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v41 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
            *(_DWORD *)(v39 + 20) &= v40;
            if ( v41 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v28 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        IofCompleteRequest((PIRP)a3, 0);
      }
      *v53 = 0;
    }
  }
  KeReleaseMutex(&::Object, 0);
  if ( (_DWORD)v10 )
  {
    v30 = PoolWithTag;
    do
    {
      ObfDereferenceObjectWithTag(*v30, 0x746C6644u);
      v30 += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( PoolWithTag != (PVOID *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v43;
}
