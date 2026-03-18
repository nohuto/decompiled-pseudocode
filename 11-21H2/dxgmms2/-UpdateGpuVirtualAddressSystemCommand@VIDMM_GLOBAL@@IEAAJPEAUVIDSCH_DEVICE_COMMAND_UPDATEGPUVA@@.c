/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002D778 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchGetPagingContext @ 0x1C003D41C (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007B820 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008EDD4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00E2224 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00E3ADC (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00E3C64 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  struct VIDMM_PROCESS ***v5; // rax
  int v6; // esi
  struct VIDMM_PROCESS **v7; // r13
  VIDMM_GLOBAL *v8; // rcx
  int v9; // edi
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  char *v13; // rdx
  __int64 v14; // r14
  struct _LIST_ENTRY **v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // r14
  VIDMM_GLOBAL *v18; // r11
  unsigned int v19; // eax
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v20; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  char *v22; // r14
  volatile signed __int32 *v23; // r12
  volatile signed __int32 *v24; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  char *v29; // r14
  char *v30; // rdx
  __int64 v31; // rsi
  __int64 **v32; // rcx
  __int64 v33; // rdi
  VIDMM_SEGMENT *v34; // rcx
  int v35; // r12d
  struct _MDL *FullMDL; // rax
  unsigned __int64 v37; // rcx
  char v38; // r8
  bool v39; // zf
  struct VIDMM_MAPPED_VA_RANGE *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  char *v43; // rax
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  struct _LIST_ENTRY ***v48; // r8
  struct _LIST_ENTRY *v49; // r10
  int v50; // eax
  unsigned __int64 AllocationOffsetInBytes; // r9
  __int64 v52; // r11
  struct _LIST_ENTRY *Blink; // rcx
  int v54; // eax
  __int64 v55; // r10
  struct _MDL *v56; // rax
  __int64 v57; // rax
  unsigned int v58; // ecx
  char *v59; // r12
  struct VIDMM_MAPPED_VA_RANGE *v60; // rdx
  int v61; // eax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // r8
  char v78; // [rsp+50h] [rbp-B0h] BYREF
  char v79[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-A8h]
  unsigned int v81; // [rsp+60h] [rbp-A0h]
  int v82; // [rsp+64h] [rbp-9Ch]
  struct _LIST_ENTRY *v83; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v84; // [rsp+70h] [rbp-90h]
  struct _LIST_ENTRY *v85; // [rsp+78h] [rbp-88h] BYREF
  char *v86; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY **v87; // [rsp+88h] [rbp-78h]
  unsigned __int64 v88; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY ***v89; // [rsp+98h] [rbp-68h]
  __int64 v90; // [rsp+A0h] [rbp-60h]
  _QWORD *v91; // [rsp+A8h] [rbp-58h] BYREF
  char *v92; // [rsp+B0h] [rbp-50h] BYREF
  int v93; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  char v95; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v97; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h] BYREF
  __int64 PagingContext; // [rsp+E8h] [rbp-18h] BYREF
  char v100[8]; // [rsp+F0h] [rbp-10h] BYREF
  DXGPUSHLOCK *v101; // [rsp+F8h] [rbp-8h]
  int v102; // [rsp+100h] [rbp+0h]
  unsigned __int64 v104; // [rsp+168h] [rbp+68h] BYREF
  struct VIDMM_ALLOC **v105; // [rsp+170h] [rbp+70h]
  char v106; // [rsp+178h] [rbp+78h]

  v105 = a3;
  v3 = -1LL;
  v93 = -1;
  v94 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v95 = 1;
    v93 = 8011;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v95 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v5 = (struct VIDMM_PROCESS ***)*((_QWORD *)a2 + 11);
  v106 = 0;
  v6 = 0;
  v7 = *v5;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v100, *v5 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v101);
  v9 = -1073741823;
  v102 = 2;
  if ( !*((_QWORD *)a2 + 14) )
  {
    WdLogSingleEntry0(4LL);
    v6 = -1073741823;
    v106 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      WdLogSingleEntry0(4LL);
      v6 = -1073741823;
      v106 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v11 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0) )
    goto LABEL_130;
  v9 = v6;
  if ( v6 < 0 )
  {
    v70 = v104;
    goto LABEL_127;
  }
  v12 = 0LL;
  v13 = (char *)*((unsigned int *)a2 + 4);
  v92 = v13;
  v80 = 0LL;
  v14 = *((_QWORD *)a2 + 14);
  v96 = 3LL * (_QWORD)(v13 + 4);
  v15 = (struct _LIST_ENTRY **)(v14 + 24LL * (_QWORD)(v13 + 4));
  v16 = *v15;
  v87 = v15;
  if ( v16 == (struct _LIST_ENTRY *)v15 )
  {
    v17 = (struct _LIST_ENTRY *)(v14 + 24LL * (_QWORD)(v92 + 4));
  }
  else
  {
    v17 = *(struct _LIST_ENTRY **)(v14 + 24LL * (_QWORD)v13 + 112);
    if ( !v17 )
      v17 = v16;
  }
  v18 = this;
  v83 = v17;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v7[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v18 = this;
  }
  v19 = *((_DWORD *)a2 + 9);
  v81 = v19;
  if ( v19 >= *((_DWORD *)a2 + 5) )
    goto LABEL_130;
  while ( 1 )
  {
    v20 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v19 << 6));
    OperationType = v20->OperationType;
    if ( v20->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      {
        if ( *((_QWORD *)v18 + 5123) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v18, v7[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
        v29 = (char *)a2 + 48;
        if ( *(char **)v29 == v29 )
          v9 = CVirtualAddressAllocator::BuildVaRangeList(
                 (CVirtualAddressAllocator *)v7,
                 *((struct VIDMM_VAD **)a2 + 15),
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 (struct _LIST_ENTRY *)a2 + 3,
                 v20->Map.BaseAddress,
                 v20->Map.BaseAddress + v20->Map.SizeInBytes,
                 v20->Unmap.Protection.Value);
        if ( v9 >= 0 )
        {
          v85 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v96);
          while ( 1 )
          {
            v30 = *(char **)v29;
            v86 = v30;
            if ( v30 == v29 || v9 < 0 )
              break;
            v31 = (__int64)(v30 - 8);
            v32 = (__int64 **)*((_QWORD *)v30 + 6);
            if ( v32 )
            {
              v33 = **v32;
              if ( (*((_DWORD *)v32 + 7) & 3) != 2 )
                goto LABEL_72;
              v34 = *(VIDMM_SEGMENT **)(v33 + 120);
              if ( (*((_DWORD *)v34 + 20) & 0x1001) != 0 )
              {
                v35 = 0;
                FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v33, 0LL);
                v37 = *(_QWORD *)(v31 + 72);
              }
              else
              {
                v35 = VIDMM_SEGMENT::DriverId(v34);
                FullMDL = 0LL;
                v37 = *(_QWORD *)(v31 + 72) + *(_QWORD *)(v33 + 128);
              }
              v38 = *(_DWORD *)(v33 + 68) & 0x3F;
              v79[0] = 0;
              v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     (__int64)v7,
                     v31,
                     v38,
                     v35,
                     v37,
                     (__int64)FullMDL,
                     2,
                     v105,
                     v79);
              if ( v9 < 0 )
                WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 96), *(_QWORD *)(v31 + 104), 25586LL);
              v12 = v80;
              v39 = v79[0] == 0;
            }
            else
            {
              v39 = (*(_BYTE *)(v31 + 88) & 8) == 0;
              v40 = (struct VIDMM_MAPPED_VA_RANGE *)(v30 - 8);
              v78 = 0;
              if ( !v39 )
              {
                v9 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v7, v40, v105, 0);
                if ( v9 < 0 )
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 96), *(_QWORD *)(v31 + 104), 25604LL);
LABEL_66:
                v41 = *(_QWORD *)(v31 + 96);
                if ( v3 < v41 )
                  v41 = v3;
                v3 = v41;
                v42 = *(_QWORD *)(v31 + 104);
                if ( v12 <= v42 )
                {
                  v80 = *(_QWORD *)(v31 + 104);
                  v12 = v42;
                }
                goto LABEL_70;
              }
              v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     (__int64)v7,
                     (__int64)v40,
                     0,
                     -2,
                     0LL,
                     0LL,
                     2,
                     v105,
                     &v78);
              if ( v9 < 0 )
                WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 96), *(_QWORD *)(v31 + 104), 25619LL);
              v39 = v78 == 0;
            }
            if ( !v39 )
              goto LABEL_66;
