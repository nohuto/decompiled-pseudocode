/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00DC580
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C002D0D0 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B85BC (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00DABD4 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        char a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v8; // rbx
  int v9; // ecx
  VIDMM_SEGMENT *v10; // rbp
  struct _KTHREAD **v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  struct _RTL_BALANCED_NODE *v16; // r12
  int v17; // eax
  struct _MDL *FullMDL; // r9
  int v19; // eax
  unsigned __int64 v20; // rdx
  _QWORD v21[12]; // [rsp+70h] [rbp-88h] BYREF
  struct VIDMM_ALLOC *v22; // [rsp+118h] [rbp+20h] BYREF

  v5 = *((_QWORD *)a2->hAllocation + 3);
  if ( a3 )
  {
    v8 = **(_QWORD **)v5;
    v9 = *(_DWORD *)(v8 + 68);
    v10 = *(VIDMM_SEGMENT **)(v8 + 120);
    v11 = (struct _KTHREAD **)*((_QWORD *)this + (v9 & 0x3F) + 5052);
    if ( (*(_DWORD *)(v5 + 28) & 3) == 2 )
    {
      v13 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v11,
              v5,
              0LL,
              1u,
              *(_QWORD *)(v8 + 16),
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v8 + 32),
              (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
              0LL,
              v9 & 0x3F,
              0LL,
              0);
      v14 = v13;
      if ( v13 )
      {
        v16 = *(struct _RTL_BALANCED_NODE **)(v13 + 96);
        v22 = 0LL;
        v17 = *((_DWORD *)v10 + 20);
        if ( (v17 & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v8, 0LL);
          v17 = *((_DWORD *)v10 + 20);
        }
        else
        {
          FullMDL = 0LL;
        }
        if ( (v17 & 0x1001) != 0 )
        {
          v19 = 0;
          v20 = 0LL;
        }
        else
        {
          v19 = VIDMM_SEGMENT::DriverId(v10);
        }
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)v11,
          v14,
          *(_DWORD *)(v8 + 68) & 0x3F,
          v19,
          v20,
          (__int64)FullMDL,
          1,
          &v22,
          0LL);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          (D3DGPU_VIRTUAL_ADDRESS)v16,
          *(_QWORD *)(v8 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v11, v16);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(1LL, 24103LL);
        DxgkLogInternalTriageEvent(v15, 0x40000LL);
        return 3221225473LL;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 24082LL);
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v21, 0, 0x58uLL);
    v6 = *(__int64 **)v5;
    LODWORD(v21[0]) = 117;
    v21[5] = a2;
    HIDWORD(v21[0]) = *(_DWORD *)(*v6 + 68) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v21, 1);
  }
}
