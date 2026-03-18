/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C008F9EC
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C008F734 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0003968 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000481C (RtlStringCbPrintfW.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0004C40 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0005468 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005F38 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005FB8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C008DFB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C008F390 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C008FE4C (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C0091170 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009DDA0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2)
{
  unsigned __int64 v2; // rbp
  int v5; // r13d
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int8 v14; // r9
  char *v15; // rdi
  _QWORD *v16; // r15
  CVirtualAddressAllocator *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  bool v23; // zf
  wchar_t *v24; // r14
  unsigned int v25; // ebp
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v26; // r15d
  __int64 v27; // r13
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v29; // rax
  struct VIDMM_PARTITION **v30; // r15
  NTSTATUS v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  CVirtualAddressAllocator *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  __int64 v46; // [rsp+30h] [rbp-78h]
  struct _PCW_DATA v47; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  NTSTATUS v50; // [rsp+B8h] [rbp+10h]
  wchar_t *pszDest; // [rsp+C0h] [rbp+18h]

  v2 = *((unsigned int *)a2 + 926);
  v5 = 0;
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(2760LL, 0x33316956u, 256LL);
  if ( !v6 || (v7 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6), (v8 = v7) == 0LL) )
  {
    _InterlockedAdd(&dword_1C00767EC, 1u);
    WdLogSingleEntry1(6LL, 648LL);
    DxgkLogInternalTriageEvent(v43, 262145LL);
    return 0LL;
  }
  *((_DWORD *)v7 + 3) = v2;
  v9 = 184 * v2;
  v10 = (unsigned int)v2;
  if ( !is_mul_ok(v2, 0xB8uLL) )
    v9 = -1LL;
  v11 = (char *)operator new[](v9, 0x34316956u, 256LL);
  v15 = v11;
  if ( v11 )
    `vector constructor iterator'(
      v11,
      184LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v15 = 0LL;
  v16 = (_QWORD *)((char *)v8 + 16);
  *((_QWORD *)v8 + 2) = v15;
  if ( !v15 )
  {
    _InterlockedAdd(&dword_1C00767F0, 1u);
    WdLogSingleEntry1(6LL, 661LL);
    v40 = 262145LL;
LABEL_43:
    DxgkLogInternalTriageEvent(v39, v40);
    goto LABEL_44;
  }
  if ( (*((_BYTE *)a2 + 40936) & 4) != 0 && ((_DWORD)this[12] & 2) == 0 )
  {
    v17 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    if ( v17 )
      v17 = CVirtualAddressAllocator::CVirtualAddressAllocator(v17);
    *((_QWORD *)v8 + 63) = v17;
    if ( v17 )
    {
      if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                  v17,
                  1LL << *((_DWORD *)a2 + 10232),
                  *((_DWORD *)a2 + 10245),
                  a2,
                  (struct VIDMM_PROCESS *)this) >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(1LL, 682LL);
    }
    else
    {
      WdLogSingleEntry1(1LL, 670LL);
    }
LABEL_42:
    v40 = 0x40000LL;
    goto LABEL_43;
  }
LABEL_14:
  if ( (_DWORD)v2 )
  {
    v18 = 0LL;
    v19 = 0LL;
    do
    {
      *(_QWORD *)(v18 + *v16) = this;
      *(_DWORD *)(v18 + *v16 + 8) = 0;
      *(_QWORD *)(v18 + *v16 + 16) = 0LL;
      *(_DWORD *)(v18 + *v16 + 168) = *(_DWORD *)(v18 + *v16 + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v18 + *v16 + 24) = 0LL;
      *(_QWORD *)(v18 + *v16 + 32) = 0LL;
      v20 = (_QWORD *)(v18 + *v16 + 40LL);
      v20[1] = v20;
      *v20 = v20;
      memset((void *)(v19 + *v16 + 56LL), 0, 0x70uLL);
      v19 += 184LL;
      v18 += 184LL;
      --v10;
    }
    while ( v10 );
    v5 = 0;
  }
  v21 = *((unsigned int *)a2 + 1754);
  if ( (unsigned int)v21 > 1 )
  {
    v12 = 0xFFFFFFFFFFFFFFFFuLL % v21;
    v13 = *((unsigned int *)a2 + 1754);
    if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 0x128 )
      goto LABEL_44;
    *((_QWORD *)v8 + 6) = ExAllocatePool2(256LL, 296 * v21, 1265072196LL);
    v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
    *((_QWORD *)v8 + 6) = (char *)v8 + 56;
    if ( (_DWORD)v21 )
      memset((char *)v8 + 56, 0, 296 * v21);
  }
  v23 = *((_QWORD *)v8 + 6) == 0LL;
  *((_DWORD *)v8 + 88) = v21;
  if ( v23 )
  {
LABEL_44:
    v41 = (CVirtualAddressAllocator *)*((_QWORD *)v8 + 63);
    if ( v41 )
      CVirtualAddressAllocator::DestroyVaAllocator(v41, v12, v13, v14);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v8);
    return 0LL;
  }
  pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  v24 = pszDest;
  if ( !pszDest )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_42;
  }
  v25 = 0;
  if ( *((_DWORD *)a2 + 1754) )
  {
    while ( 1 )
    {
      v26 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v27 = *((_QWORD *)v8 + 6) + 296LL * v25;
      *(_QWORD *)(v27 + 16) = v8;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v25, v26++, this[36]);
        v22 += 8LL;
        *(_QWORD *)(v22 + v27 + 16) = *((_QWORD *)SegmentGroupState + 4);
      }
      while ( v26 < 2 );
      v29 = *((_QWORD *)a2 + 3);
      v30 = this;
      v24 = pszDest;
      DestinationString = 0LL;
      LODWORD(v46) = v25;
      LODWORD(v45) = *(_DWORD *)(v29 + 404);
      LODWORD(Data) = *(_DWORD *)(v29 + 408);
      v22 = 0LL;
      v50 = RtlStringCbPrintfW(
              pszDest,
              0x208uLL,
              L"pid_%u_luid_0x%08X_0x%08X_phys_%u",
              *((unsigned int *)this + 2),
              Data,
              v45,
              v46);
      if ( v50 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v47.Data = (const void *)v27;
      v47.Size = 296;
      v31 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v27 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v47);
      v50 = v31;
      if ( v31 < 0 )
        break;
      if ( ++v25 >= *((_DWORD *)a2 + 1754) )
      {
        v5 = v31;
        goto LABEL_30;
      }
    }
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v42, 0x40000LL);
    v5 = v50;
  }
  else
  {
    v30 = this;
  }
LABEL_30:
  operator delete(v24);
  if ( v5 < 0 )
    goto LABEL_44;
  v32 = *((_DWORD *)v8 + 118);
  if ( dword_1C0076348 )
    v33 = v32 & 0xFFFFFFFE;
  else
    v33 = v32 | 1;
  *((_DWORD *)v8 + 118) = v33 | 6;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0 )
  {
    *((_DWORD *)v8 + 121) = 1;
  }
  *(_QWORD *)v8 = a2;
  *((_DWORD *)v8 + 2) = 1;
  *((_QWORD *)v8 + 5) = v30;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41072));
  v34 = (_QWORD *)((char *)a2 + 41120);
  v35 = *((_QWORD *)a2 + 5140);
  v36 = (_QWORD *)((char *)v8 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v35 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41120) )
    __fastfail(3u);
  *v36 = v35;
  *((_QWORD *)v8 + 4) = v34;
  *(_QWORD *)(v35 + 8) = v36;
  *v34 = v36;
  v37 = *((_QWORD *)a2 + 5592);
  *((_QWORD *)a2 + 5592) = v37 + 1;
  *((_QWORD *)v8 + 65) = v37;
  *((_QWORD *)a2 + 5135) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41072, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v8;
}