LABEL_70:
            if ( v9 < 0 )
              continue;
            v30 = v86;
LABEL_72:
            v43 = *(char **)v29;
            if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 )
              goto LABEL_122;
            v44 = *(_QWORD *)v43;
            if ( *(char **)(*(_QWORD *)v43 + 8LL) != v43 )
              goto LABEL_122;
            *(_QWORD *)v29 = v44;
            *(_QWORD *)(v44 + 8) = v29;
            *(_QWORD *)v30 = 0LL;
            *(_QWORD *)(v31 + 16) = 0LL;
            v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                   v7,
                   *((struct VIDMM_VAD **)a2 + 14),
                   *((_DWORD *)a2 + 4),
                   &v85,
                   (struct VIDMM_MAPPED_VA_RANGE *)v31);
            if ( v9 < 0 )
            {
              WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 96), *(_QWORD *)(v31 + 104), 25636LL);
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
                (volatile signed __int32 *)v31,
                (struct CVirtualAddressAllocator *)v7);
            }
          }
        }
        if ( v9 != -1073741267 )
        {
          while ( 1 )
          {
            v45 = *(volatile signed __int32 **)v29;
            if ( *(char **)v29 == v29 )
              break;
            if ( *((char **)v45 + 1) != v29 )
              goto LABEL_122;
            v46 = *(_QWORD *)v45;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v45 + 8LL) != v45 )
              goto LABEL_122;
            *(_QWORD *)v29 = v46;
            *(_QWORD *)(v46 + 8) = v29;
            *((_QWORD *)v45 + 1) = 0LL;
            *(_QWORD *)v45 = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v45 - 2, (struct CVirtualAddressAllocator *)v7);
          }
        }
        v17 = *v87;
        v83 = *v87;
      }
