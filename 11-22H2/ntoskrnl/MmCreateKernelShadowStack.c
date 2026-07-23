/*
 * XREFs of MmCreateKernelShadowStack @ 0x14064519C
 * Callers:
 *     KeUserModeCallback @ 0x14076ED90 (KeUserModeCallback.c)
 *     KiCreateKernelShadowStack @ 0x140974410 (KiCreateKernelShadowStack.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x1404287E0 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x1406450A0 (MiUpdateKernelShadowStackOwnerData.c)
 *     VslAllocateKernelShadowStack @ 0x14094180C (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MmCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // ebx
  ULONG_PTR v8; // r12
  unsigned __int16 *v9; // r8
  _SLIST_HEADER *v11; // rdi
  struct _KPRCB *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  PSLIST_ENTRY v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebx
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rbp
  int v21; // edx
  BOOL v22; // r14d
  unsigned __int64 v23; // r8
  struct _KPRCB *v24; // r9
  __int64 v25; // rdx
  bool v26; // zf
  signed __int32 v27; // eax
  int KernelShadowStack; // eax
  unsigned __int64 v29; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v6 = a4;
  v8 = a2;
  v9 = MiSystemPartition;
  if ( a1 )
    v11 = *(_SLIST_HEADER **)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  else
    v11 = (_SLIST_HEADER *)MiSystemPartition;
  if ( a2 > 2 )
    goto LABEL_21;
  if ( (a3 & 0x10) == 0
    || a2 != 2
    || (v12 = KeGetCurrentPrcb(), v12->SchedulerSubNode->Affinity.Reserved[0] != a4)
    || !v12->CachedShadowStack )
  {
    v13 = a6;
LABEL_13:
    v15 = v11[1].Alignment + 25408LL * a4 + 32 * (v8 + 728);
    if ( FirstEntrySList((PSLIST_HEADER)v15) )
    {
      v16 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v15);
      if ( v16 )
      {
        if ( !FirstEntrySList((PSLIST_HEADER)v15) && !*(_BYTE *)(v15 + 28) )
          *(_BYTE *)(v15 + 28) = 1;
        *v13 = v16[1].Next;
        RtlpInterlockedPushEntrySList(v11 + 29, v16);
        goto LABEL_19;
      }
    }
    ++*(_DWORD *)(v15 + 20);
    v6 = v36;
LABEL_21:
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)v11, 1uLL, (a3 >> 1) & 1) )
      return (unsigned int)-1073741523;
    if ( !(unsigned int)MiChargeResident(v11, 1uLL, 0LL) )
    {
      v18 = -1073741670;
      goto LABEL_64;
    }
    v19 = MiReservePtes((__int64)&unk_140C68560, 3u);
    v20 = v19;
    if ( !v19 )
    {
      v18 = -1073741670;
      goto LABEL_51;
    }
    if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v11, v19 + 8, 1LL, a1, v6, a3, &v35) )
    {
      v18 = -1073741670;
      MiReleasePtes((__int64)&unk_140C68560, (__int64 *)v20, 3u);
LABEL_51:
      v29 = 1LL;
      if ( v11 == (_SLIST_HEADER *)MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v32 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v26 = (_DWORD)CachedResidentAvailable == v32;
              LODWORD(CachedResidentAvailable) = v32;
              if ( v26 )
                goto LABEL_64;
            }
            while ( v32 != -1 && (unsigned __int64)(v32 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v29 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
      }
      if ( v29 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1080], v29);
LABEL_64:
      MiReturnCommit((__int64)v11, 1LL);
      return v18;
    }
    v22 = MiCheckSlabPfnBitmap(48 * v35 - 0x220000000000LL, 1LL, 1) != 0;
    if ( !v22 )
    {
LABEL_41:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1118], 1uLL);
      if ( (_BYTE)KiKernelCetEnabled )
      {
        KernelShadowStack = VslAllocateKernelShadowStack(
                              (__int64)(v20 << 25) >> 16,
                              v21,
                              v8,
                              (unsigned int)&v35,
                              BugCheckParameter4,
                              (__int64)a6);
        v18 = KernelShadowStack;
        if ( KernelShadowStack >= 0 )
        {
          v18 = 0;
          *a5 = (__int64)((v20 << 25) + 805306368) >> 16;
          return v18;
        }
        if ( KernelShadowStack == -1073741800
          || KernelShadowStack == -1073741811
          || KernelShadowStack == -1073741790
          || KernelShadowStack == -1073741757 )
        {
          KeBugCheckEx(0x1Au, 0x3500uLL, v20, v8, KernelShadowStack);
        }
      }
      else
      {
        v18 = -1073741637;
      }
      MiDeleteKernelShadowStack((__int64 *)v20, v21, 0LL);
      return v18;
    }
    v23 = v22;
    if ( v11 == (_SLIST_HEADER *)MiSystemPartition )
    {
      v24 = KeGetCurrentPrcb();
      v25 = (int)v24->CachedResidentAvailable;
      if ( (_DWORD)v25 != -1 )
      {
        if ( (unsigned __int64)v22 + v25 <= 0x100 )
        {
          do
          {
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)&v24->CachedResidentAvailable, v22 + v25, v25);
            v26 = (_DWORD)v25 == v27;
            LODWORD(v25) = v27;
            if ( v26 )
              goto LABEL_40;
          }
          while ( v27 != -1 && (unsigned __int64)v22 + v27 <= 0x100 );
        }
        if ( (int)v25 > 192
          && (_DWORD)v25 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v24->CachedResidentAvailable,
                              192,
                              v25) )
        {
          v23 = (int)v25 - 192 + (unsigned __int64)v22;
        }
      }
    }
    if ( v23 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1080], v23);
LABEL_40:
    MiReturnCommit((__int64)v11, v22);
    goto LABEL_41;
  }
  v13 = a6;
  if ( v11 != (_SLIST_HEADER *)MiSystemPartition )
    goto LABEL_13;
  v14 = _InterlockedExchange64((volatile __int64 *)&v12->CachedShadowStack, 0LL);
  *v13 = v14;
  if ( !v14 )
    goto LABEL_13;
LABEL_19:
  v17 = (*v13 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  *a5 = v17;
  MiUpdateKernelShadowStackOwnerData(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000018LL, (__int64)v12, (__int64)v9, a1);
  return 0;
}
