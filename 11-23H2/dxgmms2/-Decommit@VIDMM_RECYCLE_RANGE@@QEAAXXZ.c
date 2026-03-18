/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00A0510
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009F6EC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A0280 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0005B6C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EEAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009FEC8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00A3320 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this)
{
  struct VIDMM_RECYCLE_BLOCK *v1; // rdx
  int v3; // ecx
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]

  v1 = (struct VIDMM_RECYCLE_BLOCK *)*((int *)this + 16);
  v3 = *((_DWORD *)this + 16) - 1;
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      v4 = (_QWORD *)((char *)this + 104);
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v6 = *((_QWORD *)this + 13);
      if ( *(VIDMM_RECYCLE_RANGE **)(v6 + 8) != (VIDMM_RECYCLE_RANGE *)((char *)this + 104) )
        goto LABEL_29;
      v7 = (_QWORD *)*((_QWORD *)this + 14);
      if ( (_QWORD *)*v7 != v4 )
        goto LABEL_29;
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v8 = *((_DWORD *)this + 16);
      *((_QWORD *)this + 14) = 0LL;
      *v4 = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      if ( v8 == 5 )
      {
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)this + 4) - *((_QWORD *)this + 5), v1);
      }
      else if ( (unsigned int)(v8 - 3) <= 1 )
      {
        v9 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5);
        if ( (__int64)(v9 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v9)) < 0 )
        {
          if ( g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          }
        }
      }
      *((_QWORD *)this + 12) = *(_QWORD *)(v5 + 1576) + (unsigned int)dword_1C007647C;
      v10 = *(_QWORD **)(v5 + 1552);
      if ( *v10 != v5 + 1544 )
LABEL_29:
        __fastfail(3u);
      *v4 = v5 + 1544;
      *((_QWORD *)this + 14) = v10;
      *v10 = v4;
      *(_QWORD *)(v5 + 1552) = v4;
      if ( !_InterlockedExchange((volatile __int32 *)(v5 + 1536), 1) && !*(_DWORD *)(v5 + 1584) )
        KeSetTimer((PKTIMER)(v5 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v5 + 1440));
      v11 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
      if ( (__int64)(v11 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v11)) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), 4LL);
      if ( (byte_1C0076982 & 2) != 0 )
      {
        LODWORD(v20) = 4;
        LODWORD(v19) = *((_DWORD *)this + 16);
        McTemplateK0pqq_EtwWriteTransfer(v12, &EventRecycleRangeTransition, v13, this, v19, v20);
      }
      v14 = *((_QWORD *)this + 9);
      v15 = *(_QWORD **)(v14 + 136);
      if ( v15 )
      {
        v17 = *v15 + 144LL * v15[1];
        *(_DWORD *)v17 = 2;
        *(_QWORD *)(v17 + 8) = this;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v17 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v14 + 136) + 8LL);
        v18 = *(_QWORD *)(v14 + 136);
        if ( *(_QWORD *)(v18 + 8) == *(_QWORD *)(v18 + 48) )
        {
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v14 + 136) + 16LL) = 1;
        }
      }
      *((_DWORD *)this + 16) = 4;
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v1, 0LL);
    }
  }
  else
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v16 - 3) > 3 && (unsigned int)(*(_DWORD *)v16 - 9) > 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v16 + 8), this);
      VIDMM_RECYCLE_RANGE::Transition(this, 5LL);
    }
    else
    {
      VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    }
  }
}