LABEL_82:
      if ( v9 < 0 )
        goto LABEL_124;
      goto LABEL_83;
    }
    if ( *((_QWORD *)v18 + 5123) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v18, v7[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
    v22 = (char *)a2 + 96;
    LOBYTE(v104) = 0;
    v23 = (volatile signed __int32 *)*((_QWORD *)a2 + 12);
    v24 = v23 - 2;
    v25 = (struct VIDMM_MAPPED_VA_RANGE *)(v23 - 2);
    if ( (v23[20] & 8) != 0 )
    {
      v9 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v7, v25, v105, 0);
      if ( v9 < 0 )
        WdLogSingleEntry3(3LL, *((_QWORD *)v24 + 12), *((_QWORD *)v24 + 13), 25473LL);
      LOBYTE(v104) = 1;
    }
    else
    {
      v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             (__int64)v7,
             (__int64)v25,
             0,
             -2,
             0LL,
             0LL,
             2,
             v105,
             &v104);
      if ( v9 < 0 )
        WdLogSingleEntry3(3LL, *((_QWORD *)v24 + 12), *((_QWORD *)v24 + 13), 25487LL);
      if ( !(_BYTE)v104 )
        goto LABEL_37;
    }
    v26 = *((_QWORD *)v24 + 12);
    if ( v3 < v26 )
      v26 = v3;
    v3 = v26;
    if ( v80 <= *((_QWORD *)v24 + 13) )
      v80 = *((_QWORD *)v24 + 13);
LABEL_37:
    if ( v9 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v23 - 2, (struct CVirtualAddressAllocator *)v7);
      goto LABEL_124;
    }
    v27 = *(__int64 **)v22;
    if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 || (v28 = *v27, *(__int64 **)(*v27 + 8) != v27) )
LABEL_122:
      __fastfail(3u);
    *(_QWORD *)v22 = v28;
    *(_QWORD *)(v28 + 8) = v22;
    *(_QWORD *)v23 = 0LL;
    *((_QWORD *)v24 + 2) = 0LL;
    v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           v7,
           *((struct VIDMM_VAD **)a2 + 14),
           *((_DWORD *)a2 + 4),
           0LL,
           (struct VIDMM_MAPPED_VA_RANGE *)(v23 - 2));
    if ( v9 < 0 )
    {
LABEL_119:
      WdLogSingleEntry0(3LL);
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v24, (struct CVirtualAddressAllocator *)v7);
      goto LABEL_124;
    }
    v17 = *v87;
    v83 = *v87;
LABEL_118:
    v12 = v80;
LABEL_83:
    v47 = v81;
    *((_DWORD *)a2 + 10) = 0;
    v19 = v47 + 1;
    v81 = v19;
    if ( v19 >= *((_DWORD *)a2 + 5) )
      goto LABEL_124;
    v18 = this;
  }
  v39 = *((_QWORD *)v18 + 5123) == 0LL;
  v48 = *(struct _LIST_ENTRY ****)(*((_QWORD *)a2 + 8) + 8LL * v20->Map.hAllocation);
  v89 = v48;
  v49 = **v48;
  v85 = v49;
  if ( !v39 )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v18,
      v7[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      (struct VIDMM_ALLOC *)v48,
      v20);
    v48 = v89;
    v49 = v85;
  }
  v50 = *((_DWORD *)v48 + 7);
  AllocationOffsetInBytes = 0LL;
  v82 = 0;
  v52 = 0LL;
  v90 = 0LL;
  v88 = 0LL;
  if ( (v50 & 3) == 2 )
  {
    Blink = v49[7].Blink;
    if ( ((__int64)Blink[5].Flink & 0x1001) != 0 )
    {
      v82 = 0;
      v56 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v49, 0LL);
      AllocationOffsetInBytes = v20->Map.AllocationOffsetInBytes;
      v52 = (__int64)v56;
      v48 = v89;
      v90 = (__int64)v56;
    }
    else
    {
      v54 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)Blink);
      AllocationOffsetInBytes = v20->Map.AllocationOffsetInBytes + *(_QWORD *)(v55 + 128);
      v82 = v54;
      v90 = v52;
    }
    v88 = AllocationOffsetInBytes;
  }
  if ( (*((_BYTE *)this + 40937) & 4) != 0 )
    v57 = 1LL;
  else
    v57 = v20->Map.SizeInBytes / v20->Map.AllocationSizeInBytes;
  v58 = *((_DWORD *)a2 + 10);
  v86 = (char *)v57;
  v84 = v58;
  if ( v58 >= (unsigned int)v57 )
    goto LABEL_82;
  v59 = (char *)a2 + 96;
  while ( 1 )
  {
    v91 = *(_QWORD **)v59;
    v24 = (volatile signed __int32 *)(v91 - 1);
    v60 = (struct VIDMM_MAPPED_VA_RANGE *)(v91 - 1);
    if ( (*((_DWORD *)v48 + 7) & 3) == 2 )
      break;
    v61 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v7, v60, v105, 0);
    v62 = *((_QWORD *)v24 + 12);
    v9 = v61;
    v63 = *((_QWORD *)v24 + 13);
    v64 = v62;
    if ( v3 < v62 )
      v64 = v3;
    v3 = v64;
    v65 = *((_QWORD *)v24 + 13);
    if ( v80 > v63 )
      v65 = v80;
    v80 = v65;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, v62, v63);
      goto LABEL_124;
    }
