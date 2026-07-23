/*
 * XREFs of sub_1403B1270 @ 0x1403B1270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_1403A39B8 @ 0x1403A39B8 (sub_1403A39B8.c)
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 *     sub_1403B1794 @ 0x1403B1794 (sub_1403B1794.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall sub_1403B1270(_SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r15
  volatile signed __int32 *Next; // rcx
  LARGE_INTEGER *Timeout; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 OldIrql; // rsi
  int v11; // ecx
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  __int64 v16; // r10
  char v17; // si
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // rcx
  int v21; // esi
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdx
  int v26; // edx
  __int128 v27; // kr00_16
  char v28; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  __int64 v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __m256i v42; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v43; // [rsp+A0h] [rbp+20h] BYREF

  v43.QuadPart = 0LL;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v41 = 0LL;
  *(_OWORD *)&v42.m256i_u64[2] = 0LL;
  *(_OWORD *)v42.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( a1 )
  {
    Next = (volatile signed __int32 *)a1->Next;
    if ( Next )
      sub_14035AD70(Next, 0LL, 1LL, a4, 0);
    sub_140203D88((__int64)&unk_140CF7340, a1, a3);
    v43.QuadPart = -100000000LL;
    Timeout = &v43;
    v42.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v42.m256i_i8[24] = 1;
  }
  ExAcquireFastMutex(&stru_140C1FB00);
  --dword_140C1FB40;
  ++dword_140C1FAC4;
  if ( *(__int64 **)qword_140C1FB58 != &qword_140C1FB50 )
LABEL_43:
    __fastfail(3u);
  *(_QWORD *)&v41 = &qword_140C1FB50;
  *((_QWORD *)&v41 + 1) = qword_140C1FB58;
  *(_QWORD *)qword_140C1FB58 = &v41;
  qword_140C1FB58 = (__int64)&v41;
LABEL_7:
  KeReleaseGuardedMutex(&stru_140C1FB00);
  do
  {
    if ( KeWaitForSingleObject(&byte_140C22780, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
      v8 = qword_140C22760;
      v9 = *(_QWORD *)qword_140C22760;
      if ( *(__int64 **)(qword_140C22760 + 8) != &qword_140C22760 || *(_QWORD *)(v9 + 8) != qword_140C22760 )
        goto LABEL_43;
      qword_140C22760 = *(_QWORD *)qword_140C22760;
      *(_QWORD *)(v9 + 8) = &qword_140C22760;
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
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v34 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      ExAcquireFastMutex(&stru_140C1FB00);
      v11 = ++dword_140C1FB38;
      if ( byte_140C1FB3C
        && v11 == dword_140C1FAC4
        && (unsigned int)dword_140C1FAC4 < 0xF
        && !dword_140C1FB40
        && !byte_140C1FB3D )
      {
        byte_140C1FB3D = 1;
        KeSetEvent(&stru_140C1FAE0, 0, 0);
      }
      KeReleaseGuardedMutex(&stru_140C1FB00);
      v12 = v8 - 168;
      v13 = *(_QWORD *)(v8 - 168 + 184);
      v14 = v8 - 168;
      v15 = *(_DWORD **)(v13 + 40);
      sub_1403A39B8(v14, *(_BYTE *)(v13 + 1), (__int64)v15);
      v16 = *(_QWORD *)(v12 + 72LL * *(char *)(v12 + 66) + 200);
      if ( *(_BYTE *)(v16 + 184) == 2 && *(_DWORD *)(v16 + 188) == 1 && *(_DWORD **)(v16 + 32) == v15 )
      {
        v18 = *(_QWORD *)(v16 + 24);
        v19 = *(_QWORD *)(v16 + 200);
        v20 = v18 ? *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL) : 0LL;
        v21 = *(_DWORD *)(v20 + 156);
        *(_DWORD *)(v20 + 156) = *(_DWORD *)(v16 + 192);
        if ( v19 )
        {
          v22 = sub_1403B1794(v19);
          *(_DWORD *)(v23 + 280) = v22;
          *(_BYTE *)(v23 + 208) = 0;
          if ( v22 == 1 )
            *(_BYTE *)(v23 + 208) = 1;
          v25 = *(unsigned int *)(v23 + 192);
          *(_BYTE *)(v23 + 209) = (_DWORD)v25 != v21;
          if ( (_DWORD)v25 != v21 )
          {
            if ( (_DWORD)v25 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v24 + 32), 2u);
              v25 = *(unsigned int *)(v23 + 192);
            }
            sub_1403B1624(*(_QWORD *)(v24 + 56), v25, 0LL, *(unsigned int *)(v23 + 280));
          }
        }
      }
      v17 = 0;
      v42.m256i_i64[1] = v12;
      v42.m256i_i64[2] = (__int64)v15;
      if ( (v15[12] & 0x2000) == 0 && v12 == qword_140C227A8 )
      {
        v4 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v4 <= 0xFu )
        {
          v35 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v35 + 20) |= (-1 << (v4 + 1)) & 4;
        }
        v17 = 1;
      }
      sub_14042A5E0(v15, v12);
      if ( v17 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v4 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = *((_QWORD *)v37 + 4375);
              v39 = ~(unsigned __int16)(-1LL << (v4 + 1));
              v34 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
              *(_DWORD *)(v38 + 20) &= v39;
              if ( v34 )
                sub_140418E4C(v37);
            }
          }
        }
        __writecr8(v4);
      }
      if ( *((_DWORD *)KeGetCurrentThread() + 121) )
        KeBugCheckEx(0xA0u, 0x901uLL, (ULONG_PTR)v15, v12, *((unsigned int *)KeGetCurrentThread() + 121));
      *(_OWORD *)&v42.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag(v15, 0x72496F50u);
      ExAcquireFastMutex(&stru_140C1FB00);
      --dword_140C1FB38;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&stru_140C1FB00);
    if ( byte_140C1FB3C && ((v26 = dword_140C1FAC4 - 1, dword_140C1FB38 != dword_140C1FAC4 - 1) || dword_140C1FB40) )
    {
      v27 = v41;
      v28 = 0;
      if ( *(__int128 **)(v41 + 8) != &v41 || **((__int128 ***)&v41 + 1) != &v41 )
        goto LABEL_43;
      **((_QWORD **)&v41 + 1) = v41;
      *(_QWORD *)(v27 + 8) = *((_QWORD *)&v27 + 1);
      dword_140C1FAC4 = v26;
    }
    else
    {
      v28 = 1;
    }
    KeReleaseGuardedMutex(&stru_140C1FB00);
  }
  while ( v28 );
  return PsTerminateSystemThread(0);
}
