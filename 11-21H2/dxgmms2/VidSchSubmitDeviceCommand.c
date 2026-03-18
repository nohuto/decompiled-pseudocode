/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00019C0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0082DAC (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0083200 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0001950 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001CE8 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchIsDeviceBusy @ 0x1C0001D20 (VidSchIsDeviceBusy.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0001D44 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     VidSchCancelDeviceCommand @ 0x1C001804C (VidSchCancelDeviceCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(_QWORD *a1, __int64 a2)
{
  char v4; // di
  _QWORD *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r14
  _QWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // r11d
  __int64 v13; // rbx
  KIRQL v14; // di
  _QWORD *v15; // r9
  _QWORD *v16; // rdx
  char v18; // r13
  __int64 v19; // r12
  unsigned int v20; // r14d
  int v21; // r15d
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  unsigned int v24; // edx
  bool v25; // cc
  _QWORD *j; // rdx
  __int64 v27; // r8
  int v28; // ebx
  _QWORD *v29; // r8
  unsigned int v30; // edx
  _QWORD *i; // rdx
  char v32; // si
  int v33; // eax
  KSPIN_LOCK *v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // rdx
  _QWORD *v38; // rcx
  bool v39; // r10
  int v40; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v43; // [rsp+B0h] [rbp+30h]

  if ( !a1 || !a2 )
  {
    v28 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or pCallBack, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v28;
  }
  v4 = 1;
  v5 = *(_QWORD **)(a2 + 48);
  v6 = a1[4];
  v43 = v5;
  if ( !*(_DWORD *)(a2 + 40) )
  {
    *(_BYTE *)v5 = 1;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v7 = v5[1];
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
    v10 = 0LL;
    v11 = a1[199];
    if ( !*(_DWORD *)a2 || a1[200] >= v11 || !(unsigned __int8)VidSchIsDeviceBusy(a1) )
      goto LABEL_7;
    v29 = (_QWORD *)a1[9];
    while ( v29 != a1 + 9 )
    {
      v8 = (_QWORD *)v29[19];
      v30 = v10 + 1;
      v25 = (unsigned __int64)v8 <= v29[17];
      v29 = (_QWORD *)*v29;
      if ( v25 )
        v30 = v10;
      v10 = v30;
    }
    v9 = a1 + 11;
    for ( i = (_QWORD *)a1[11]; i != v9; i = (_QWORD *)*i )
    {
      v8 = (_QWORD *)i[4];
      while ( v8 != i + 4 )
      {
        if ( v8[8] > v8[7] || (v32 = 0, v8[11] > v8[10]) )
          v32 = 1;
        v8 = (_QWORD *)*v8;
        v33 = v12 + 1;
        if ( !v32 )
          v33 = v12;
        v12 = v33;
      }
    }
    if ( !(_DWORD)v10 && !v12 )
    {
      a1[200] = v11;
LABEL_7:
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v8, v7, v9, v10) )
      {
LABEL_8:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v4 )
          return 0LL;
        v13 = **(_QWORD **)(v7 + 8);
        v14 = KfRaiseIrql(2u);
        memset(&v42, 0, sizeof(v42));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 44360), &v42);
        v15 = *(_QWORD **)(v13 + 44376);
        v16 = (_QWORD *)(v7 + 200);
        if ( *v15 == v13 + 44368 )
        {
          *v16 = v13 + 44368;
          *(_QWORD *)(v7 + 208) = v15;
          *v15 = v16;
          *(_QWORD *)(v13 + 44376) = v16;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
          KeSetEvent(*(PRKEVENT *)(v13 + 44352), 0, 0);
          KeLowerIrql(v14);
          return 0LL;
        }
LABEL_51:
        __fastfail(3u);
      }
      v34 = (KSPIN_LOCK *)(a1[4] + 1760LL);
      memset(&v42, 0, sizeof(v42));
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v34, &v42);
      v35 = (__int64 *)(v7 + 200);
      v36 = a1[4] + 1792LL;
      v37 = *(__int64 ***)(a1[4] + 1800LL);
      if ( *v37 != (__int64 *)v36 )
        goto LABEL_51;
      *v35 = v36;
      *(_QWORD *)(v7 + 208) = v37;
      *v37 = v35;
      *(_QWORD *)(v36 + 8) = v35;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
LABEL_35:
      *(_BYTE *)v5 = 0;
      v4 = 0;
      goto LABEL_8;
    }
    v28 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v11, v10, v12, 0);
    if ( v28 >= 0 )
      goto LABEL_35;
    goto LABEL_48;
  }
  v18 = 1;
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_25:
    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v5);
    return 0LL;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
  v19 = a1[199];
  v20 = 0;
  v21 = 0;
  if ( a1[200] >= v19 || !(unsigned __int8)VidSchIsDeviceBusy(a1) )
    goto LABEL_36;
  v22 = a1 + 9;
  v23 = (_QWORD *)a1[9];
  while ( v23 != v22 )
  {
    v24 = v20 + 1;
    v25 = v23[19] <= v23[17];
    v23 = (_QWORD *)*v23;
    if ( v25 )
      v24 = v20;
    v20 = v24;
  }
  for ( j = (_QWORD *)a1[11]; j != a1 + 11; j = (_QWORD *)*j )
  {
    v22 = j + 4;
    v38 = (_QWORD *)j[4];
    while ( v38 != v22 )
    {
      v39 = v38[8] > v38[7] || v38[11] > v38[10];
      v38 = (_QWORD *)*v38;
      v40 = v21 + 1;
      if ( !v39 )
        v40 = v21;
      v21 = v40;
    }
  }
  if ( !v20 && !v21 )
  {
    a1[200] = v19;
LABEL_36:
    v5 = v43;
LABEL_24:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v18 )
      return 0LL;
    goto LABEL_25;
  }
  LOBYTE(v22) = 1;
  v18 = 0;
  VidSchCancelDeviceCommand(a1, a2, 0LL, v22);
  v27 = v19;
  v5 = v43;
  v28 = VidSchiAddPendingCommandToSyncPointList(a1, v43, v27, v20, v21, 3);
  if ( v28 >= 0 )
    goto LABEL_24;
LABEL_48:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v28;
}
