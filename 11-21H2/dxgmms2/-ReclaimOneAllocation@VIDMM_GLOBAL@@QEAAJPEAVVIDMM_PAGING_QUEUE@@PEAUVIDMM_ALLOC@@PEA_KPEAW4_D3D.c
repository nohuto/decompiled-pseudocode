/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A493C (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C002EC0C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C002EECC (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BB3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008A158 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008E60C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A169C (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7014 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D70C4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r15
  __int64 v8; // rdi
  int v9; // eax
  bool v10; // r13
  int v11; // ecx
  bool v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  signed __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // r9
  int v21; // r13d
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  struct _VIDSCH_SYNC_OBJECT *v25; // rax
  struct _VIDSCH_SYNC_OBJECT *v26; // rdi
  _QWORD *v27; // r13
  _QWORD *v28; // r14
  VIDMM_GLOBAL *v29; // rdi
  _QWORD *v30; // rbx
  struct VIDMM_PAGING_QUEUE *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *i; // r13
  PRKPROCESS *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r9
  _QWORD *v39; // r13
  VIDMM_GLOBAL *v40; // r15
  PRKPROCESS *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 *v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v54[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v57; // [rsp+60h] [rbp-A0h] BYREF
  VIDMM_GLOBAL *v58; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_SYNC_OBJECT *v59; // [rsp+70h] [rbp-90h]
  unsigned __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  struct VIDMM_PAGING_QUEUE *v61; // [rsp+80h] [rbp-80h]
  DXGFASTMUTEX *v62; // [rsp+88h] [rbp-78h]
  _QWORD v63[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE v65; // [rsp+110h] [rbp+10h] BYREF
  struct _KAPC_STATE v66; // [rsp+140h] [rbp+40h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)a5;
  v60 = (unsigned __int64)a4;
  v61 = a2;
  v58 = this;
  v57 = (struct _VIDSCH_SYNC_OBJECT *)a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a3;
  v8 = **a3;
  v9 = *(_DWORD *)(v8 + 76);
  if ( (v9 & 0x40) != 0 && !a5 )
  {
    WdLogSingleEntry1(1LL, a3);
    DxgkLogInternalTriageEvent(v32, 0x40000LL);
    VidSchMarkDeviceAsError(a3[1][4]);
    return 3221225485LL;
  }
  v10 = (*((_DWORD *)this + 1764) & 0x10000) != 0;
  v11 = *((_DWORD *)this + 1764) & 8;
  LODWORD(v56) = v11;
  v12 = (v9 & 0x40) != 0 && v10;
  if ( v12 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( v11 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v54[0] = 0;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39976));
  v13 = (_QWORD *)(v8 + 416);
  v14 = *(_QWORD *)(v8 + 416);
  if ( v14 )
  {
    if ( *(_QWORD **)(v14 + 8) != v13 || (v15 = *(_QWORD **)(v8 + 424), (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
  }
  if ( *(_QWORD *)(v8 + 432) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
    v54[0] = 1;
  }
  *((_QWORD *)this + 4998) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39976, 0LL);
  KeLeaveCriticalRegion();
  v62 = (DXGFASTMUTEX *)(v8 + 296);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 296));
  v17 = *((unsigned __int16 *)a3[12] + 2);
  *((_WORD *)a3[12] + 2) = 0;
  v18 = (unsigned int)(__int16)v17;
  v55 = (__int16)v17;
  if ( (_WORD)v17 )
  {
    v19 = 0;
    v20 = *(_DWORD *)(v8 + 76) & 0x20;
    LODWORD(v59) = *(_DWORD *)(v8 + 76) & 0x20;
    if ( v54[0] )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v8 + 88) + 8LL);
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v17 + 32) + 456LL), -*(_QWORD *)(v8 + 8));
    }
    if ( !(_DWORD)v20 )
    {
      if ( !v12 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 8LL) + 112LL) & 4) == 0 )
      {
        v19 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
        if ( v19 >= 0 )
        {
          v34 = (_QWORD *)(v8 + 272);
          for ( i = *(_QWORD **)(v8 + 272); ; i = (_QWORD *)*i )
          {
            if ( i == v34 )
            {
              v18 = v55;
              v20 = (unsigned int)v59;
              *(_BYTE *)(v8 + 82) = 0;
              goto LABEL_17;
            }
            v36 = (PRKPROCESS *)*(i - 6);
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*v36, &ApcState);
            v54[0] = 1;
            v19 = VIDMM_GLOBAL::CommitLocalBackingStore(v58, (struct _VIDMM_LOCAL_ALLOC *)(i - 7), v54, 0LL);
            KeUnstackDetachProcess(&ApcState);
            if ( v19 < 0 )
              break;
          }
          WdLogSingleEntry1(1LL, i - 7);
          DxgkLogInternalTriageEvent(v37, 0x40000LL);
          v39 = (_QWORD *)i[1];
          if ( v39 != v34 )
          {
            v40 = v58;
            do
            {
              v41 = (PRKPROCESS *)*(v39 - 6);
              memset(&v65, 0, sizeof(v65));
              KeStackAttachProcess(*v41, &v65);
              VIDMM_GLOBAL::UncommitLocalBackingStore(v40, (struct _VIDMM_LOCAL_ALLOC *)(v39 - 7), 1);
              KeUnstackDetachProcess(&v65);
              v39 = (_QWORD *)v39[1];
            }
            while ( v39 != (_QWORD *)(v8 + 272) );
            v5 = v57;
          }
          VIDMM_GLOBAL::UncommitGlobalBackingStore(v58, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0LL, v38);
        }
      }
      v19 = 0;
      *((_WORD *)a3[12] + 2) = 3;
      *(_DWORD *)v5 = 2;
      _InterlockedAdd(&dword_1C006E864, 1u);
      WdLogSingleEntry1(6LL, v8);
      DxgkLogInternalTriageEvent(v42, 262145LL);
      v22 = v56;
      goto LABEL_34;
    }
