/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00B1018 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C00020F8 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0013410 (RtlStringCbPrintfW.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001430C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C001C768 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C00B1C34 (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00B1D70 (--0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00B1F08 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?InitializePagingHistory@VIDMM_GLOBAL@@QEAAXK@Z @ 0x1C00B2758 (-InitializePagingHistory@VIDMM_GLOBAL@@QEAAXK@Z.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00B27C0 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B322C (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00B3370 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00E2434 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rax
  unsigned int *v8; // r14
  NTSTATUS VaAllocator; // ebp
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // eax
  char v17; // cl
  int v18; // edx
  char v19; // al
  unsigned int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rbx
  __int64 v24; // r13
  UINT *p_PagingBufferSegmentId; // r15
  ADAPTER_RENDER *v26; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  int v28; // r9d
  __int64 v29; // rdx
  const struct DXGADAPTER_GPUMMUCAPS *v30; // r11
  unsigned int v31; // ecx
  _DWORD *v32; // r8
  __int64 v33; // rcx
  UCHAR **v34; // r10
  __int16 v35; // ax
  int v36; // ecx
  char v37; // al
  unsigned int v38; // ecx
  bool v39; // cl
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  wchar_t *v43; // r13
  unsigned int v44; // ebx
  UCHAR **p_pSegmentDescriptor; // rcx
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v46; // r9
  __int64 v47; // r14
  int inited; // eax
  __int64 v49; // rax
  bool v50; // zf
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  __int64 v53; // r13
  const struct DXGADAPTER_GPUMMUCAPS *v54; // rax
  unsigned int *v55; // r14
  const struct DXGK_PHYSICALADAPTERINFO *v56; // r10
  int v57; // eax
  VIDMM_WORKER_THREAD *v58; // rax
  VIDMM_WORKER_THREAD *v59; // rax
  struct _RTL_BALANCED_NODE *v60; // rax
  VIDMM_PARTITION *i; // r14
  int v62; // eax
  VIDMM_PARTITION **v63; // rax
  VIDMM_PARTITION *v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // rsi
  VIDMM_PARTITION *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  _QWORD *v84; // rcx
  unsigned __int64 v85; // rbx
  _QWORD *v86; // rax
  void (__fastcall ***v87)(_QWORD, __int64); // r8
  PPCW_DATA Data; // [rsp+20h] [rbp-A8h]
  struct DXGK_PHYSICALADAPTERINFO *v89; // [rsp+28h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-78h] BYREF
  struct _PCW_DATA v91; // [rsp+60h] [rbp-68h] BYREF
  UCHAR **v92; // [rsp+70h] [rbp-58h]
  unsigned int v93; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v94; // [rsp+D0h] [rbp+8h]
  const struct DXGADAPTER_GPUMMUCAPS *v96; // [rsp+D8h] [rbp+10h]
  unsigned int v99; // [rsp+F0h] [rbp+28h]

  *((_QWORD *)this + 2) = a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 8) = a4;
  byte_1C006E560 |= (*(_DWORD *)(v6 + 436) & 0x200) != 0;
  v8 = (unsigned int *)*((_QWORD *)this + 3);
  if ( (a5 & 1) != 0 )
  {
    *((_BYTE *)this + 40179) = 1;
    *((_BYTE *)this + 40181) = 1;
  }
  if ( (a5 & 2) != 0 )
  {
    if ( (v8[539] & 0x4000) == 0 )
    {
      WdLogSingleEntry1(1LL, 1502LL);
LABEL_84:
      DxgkLogInternalTriageEvent(v69, 0x40000LL);
      return 3221225485LL;
    }
    *((_BYTE *)this + 40180) = 1;
  }
  VaAllocator = 0;
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40937) |= 4u;
  v10 = v8[72];
  *((_DWORD *)this + 1754) = v10;
  if ( (unsigned int)v10 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 64LL);
    goto LABEL_84;
  }
  v11 = 1584 * v10;
  if ( !is_mul_ok(v10, 0x630uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = operator new[](v13, 0x30356956u, 64LL);
  if ( v14 )
  {
    v15 = v14 + 8;
    *(_QWORD *)v14 = v10;
    `vector constructor iterator'(
      (char *)(v14 + 8),
      1584LL,
      (unsigned int)v10,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 5028) = v15;
  if ( v15 )
  {
    v16 = v8[539];
    if ( (v16 & 0x20) != 0 )
    {
      *((_BYTE *)this + 40936) ^= (*((_BYTE *)this + 40936) ^ (v16 >> 5)) & 2;
      v17 = *((_BYTE *)this + 40936) ^ (*((_BYTE *)this + 40936) ^ (v8[539] >> 5)) & 4;
      *((_BYTE *)this + 40936) = v17;
      if ( (v17 & 4) != 0 )
      {
        if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
          || (v18 = *(_DWORD *)(*((_QWORD *)this + 3) + 436LL), (v18 & 4) != 0)
          || (v19 = 8, (v18 & 8) != 0) )
        {
          v19 = 0;
        }
        v17 = v19 | v17 & 0xF7;
        *((_BYTE *)this + 40936) = v17;
      }
      if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
        *((_BYTE *)this + 40936) = v17 | 0x80;
    }
    v20 = 0;
    v99 = 0;
    v93 = 0;
    *((_BYTE *)this + 4640) = (v8[538] & 0x20) == 0;
    v21 = v8[539];
    v22 = 0;
    *((_BYTE *)this + 40937) ^= (*((_BYTE *)this + 40937) ^ (32 * (v21 >> 14))) & 0x20;
    if ( (_DWORD)v10 )
    {
      v92 = (UCHAR **)((char *)this + 52);
      v23 = 0LL;
      v24 = 0LL;
      v91.Data = (char *)this + 372;
      p_PagingBufferSegmentId = &a3->PagingBufferSegmentId;
      while ( 1 )
      {
        VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v20);
        v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *(_QWORD *)&DestinationString.Length = *(_QWORD *)(*((_QWORD *)this + 3) + 2680LL);
        GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(v26, v93);
        v29 = *((_QWORD *)this + 5028);
        v30 = GpuMmuCaps;
        *(_DWORD *)(v29 + v23 + 20) = v22;
        *(_DWORD *)(v29 + v23 + 24) = *(p_PagingBufferSegmentId - 4);
        v31 = *(p_PagingBufferSegmentId - 4);
        if ( v31 > 0x20 )
        {
          WdLogSingleEntry1(1LL, 1577LL);
          goto LABEL_84;
        }
        if ( *p_PagingBufferSegmentId > v31 )
          break;
        v22 += v31;
        v99 = v22;
        if ( v22 >= 0xFFFE )
        {
          WdLogSingleEntry1(1LL, 1589LL);
          goto LABEL_84;
        }
        v32 = v91.Data;
        v33 = *(_QWORD *)&DestinationString.Length;
        v34 = v92;
        *(_BYTE *)v92 = *(_BYTE *)p_PagingBufferSegmentId;
        *(v32 - 64) = p_PagingBufferSegmentId[1];
        *v32 = p_PagingBufferSegmentId[2];
        *(_BYTE *)(v29 + v23 + 436) ^= (*(_BYTE *)(v29 + v23 + 436) ^ (2 * *(_BYTE *)(v33 + v24 + 16))) & 2;
        LOBYTE(v33) = *(_BYTE *)(v29 + v23 + 436) ^ (*(_BYTE *)(v29 + v23 + 436) ^ (*(_DWORD *)(v33 + v24 + 16) >> 1)) & 1;
        *(_BYTE *)(v29 + v23 + 436) = v33;
        if ( (v33 & 3) != 0 )
        {
          ++*(_DWORD *)(v29 + v23 + 24);
          v35 = v22++;
          v99 = v22;
        }
        else
        {
          v35 = -1;
        }
        v36 = *(_DWORD *)(v29 + v23 + 24);
        *(_WORD *)(v29 + v23 + 28) = v35;
        *(_DWORD *)(v29 + v23 + 16) = (1 << v36) - 1;
        if ( v30 )
          *((_BYTE *)this + 40177) &= (*((_BYTE *)v30 + 20) & 1) == 0;
        v37 = *((_BYTE *)this + 40937);
        v20 = v28 + 1;
        v93 = v20;
        v23 += 1584LL;
        v91.Data = v32 + 1;
        p_PagingBufferSegmentId += 10;
        v92 = (UCHAR **)((char *)v34 + 1);
        v38 = *(_DWORD *)(*(_QWORD *)&DestinationString.Length + v24 + 16);
        v24 += 344LL;
        *((_BYTE *)this + 40937) = v37 ^ (v37 ^ (v37 | (16 * (v38 >> 5)))) & 0x10;
        if ( v20 >= (unsigned int)v10 )
          goto LABEL_32;
      }
      WdLogSingleEntry1(1LL, 1582LL);
      goto LABEL_84;
    }
LABEL_32:
    if ( dword_1C006E3D0 == 2 )
      v39 = (*(_DWORD *)(*((_QWORD *)this + 3) + 2140LL) & 4) != 0;
    else
      v39 = dword_1C006E3D0 == 1;
    *((_BYTE *)this + 7152) = v39;
    *((_QWORD *)this + 5577) = qword_1C006E4D8;
    VIDMM_GLOBAL::InitializePagingHistory(this, dword_1C006E38C);
    v40 = v22;
    *((_QWORD *)this + 878) = 0LL;
    v41 = 8LL * v22;
    v94 = v22;
    if ( !is_mul_ok(v22, 8uLL) )
      v41 = -1LL;
    v42 = operator new[](v41, 0x36306956u, 64LL);
    *((_QWORD *)this + 464) = v42;
    if ( v42 )
    {
      v43 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
      if ( v43 )
      {
        v44 = 0;
        if ( (_DWORD)v10 )
        {
          p_pSegmentDescriptor = &a3->pSegmentDescriptor;
          v92 = &a3->pSegmentDescriptor;
          while ( 1 )
          {
            v46 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
            v47 = *((_QWORD *)this + 5028) + 1584LL * v44;
            *(_OWORD *)(v47 + 496) = 0LL;
            *(_OWORD *)(v47 + 512) = 0LL;
            *(_OWORD *)(v47 + 528) = 0LL;
            inited = VIDMM_GLOBAL::InitSegments(this, v44, (struct VIDMM_PHYSICAL_ADAPTER *)v47, v46);
            VaAllocator = inited;
            if ( inited < 0 )
              break;
            LODWORD(v89) = v44;
            DestinationString = 0LL;
            v49 = *((_QWORD *)a2 + 2);
            LODWORD(Data) = *(_DWORD *)(v49 + 404);
            VaAllocator = RtlStringCbPrintfW(
                            v43,
                            0x208uLL,
                            L"luid_0x%08X_0x%08X_phys_%u",
                            *(unsigned int *)(v49 + 408),
                            Data,
                            v89);
            if ( VaAllocator < 0
              || (RtlInitUnicodeString(&DestinationString, v43),
                  v91.Data = (const void *)v47,
                  v91.Size = 1584,
                  VaAllocator = PcwCreateInstance(
                                  (PPCW_INSTANCE *)(v47 + 1576),
                                  GpuPerformanceCounterSetAdapterMemory,
                                  &DestinationString,
                                  1u,
                                  &v91),
                  VaAllocator < 0) )
            {
              WdLogSingleEntry0(1LL);
              DxgkLogInternalTriageEvent(v73, 0x40000LL);
              goto LABEL_44;
            }
            ++v44;
            p_pSegmentDescriptor = v92 + 5;
            v92 += 5;
            if ( v44 >= (unsigned int)v10 )
              goto LABEL_44;
          }
          WdLogSingleEntry1(3LL, inited);
LABEL_44:
          v22 = v99;
        }
        operator delete(v43);
        if ( VaAllocator < 0 )
          goto LABEL_123;
        v12 = (unsigned __int64)(*((_QWORD *)this + 5590) + qword_1C006E248) < *(_QWORD *)(*((_QWORD *)this + 3) + 2712LL);
        *((_DWORD *)this + 926) = v22;
        v50 = (*((_BYTE *)this + 40936) & 2) == 0;
        *((_BYTE *)this + 40176) = v12;
        if ( v50 )
          goto LABEL_61;
        if ( !dword_1C006E41C )
          goto LABEL_48;
        v74 = (unsigned int)dword_1C006E41C;
        v75 = 24LL * (unsigned int)dword_1C006E41C;
        if ( !is_mul_ok((unsigned int)dword_1C006E41C, 0x18uLL) )
          v75 = -1LL;
        v12 = __CFADD__(v75, 8LL);
        v76 = v75 + 8;
        if ( v12 )
          v76 = -1LL;
        v77 = (_QWORD *)operator new[](v76, 0x32356956u, 256LL);
        if ( v77 )
        {
          *v77 = v74;
          v78 = v77 + 1;
        }
        else
        {
          v78 = 0LL;
        }
        *((_QWORD *)this + 5123) = v78;
        if ( v78 )
        {
          v80 = 48LL * (unsigned int)dword_1C006E420;
          if ( !is_mul_ok((unsigned int)dword_1C006E420, 0x30uLL) )
            v80 = -1LL;
          v81 = operator new[](v80, 0x32356956u, 256LL);
          *((_QWORD *)this + 5128) = v81;
          if ( v81 )
          {
LABEL_48:
            *((_BYTE *)this + 40936) &= 0xBEu;
            v51 = 0;
            *((_DWORD *)this + 10233) = 0;
            LOBYTE(v52) = 0;
            if ( (_DWORD)v10 )
            {
              v53 = 0LL;
              do
              {
                v54 = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v51);
                v55 = (unsigned int *)(v53 + *((_QWORD *)this + 5028));
                v96 = v54;
                VaAllocator = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                                (VIDMM_PHYSICAL_ADAPTER *)v55,
                                this,
                                v51,
                                (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v55[5]),
                                v54,
                                v56,
                                v55[6]);
                if ( VaAllocator < 0 )
                  goto LABEL_123;
                v52 = v55[17];
                if ( v52 <= *((_DWORD *)this + 10233) )
                  LOBYTE(v52) = *((_DWORD *)this + 10233);
                else
                  *((_DWORD *)this + 10233) = v52;
                if ( v55[107] == 1 )
                  *((_BYTE *)this + 40936) |= 0x40u;
                if ( (*(_DWORD *)v96 & 0x40) != 0 )
                  *((_BYTE *)this + 40936) |= 1u;
                ++v51;
                v53 += 1584LL;
              }
              while ( v51 < (unsigned int)v10 );
            }
            if ( a4 < 0x5023 )
              v57 = 4096 << v52;
            else
              v57 = dword_1C006E424;
            *((_DWORD *)this + 10245) = v57;
            VaAllocator = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40384), this);
            if ( VaAllocator >= 0 )
            {
LABEL_61:
              KeInitializeTimer((PKTIMER)((char *)this + 44752));
              KeInitializeThreadedDpc((PRKDPC)((char *)this + 44824), (PKDEFERRED_ROUTINE)VidMmDelayedEvictionDpc, this);
              v58 = (VIDMM_WORKER_THREAD *)operator new(3608LL, 0x37346956u, 256LL);
              if ( v58 )
              {
                v59 = VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(v58, this);
                *(_QWORD *)this = v59;
                if ( v59 )
                {
                  VaAllocator = VIDMM_WORKER_THREAD::Init(v59, (struct _KEVENT **)this + 5544);
                  if ( VaAllocator >= 0 )
                  {
                    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                    v60 = VIDMM_PARTITION::_PartitionTree;
                    i = 0LL;
                    while ( v60 )
                    {
                      i = (VIDMM_PARTITION *)v60;
                      v60 = v60->Children[0];
                    }
                    while ( i )
                    {
                      v62 = VIDMM_PARTITION::EnsureAdapter(i, this);
                      VaAllocator = v62;
                      if ( v62 < 0 )
                      {
                        WdLogSingleEntry3(1LL, this, i, v62);
                        DxgkLogInternalTriageEvent(v82, 0x40000LL);
                        ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                        goto LABEL_123;
                      }
                      v63 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
                      v64 = i;
                      if ( v63 )
                      {
                        v68 = *v63;
                        for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v68; v68 = *(VIDMM_PARTITION **)v68 )
                          i = v68;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                          if ( !i || *(VIDMM_PARTITION **)i == v64 )
                            break;
                          v64 = i;
                        }
                      }
                    }
                    ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                    *((_QWORD *)this + 989) = MEMORY[0xFFFFF78000000014];
                    *((_QWORD *)this + 990) = MEMORY[0xFFFFF78000000014];
                    ExAcquirePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
                    v65 = (_QWORD *)qword_1C006E8F8;
                    v66 = (_QWORD *)((char *)this + 44736);
                    if ( *(struct _LIST_ENTRY **)qword_1C006E8F8 != &VIDMM_GLOBAL::_AdapterListHead )
                      __fastfail(3u);
                    *v66 = &VIDMM_GLOBAL::_AdapterListHead;
                    v66[1] = v65;
                    *v65 = v66;
                    qword_1C006E8F8 = (__int64)v66;
                    ExReleasePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
                    return (unsigned int)VaAllocator;
                  }
                  goto LABEL_122;
                }
              }
              else
              {
                *(_QWORD *)this = 0LL;
              }
              VaAllocator = -1073741801;
LABEL_122:
              WdLogSingleEntry1(1LL, 1843LL);
              DxgkLogInternalTriageEvent(v83, 0x40000LL);
            }
LABEL_123:
            v40 = v94;
            goto LABEL_124;
          }
          WdLogSingleEntry1(1LL, 1769LL);
        }
        else
        {
          WdLogSingleEntry1(1LL, 1762LL);
        }
        DxgkLogInternalTriageEvent(v79, 0x40000LL);
        VaAllocator = -1073741801;
        goto LABEL_123;
      }
      WdLogSingleEntry0(1LL);
      DxgkLogInternalTriageEvent(v72, 0x40000LL);
      VaAllocator = -1073741801;
    }
    else
    {
      _InterlockedIncrement(&dword_1C006E7B4);
      WdLogSingleEntry1(6LL, 1681LL);
      DxgkLogInternalTriageEvent(v71, 262145LL);
      VaAllocator = -1073741801;
    }
LABEL_124:
    v84 = (_QWORD *)*((_QWORD *)this + 464);
    if ( v84 )
    {
      v85 = 0LL;
      if ( v40 )
      {
        v86 = (_QWORD *)*((_QWORD *)this + 464);
        do
        {
          v87 = (void (__fastcall ***)(_QWORD, __int64))v84[v85];
          if ( v87 )
          {
            (**v87)(v84[v85], 1LL);
            v84 = (_QWORD *)*((_QWORD *)this + 464);
            v86 = v84;
          }
          ++v85;
        }
        while ( v85 < v40 );
        v84 = v86;
      }
      operator delete(v84);
      *((_QWORD *)this + 464) = 0LL;
    }
    VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
    operator delete(*((void **)this + 878));
    *((_QWORD *)this + 878) = 0LL;
    return (unsigned int)VaAllocator;
  }
  _InterlockedIncrement(&dword_1C006E77C);
  WdLogSingleEntry1(6LL, 1534LL);
  DxgkLogInternalTriageEvent(v70, 262145LL);
  return 3221225495LL;
}
