/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0092ED0
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0002E60 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0093210 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0093640 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, void **a4)
{
  int v4; // ebp
  __int64 *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 *v22; // r9
  __int64 v23; // r10
  int v24; // r11d
  __int64 v25; // r8
  int v26; // edx
  char v27; // al
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // rax
  struct VIDMM_PAGING_QUEUE *v48; // rdx
  int v49; // [rsp+50h] [rbp-78h] BYREF
  __int64 v50; // [rsp+54h] [rbp-74h]
  int v51; // [rsp+5Ch] [rbp-6Ch]
  struct _VIDMM_MULTI_ALLOC *v52; // [rsp+60h] [rbp-68h]
  __int64 v53; // [rsp+68h] [rbp-60h]
  void **v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+7Ch] [rbp-4Ch]
  __int64 v57; // [rsp+84h] [rbp-44h]
  __int64 v58; // [rsp+8Ch] [rbp-3Ch]
  __int64 v59; // [rsp+94h] [rbp-34h]
  int v60; // [rsp+9Ch] [rbp-2Ch]
  __int64 v61; // [rsp+E8h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( (_DWORD)a3 )
  {
    WdLogSingleEntry2(1LL, (unsigned int)a3, 0LL);
    DxgkLogInternalTriageEvent(v29, 0x40000LL);
    return 3221225485LL;
  }
  v8 = *a2;
  v9 = **a2;
  v10 = **(unsigned int **)(v9 + 528);
  if ( (v10 & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 22978LL);
    DxgkLogInternalTriageEvent(v30, 0x40000LL);
    return 3221225485LL;
  }
  v11 = a2[12];
  v12 = *((unsigned __int16 *)v11 + 2);
  if ( (_WORD)v12 )
  {
    v31 = *((unsigned __int16 *)v11 + 2);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, v31);
      DxgkLogInternalTriageEvent(v32, 0x40000LL);
      return 3221225485LL;
    }
    WdLogSingleEntry2(2LL, a2, v31);
    v10 = **(unsigned int **)(v9 + 528);
  }
  if ( (v10 & 8) == 0 )
  {
    v13 = (_QWORD *)v8[1];
    if ( *v13 != PsGetCurrentProcess(v10, v12, a3, a4) && (*(_DWORD *)(v9 + 72) & 0x1000) == 0 )
    {
      WdLogSingleEntry1(1LL, 23013LL);
      DxgkLogInternalTriageEvent(v33, 0x40000LL);
      return 3221225485LL;
    }
  }
  v14 = **(_DWORD **)(v9 + 528);
  if ( (v14 & 0x20000000) != 0 && (v14 & 0x40000000) == 0 )
  {
    v34 = *((_QWORD *)this + 3);
    v35 = *(_DWORD *)(v34 + 436);
    if ( (v35 & 0x10) == 0 && (v35 & 8) == 0 && (*(_DWORD *)(v34 + 2156) & 0x80u) == 0 && v8 != *(__int64 **)(v9 + 88) )
    {
      WdLogSingleEntry1(1LL, 23029LL);
      DxgkLogInternalTriageEvent(v36, 0x40000LL);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 496, 0LL);
  if ( *(_DWORD *)(v9 + 360) && !*(_BYTE *)(v9 + 80) )
  {
    WdLogSingleEntry1(1LL, 23040LL);
LABEL_65:
    DxgkLogInternalTriageEvent(v37, 0x40000LL);
    ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v8 + 19) )
  {
    v15 = *(_DWORD *)(v9 + 68);
    if ( (*(_DWORD *)(v9 + 72) & 0x80u) == 0 )
    {
      if ( (v15 & 0x80u) == 0 )
      {
        WdLogSingleEntry1(1LL, 23091LL);
        goto LABEL_65;
      }
    }
    else if ( (**(_DWORD **)(v9 + 528) & 4) != 0 )
    {
      if ( (v15 & 0x40) == 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0 )
      {
        WdLogSingleEntry1(1LL, 23066LL);
        goto LABEL_65;
      }
    }
    else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
    {
      v16 = *(_DWORD *)(v9 + 68);
      if ( (v16 & 0x1A0000) == 0
        && (*(_BYTE *)(1584LL * (v16 & 0x3F) + *((_QWORD *)this + 5028) + 437) & 0x40) != 0
        && (v15 & 0x40) == 0
        && (v16 & 0x100) == 0 )
      {
        WdLogSingleEntry1(1LL, 23076LL);
        goto LABEL_65;
      }
    }
  }
  if ( v8[3] )
  {
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v9 + 320) == KeGetCurrentThread() )
    {
      v38 = *(_DWORD *)(v9 + 328);
      if ( v38 <= 0 )
      {
        WdLogSingleEntry1(1LL, 472LL);
        DxgkLogInternalTriageEvent(v39, 262146LL);
        v38 = *(_DWORD *)(v9 + 328);
      }
      v19 = v38 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 304, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v40 = *(_DWORD *)(v9 + 332);
          if ( v40 != -1 && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventBlockThread, v18, v40);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 312));
        ExAcquirePushLockExclusiveEx(v9 + 304, 0LL);
      }
      if ( *(_QWORD *)(v9 + 320) )
      {
        WdLogSingleEntry1(1LL, 496LL);
        DxgkLogInternalTriageEvent(v41, 262146LL);
      }
      if ( *(_DWORD *)(v9 + 328) )
      {
        WdLogSingleEntry1(1LL, 497LL);
        DxgkLogInternalTriageEvent(v42, 262146LL);
      }
      *(_QWORD *)(v9 + 320) = KeGetCurrentThread();
      v19 = 1;
    }
    *(_DWORD *)(v9 + 328) = v19;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8[1] + 24) + 152LL))(*(_QWORD *)(v8[1] + 24), v8[3]);
    if ( *(struct _KTHREAD **)(v9 + 320) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v9 + 296, 0LL, 0LL);
    v20 = *(_DWORD *)(v9 + 328);
    if ( v20 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v43, 262146LL);
      v20 = *(_DWORD *)(v9 + 328);
    }
    v21 = v20 - 1;
    *(_DWORD *)(v9 + 328) = v21;
    if ( !v21 )
    {
      *(_QWORD *)(v9 + 320) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 304, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v22 = *a2;
  v61 = 0LL;
  v23 = *v22;
  if ( *((_DWORD *)v22 + 19) )
    goto LABEL_33;
  v24 = *(_DWORD *)(v23 + 72);
  v25 = *(_QWORD *)(v23 + 120);
  LODWORD(v61) = 1;
  if ( (v24 & 0x80u) == 0 )
  {
    LODWORD(v61) = 5;
    goto LABEL_33;
  }
  if ( !v25 )
    goto LABEL_33;
  if ( (*((_DWORD *)this + 1764) & 0x20) != 0 )
  {
LABEL_86:
    ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
    KeLeaveCriticalRegion();
    v45 = *(_DWORD *)(v9 + 68) & 0x3F;
    v50 = 0LL;
    v46 = 176 * v45;
    v47 = a2[1];
    v51 = 0;
    v53 = 0LL;
    v56 = 0LL;
    v48 = (struct VIDMM_PAGING_QUEUE *)(v47[10] + v46);
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0;
    v49 = 208;
    v52 = (struct _VIDMM_MULTI_ALLOC *)a2;
    v54 = a4;
    v55 = 0;
    v4 = VIDMM_GLOBAL::QueueDeferredCommand(this, v48, (struct _VIDMM_DEFERRED_COMMAND *)&v49, 1, 0LL);
    goto LABEL_36;
  }
  v26 = *(_DWORD *)(v25 + 80);
  if ( (v26 & 0x1001) != 0 )
    goto LABEL_33;
  if ( (**(_DWORD **)(v23 + 528) & 4) != 0 && !*(_BYTE *)(v25 + 474) || (v24 & 0x10000) != 0 )
    goto LABEL_86;
  if ( (v26 & 4) == 0 )
  {
    if ( (v26 & 0x2000) == 0 )
      goto LABEL_80;
    v44 = *(_QWORD *)(v23 + 88);
    if ( !v44 || (*(_BYTE *)(v44 + 32) & 1) == 0 )
      goto LABEL_80;
    LODWORD(v61) = 0;
LABEL_33:
    v4 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v61, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
    v27 = BYTE4(v61);
    goto LABEL_34;
  }
  if ( (v22[4] & 1) != 0 )
    goto LABEL_33;
  LODWORD(v61) = 3;
  if ( !*(_QWORD *)(v23 + 240) )
    goto LABEL_33;
LABEL_80:
  v27 = 1;
LABEL_34:
  if ( v27 )
    goto LABEL_86;
  ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
  KeLeaveCriticalRegion();
LABEL_36:
  if ( v4 >= 0 && (*((_BYTE *)this + 40936) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v9 + 68) & 0x3F) + 749,
      (const unsigned __int64 *)(v9 + 160),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v9 + 68) & 0x3F) + 685,
      *(_DWORD *)(v9 + 68) & 0x3F);
  return (unsigned int)v4;
}