LABEL_17:
    *(_DWORD *)(v8 + 76) &= ~0x40u;
    if ( !a5 )
    {
      v21 = v56;
      *(_BYTE *)(v8 + 82) = 0;
      goto LABEL_24;
    }
    if ( (_DWORD)v18 == 1 )
    {
      *a5 = D3DDDI_RECLAIM_RESULT_OK;
    }
    else
    {
      if ( (_DWORD)v18 == 3 )
        *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
      if ( (_DWORD)v20
        && !*(_QWORD *)(v8 + 120)
        && *(_BYTE *)(v8 + 82)
        && !*(_BYTE *)(v8 + 83)
        && (*(_DWORD *)(v8 + 76) & 8) != 0 )
      {
        v21 = v56;
        if ( !(_DWORD)v56 )
        {
          v43 = *(_QWORD *)(v8 + 88);
          if ( v43 )
          {
            v17 = *(_QWORD *)(v43 + 8);
            if ( v17 )
            {
              memset(&v66, 0, sizeof(v66));
              KeStackAttachProcess(*(PRKPROCESS *)v17, &v66);
              v44 = *(_QWORD **)(v8 + 88);
              if ( (**(_DWORD **)(v8 + 528) & 0x20000000) != 0 )
              {
                v56 = v44[2];
                v57 = *(struct _VIDSCH_SYNC_OBJECT **)(v8 + 8);
                VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                v46 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD, struct _VIDSCH_SYNC_OBJECT **, int, int))VirtualMemoryInterface)(
                        -1LL,
                        &v56,
                        0LL,
                        &v57,
                        0x1000000,
                        4);
              }
              else
              {
                v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v44[1] + 24LL) + 128LL))(
                        *(_QWORD *)(v44[1] + 24LL),
                        v44[3]);
              }
              v19 = v46;
              KeUnstackDetachProcess(&v66);
              if ( v19 < 0 )
              {
                *(_BYTE *)(v8 + 82) = 0;
                WdLogSingleEntry1(4LL, v19);
                if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
                {
                  LODWORD(v53) = *(_QWORD *)(v8 + 8) >> 12;
                  LODWORD(v52) = 0;
                  McTemplateK0pqqt_EtwWriteTransfer(v17, &EventUnreset, v18, v8, v52, v53, 0);
                }
                v19 = 0;
              }
              else
              {
                *a5 = D3DDDI_RECLAIM_RESULT_OK;
                *(_QWORD *)(v8 + 456) = 0LL;
                WdLogSingleEntry1(4LL, v8);
                if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
                {
                  LODWORD(v53) = *(_QWORD *)(v8 + 8) >> 12;
                  LODWORD(v52) = 0;
                  McTemplateK0pqqt_EtwWriteTransfer(v17, &EventUnreset, v18, v8, v52, v53, 1);
                }
              }
              *(_DWORD *)(v8 + 76) &= ~8u;
            }
          }
