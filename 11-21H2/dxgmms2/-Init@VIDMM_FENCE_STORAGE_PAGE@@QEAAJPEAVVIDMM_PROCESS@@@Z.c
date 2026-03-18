/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C007BCEC
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0001100 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0014018 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002084 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023F8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C007C150 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C008F1E4 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C00A6FF8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00DFD40 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  int v4; // esi
  void *CurrentPartitionHandle; // rcx
  _QWORD *v6; // rdi
  int v7; // esi
  struct _MDL *Mdl; // rax
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v21[80]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v23 = 0LL;
  v22 = 4096LL;
  v4 = 0x8000000;
  CurrentPartitionHandle = 0LL;
  if ( *((PVOID *)this + 21) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v4 = 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  }
  v6 = (_QWORD *)((char *)this + 104);
  v7 = MmCreateSection((char *)this + 104, 0LL, 0LL, &v22, 4, v4, CurrentPartitionHandle, 0LL);
  if ( v7 < 0 )
  {
    *v6 = 0LL;
  }
  else
  {
    v20 = 4096LL;
    v7 = MmMapViewInSystemSpaceEx(*v6, (char *)this + 112, &v20, &v23, 0LL);
    if ( v7 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(*((PVOID *)this + 14), 0x1000uLL);
      *((_QWORD *)this + 15) = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 136) = 1;
        v9 = *((_QWORD *)this + 21);
        if ( *(_BYTE *)(v9 + 64) )
        {
          if ( !a2 )
            a2 = *(struct VIDMM_PROCESS **)v9;
        }
        else if ( !a2 )
        {
          if ( *((_QWORD *)this + 19) )
          {
            WdLogSingleEntry1(1LL, 379LL);
            DxgkLogInternalTriageEvent(v12, 262146LL);
          }
          if ( *((_QWORD *)this + 18) )
          {
            WdLogSingleEntry1(1LL, 380LL);
            DxgkLogInternalTriageEvent(v13, 262146LL);
          }
          return 0LL;
        }
        *((_QWORD *)this + 4) = a2;
        v7 = VIDMM_PROCESS::MapHostAddressesToGuest(
               a2,
               *((struct _MDL **)this + 15),
               0x1000uLL,
               (void **)this + 19,
               (unsigned __int64 *)this + 18);
        if ( v7 >= 0 )
        {
          v15 = *((_QWORD *)this + 21);
          if ( !*(_BYTE *)(v15 + 64) )
          {
            if ( *(_QWORD *)v15 )
            {
              WdLogSingleEntry1(1LL, 367LL);
              DxgkLogInternalTriageEvent(v16, 262146LL);
              v15 = *((_QWORD *)this + 21);
            }
            *(_BYTE *)(v15 + 65) = 1;
            *((_BYTE *)this + 160) = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v21,
              (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 4) + 64LL));
            v17 = (_QWORD *)((char *)this + 16);
            v18 = *((_QWORD *)this + 4) + 48LL;
            v19 = *(_QWORD *)v18;
            if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
              __fastfail(3u);
            *v17 = v19;
            *((_QWORD *)this + 3) = v18;
            *(_QWORD *)(v19 + 8) = v17;
            *(_QWORD *)v18 = v17;
            DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21);
          }
          return 0LL;
        }
        WdLogSingleEntry1(1LL, 355LL);
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
      }
      else
      {
        _InterlockedAdd((volatile signed __int32 *)&gVidMmLowResourceAccumulated, 1u);
        WdLogSingleEntry1(6LL, 294LL);
        DxgkLogInternalTriageEvent(v11, 262145LL);
        v7 = -1073741801;
      }
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v7;
}