LABEL_110:
    if ( *v87 != (struct _LIST_ENTRY *)v87 )
    {
      if ( (struct _LIST_ENTRY *)*((_QWORD *)v24 + 12) < v17[5].Blink )
        v17 = *v87;
      v83 = v17;
    }
    v67 = *(_QWORD **)v59;
    if ( *(char **)(*(_QWORD *)v59 + 8LL) != v59 )
      goto LABEL_122;
    v68 = *v67;
    if ( *(_QWORD **)(*v67 + 8LL) != v67 )
      goto LABEL_122;
    v69 = v91;
    *(_QWORD *)v59 = v68;
    *(_QWORD *)(v68 + 8) = v59;
    *((_QWORD *)v24 + 2) = 0LL;
    *v69 = 0LL;
    v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           v7,
           *((struct VIDMM_VAD **)a2 + 14),
           *((_DWORD *)a2 + 4),
           &v83,
           (struct VIDMM_MAPPED_VA_RANGE *)v24);
    if ( v9 < 0 )
      goto LABEL_119;
    AllocationOffsetInBytes = v88;
    v48 = v89;
    v52 = v90;
    v17 = v83->Blink;
    v83 = v17;
    *(_QWORD *)(*((_QWORD *)a2 + 14) + 24LL * (_QWORD)v92 + 112) = v17;
    if ( ++v84 >= (unsigned int)v86 )
      goto LABEL_118;
  }
  v78 = 0;
  v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
         (__int64)v7,
         (__int64)v60,
         HIDWORD(v85[4].Flink) & 0x3F,
         v82,
         AllocationOffsetInBytes,
         v52,
         2,
         v105,
         &v78);
  if ( v78 )
  {
    v66 = *((_QWORD *)v24 + 12);
    if ( v3 < v66 )
      v66 = v3;
    v3 = v66;
    if ( v80 <= *((_QWORD *)v24 + 13) )
      v80 = *((_QWORD *)v24 + 13);
  }
  if ( v9 >= 0 )
    goto LABEL_110;
  WdLogSingleEntry3(3LL, *((_QWORD *)v24 + 12), *((_QWORD *)v24 + 13), 25410LL);
LABEL_124:
  if ( v3 < v80 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v7, *((_DWORD *)a2 + 4), v3, v80);
  v70 = v81;
LABEL_127:
  if ( v9 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v70;
    goto LABEL_138;
  }
LABEL_130:
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v71 = *((unsigned int *)a2 + 4);
    v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
    v91 = *(_QWORD **)(*(_QWORD *)(v72 + 280) + 8 * v71);
    if ( v91 )
    {
      v92 = (char *)*((_QWORD *)a2 + 9);
      v104 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v91, 1u, &v92, 0x80000000, &v104) < 0 )
      {
        WdLogSingleEntry1(1LL, 25724LL);
        goto LABEL_136;
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v72, v71);
      v98 = *((_QWORD *)a2 + 9);
      v97 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0, 0LL, 1, &PagingContext, 1u, (__int64)&v98, 0x80000000, &v97) < 0 )
      {
        WdLogSingleEntry1(1LL, 25752LL);
LABEL_136:
        DxgkLogInternalTriageEvent(v73, 0x40000LL);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_138:
  v74 = 0;
  if ( !v106 )
    v74 = v9;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
  if ( v95 )
  {
    LOBYTE(v75) = byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v75, (__int64)&EventProfilerExit, v76, v93);
  }
  return v74;
}