LABEL_24:
          if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          {
            v47 = **a3;
            LOBYTE(v53) = v55;
            LOBYTE(v52) = *(_BYTE *)(v47 + 448);
            McTemplateK0puu_EtwWriteTransfer(v47, &EventReclaimAllocation, v18, a3, v52, v53);
          }
          v22 = 0LL;
          v56 = 0LL;
          if ( v21 || v55 == 3 )
          {
            LODWORD(v23) = v55;
          }
          else
          {
            v23 = (int)v55;
            if ( (v55 != 2 || (*(_DWORD *)(v8 + 72) & 0x40) == 0) && *(_DWORD *)(v8 + 112) )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v20);
                v48[3] = a3;
                v48[4] = 0LL;
                v48[5] = v23;
                v49 = ((unsigned __int64)*(unsigned int *)(v8 + 72) >> 6) & 1;
                v48[7] = 1LL;
                v48[6] = v49;
              }
LABEL_34:
              DXGFASTMUTEX::Release((struct _KTHREAD **)v62);
              if ( v19 == 259 )
              {
                if ( v60 )
                {
                  *(_QWORD *)v60 = v22;
                }
                else
                {
                  v60 = v22;
                  v57 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v61 + 11);
                  VIDMM_GLOBAL::WaitForFences(v58, &v57, &v60, 1u, 0LL);
                  return 0;
                }
              }
              return (unsigned int)v19;
            }
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v20);
            v50[3] = a3;
            v50[4] = v21 != 0;
            v50[5] = (int)v23;
            v51 = ((unsigned __int64)*(unsigned int *)(v8 + 72) >> 6) & 1;
            v50[7] = 0LL;
            v50[6] = v51;
          }
          v25 = (struct _VIDSCH_SYNC_OBJECT *)(v8 + 272);
          v26 = *(struct _VIDSCH_SYNC_OBJECT **)(v8 + 272);
          v57 = v25;
          while ( 1 )
          {
            v59 = v26;
            if ( v26 == v25 )
              break;
            v27 = (_QWORD *)((char *)v26 - 16);
            v28 = (_QWORD *)*((_QWORD *)v26 - 2);
            if ( v28 != (_QWORD *)((char *)v26 - 16) )
            {
              v29 = v58;
              do
              {
                v30 = v28 - 5;
                if ( (*(_DWORD *)(v28 - 1) & 1) == 0 )
                {
                  if ( *((_BYTE *)v30 + 25) & 1 | *((_DWORD *)v30 + 38)
                    && (memset(v63, 0, sizeof(v63)),
                        v31 = v61,
                        LODWORD(v63[0]) = 210,
                        v63[2] = v28 - 5,
                        v19 = VIDMM_GLOBAL::QueueDeferredCommand(
                                v29,
                                v61,
                                (struct _VIDMM_DEFERRED_COMMAND *)v63,
                                0,
                                &v56),
                        (*((_DWORD *)v30 + 7) & 0x20) != 0) )
                  {
                    v30[32] = v31;
                    v22 = v56;
                    v30[35] = v56;
                  }
                  else
                  {
                    v22 = v56;
                  }
                }
                v28 = (_QWORD *)*v28;
              }
              while ( v28 != v27 );
              v26 = v59;
              v25 = v57;
            }
            v26 = *(struct _VIDSCH_SYNC_OBJECT **)v26;
          }
          goto LABEL_34;
        }
LABEL_95:
        *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        goto LABEL_24;
      }
    }
    v21 = v56;
    if ( !(_DWORD)v56 )
      goto LABEL_24;
    goto LABEL_95;
  }
  WdLogSingleEntry1(1LL, a3);
  DxgkLogInternalTriageEvent(v33, 0x40000LL);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 296));
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
