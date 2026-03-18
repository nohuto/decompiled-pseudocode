/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00DC7D4
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C002D670 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0002C40 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0004DF0 (VidSchWaitForSingleSyncObject.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002D778 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00A6478 (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C00D7C1C (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00E3ADC (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00E3C64 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00E437C (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct VIDMM_COMPANION_CONTEXT *v7; // rbx
  struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *v8; // r13
  __int64 v10; // r12
  __int64 v11; // r11
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  VIDMM_GLOBAL *v14; // r10
  char *v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  UINT v18; // r15d
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v19; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  struct VIDMM_ALLOC *v31; // r9
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // r11
  D3DGPU_SIZE_T SizeInBytes; // r13
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 Value; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  char *v47; // rax
  struct VIDMM_VAD *v48; // r14
  struct VIDMM_VAD *v49; // r8
  char *v50; // rcx
  struct VIDMM_VAD *v51; // rax
  struct VIDMM_VAD **v52; // rdx
  char **v53; // rdx
  __int128 *v54; // rcx
  char *v55; // rbx
  bool v56; // zf
  __int64 v57; // rdx
  unsigned int *v58; // r9
  _QWORD *v59; // rsi
  unsigned int i; // r8d
  __int64 v61; // rax
  volatile signed __int32 *v62; // rax
  __int64 v63; // rcx
  char v64; // [rsp+60h] [rbp-A0h]
  __int128 v65; // [rsp+68h] [rbp-98h] BYREF
  int v66; // [rsp+78h] [rbp-88h]
  unsigned __int64 v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-48h]
  UINT64 DriverProtection; // [rsp+C0h] [rbp-40h]
  struct VIDMM_ALLOC *v77; // [rsp+C8h] [rbp-38h]
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v80; // [rsp+E0h] [rbp-20h]
  union _LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h]
  struct VIDMM_VAD *v83; // [rsp+F8h] [rbp-8h]
  PRKSEMAPHORE Semaphore; // [rsp+100h] [rbp+0h]
  char v85[8]; // [rsp+108h] [rbp+8h] BYREF
  DXGPUSHLOCK *v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+118h] [rbp+18h]
  _QWORD v88[18]; // [rsp+120h] [rbp+20h] BYREF
  bool v93; // [rsp+1F0h] [rbp+F0h]

  Timeout.QuadPart = 0LL;
  v7 = a3;
  v8 = a2;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    WdLogSingleEntry0(3LL);
    return 3223191810LL;
  }
  v10 = *(_QWORD *)v7;
  v11 = 0LL;
  v12 = *((_QWORD *)v7 + 1);
  v13 = -1LL;
  v14 = this;
  v15 = 0LL;
  v71 = v10;
  v16 = *(_QWORD *)(v10 + 16);
  v17 = *(_QWORD *)(v12 + 96);
  v70 = v16;
  v69 = -1073741811;
  v83 = 0LL;
  v66 = *(unsigned __int16 *)(v17 + 6);
  *((_QWORD *)&v65 + 1) = &v65;
  *(_QWORD *)&v65 = &v65;
  v80 = -1LL;
  v72 = 0LL;
  v74 = -1LL;
  v73 = 0LL;
  v64 = 0;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      1u,
      *(struct VIDMM_PROCESS **)(v10 + 96),
      (struct _VIDSCH_CONTEXT *)v12,
      v8->NumOperations,
      a6,
      v8->FenceValue);
    v14 = this;
    v11 = 0LL;
    v16 = v70;
  }
  v18 = 0;
  if ( !v8->NumOperations )
  {
LABEL_80:
    if ( (v8->Flags.Value & 1) == 0 )
    {
      *((_BYTE *)a6 + 25) = v11;
      v69 = VidSchWaitForSingleSyncObject(*((_QWORD *)v7 + 1), (__int64)a6, v8->FenceValue);
      if ( v69 < 0 )
      {
        WdLogSingleEntry1(1LL, 26163LL);
        DxgkLogInternalTriageEvent(v46, 0x40000LL);
        goto LABEL_107;
      }
    }
    v47 = (char *)operator new(184LL, 0x39346956u, 256LL);
    v15 = v47;
    if ( !v47 )
    {
      WdLogSingleEntry0(3LL);
      v15 = 0LL;
      goto LABEL_107;
    }
    memset(v47, 0, 0xB8uLL);
    *((_QWORD *)v15 + 13) = v15 + 96;
    *((_QWORD *)v15 + 12) = v15 + 96;
    *((_QWORD *)v15 + 7) = v15 + 48;
    *((_QWORD *)v15 + 6) = v15 + 48;
    *((_QWORD *)v15 + 1) = this;
    *((_DWORD *)v15 + 5) = v8->NumOperations;
    *((_QWORD *)v15 + 10) = v8->FenceValue + 1;
    *((_DWORD *)v15 + 4) = v66;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85, (struct _KTHREAD **)(v10 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v86);
    v87 = 2;
    v48 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v10, v13, v72);
    if ( !v48 )
    {
LABEL_85:
      WdLogSingleEntry0(3LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v85);
      goto LABEL_107;
    }
    if ( v64 )
    {
      v49 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v10, v74, v73);
      if ( !v49 )
        goto LABEL_85;
    }
    else
    {
      v49 = v83;
    }
    *((_QWORD *)v15 + 14) = v48;
    *((_QWORD *)v15 + 18) = v15 + 112;
    v50 = (char *)v48 + 80;
    *((_QWORD *)v15 + 15) = v49;
    *((_QWORD *)v15 + 21) = v15 + 120;
    v51 = (struct VIDMM_VAD *)(v15 + 128);
    v52 = (struct VIDMM_VAD **)*((_QWORD *)v48 + 11);
    if ( *v52 != (struct VIDMM_VAD *)((char *)v48 + 80) )
      goto LABEL_113;
    *(_QWORD *)v51 = v50;
    *((_QWORD *)v15 + 17) = v52;
    *v52 = v51;
    *((_QWORD *)v48 + 11) = v51;
    if ( v49 )
    {
      v53 = (char **)(v15 + 152);
      if ( *(char **)v51 != v50 )
        goto LABEL_113;
      *v53 = v50;
      *((_QWORD *)v15 + 20) = v51;
      *(_QWORD *)v51 = v53;
      *((_QWORD *)v48 + 11) = v53;
      v15[176] = 1;
    }
    v54 = (__int128 *)v65;
    v55 = v15;
    while ( v54 != &v65 )
    {
      v56 = *((_QWORD *)v54 + 9) == 0LL;
      *((_QWORD *)v54 - 1) = v48;
      if ( v56 )
      {
        v57 = *((_QWORD *)v48 + 12);
        if ( (struct VIDMM_VAD *)v57 != (struct VIDMM_VAD *)((char *)v48 + 96) )
          *((_QWORD *)v54 + 9) = *(_QWORD *)(v57 + 72);
      }
      v54 = *(__int128 **)v54;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v85);
    v58 = (unsigned int *)(v15 + 32);
    *((_QWORD *)v15 + 8) = a5;
    v59 = v15 + 96;
    *((_DWORD *)v55 + 8) = a4;
    *((_QWORD *)v55 + 3) = v8->Operations;
    v8->Operations = 0LL;
    *((_QWORD *)v55 + 9) = a6;
    *((_QWORD *)v55 + 11) = a3;
    *(_QWORD *)v55 = *((_QWORD *)a3 + 1);
    if ( (__int128 *)v65 == &v65 )
    {
      v59[1] = v59;
      *v59 = v59;
    }
    else
    {
      *(_OWORD *)v59 = v65;
      *(_QWORD *)(*v59 + 8LL) = v59;
      **((_QWORD **)v55 + 13) = v59;
    }
    *((_QWORD *)&v65 + 1) = &v65;
    *(_QWORD *)&v65 = &v65;
    _InterlockedIncrement((volatile signed __int32 *)a6 + 9);
    for ( i = 0; i < *v58; ++i )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v55 + 8) + 8LL * i) + 160LL));
    memset(v88, 0, 0x50uLL);
    v88[6] = v55;
    LODWORD(v88[5]) = 2;
    LODWORD(v88[0]) = 2;
    v88[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
    v61 = *((_QWORD *)a3 + 1);
    v88[4] = 0LL;
    VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v61 + 104) + 32LL), (__int64)v88);
    return 0LL;
  }
  while ( 1 )
  {
    v19 = &v8->Operations[(unsigned __int64)v18];
    OperationType = v19->OperationType;
    if ( v19->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      BaseAddress = v19->Map.BaseAddress;
      v22 = BaseAddress + v19->Map.SizeInBytes;
      v67 = v22;
      if ( *((_QWORD *)v14 + 5123) != v11 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v14,
          *(struct VIDMM_PROCESS **)(v71 + 96),
          *((struct _VIDSCH_CONTEXT **)v7 + 1),
          0LL,
          v19);
        v22 = v67;
      }
      if ( !IsRangeValid(BaseAddress, v22, v70) )
        goto LABEL_107;
      v23 = operator new(136LL, 0x39346956u, 256LL);
      if ( !v23
        || (v24 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    v23,
                    0LL,
                    BaseAddress,
                    v67,
                    v66,
                    0LL,
                    0LL,
                    (v19->Unmap.Protection.Value & 8) == 0 ? 6 : 0,
                    v19->Unmap.Protection.Value,
                    0LL,
                    0LL,
                    0LL)) == 0 )
      {
        WdLogSingleEntry1(3LL, 26079LL);
        goto LABEL_107;
      }
      v25 = (_QWORD *)*((_QWORD *)&v65 + 1);
      v26 = (_QWORD *)(v24 + 8);
      if ( **((__int128 ***)&v65 + 1) == &v65 )
      {
        v26[1] = *((_QWORD *)&v65 + 1);
        *v26 = &v65;
        *v25 = v26;
        *((_QWORD *)&v65 + 1) = v26;
        goto LABEL_57;
      }
LABEL_113:
      __fastfail(3u);
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      goto LABEL_73;
    BaseAddress = v19->Unmap.Protection.Value;
    v27 = BaseAddress + v19->Map.SizeInBytes;
    v67 = v27;
    if ( *((_QWORD *)v14 + 5123) != v11 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v14,
        *(struct VIDMM_PROCESS **)(v71 + 96),
        *((struct _VIDSCH_CONTEXT **)v7 + 1),
        0LL,
        v19);
      v27 = v67;
    }
    v28 = IsRangeValid(BaseAddress, v27, v70);
    v11 = 0LL;
    if ( !v28 )
      goto LABEL_107;
    v29 = v19->Map.BaseAddress;
    v30 = v29 + v19->Map.SizeInBytes;
    if ( v30 <= v29 )
    {
      v36 = 26104LL;
      goto LABEL_78;
    }
    if ( (v29 & 0xFFF) != 0 || (v30 & 0xFFF) != 0 )
    {
      v36 = 26109LL;
      goto LABEL_78;
    }
    if ( BaseAddress < v30 && v67 > v29 )
    {
      v36 = 26115LL;
      goto LABEL_78;
    }
    v64 = 1;
    if ( v74 <= v29 )
      v29 = v74;
    v74 = v29;
    if ( v73 >= v30 )
      v30 = v73;
    v73 = v30;
LABEL_57:
    v14 = this;
LABEL_58:
    if ( v67 <= BaseAddress )
    {
LABEL_73:
      v36 = 26135LL;
      goto LABEL_78;
    }
    if ( ((BaseAddress | v67) & 0xFFF) != 0 )
    {
      v36 = 26140LL;
      goto LABEL_78;
    }
    v13 = v80;
    v45 = v72;
    if ( v80 > BaseAddress )
      v13 = BaseAddress;
    v80 = v13;
    if ( v72 < v67 )
      v45 = v67;
    ++v18;
    v72 = v45;
    if ( v18 >= v8->NumOperations )
    {
      v10 = v71;
      goto LABEL_80;
    }
    v16 = v70;
  }
  BaseAddress = v19->Map.BaseAddress;
  v67 = BaseAddress + v19->Map.SizeInBytes;
  if ( !IsRangeValid(BaseAddress, v67, v16) )
    goto LABEL_107;
  v14 = this;
  v31 = a5[v19->Map.hAllocation];
  v77 = v31;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      this,
      *(struct VIDMM_PROCESS **)(v71 + 96),
      *((struct _VIDSCH_CONTEXT **)v7 + 1),
      v31,
      v19);
    v14 = this;
    v31 = v77;
  }
  AllocationSizeInBytes = v19->Map.AllocationSizeInBytes;
  if ( (AllocationSizeInBytes & 0xFFF) == 0 )
  {
    AllocationOffsetInBytes = v19->Map.AllocationOffsetInBytes;
    v75 = AllocationOffsetInBytes;
    if ( (AllocationOffsetInBytes & 0xFFF) == 0 )
    {
      SizeInBytes = v19->Map.SizeInBytes;
      if ( AllocationSizeInBytes )
      {
        if ( AllocationSizeInBytes > SizeInBytes )
        {
          WdLogSingleEntry1(3LL, v18);
          goto LABEL_107;
        }
        if ( SizeInBytes % AllocationSizeInBytes )
        {
          v36 = 25976LL;
          goto LABEL_78;
        }
      }
      else
      {
        v19->Map.AllocationSizeInBytes = SizeInBytes;
        AllocationSizeInBytes = SizeInBytes;
      }
      if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
        || AllocationSizeInBytes + AllocationOffsetInBytes > *(_QWORD *)(**(_QWORD **)v31 + 16LL) )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)(**(_QWORD **)v31 + 16LL), v18, 25987LL);
        goto LABEL_107;
      }
      if ( (*((_BYTE *)v14 + 40937) & 4) != 0 )
      {
        LODWORD(v35) = 1;
        v79 = 1LL;
        v93 = SizeInBytes != AllocationSizeInBytes;
        v11 = 0LL;
      }
      else
      {
        v35 = SizeInBytes / AllocationSizeInBytes;
        v11 = 0LL;
        v79 = v35;
        SizeInBytes = AllocationSizeInBytes;
        v93 = 0;
        v75 = 0LL;
        if ( v35 >= 0xFFFFFFFF )
        {
          v36 = 26010LL;
          goto LABEL_78;
        }
      }
      v37 = BaseAddress;
      DriverProtection = 0LL;
      v78 = BaseAddress;
      if ( v19->OperationType )
      {
        Value = v19->MapProtect.Protection.Value;
        DriverProtection = v19->MapProtect.DriverProtection;
      }
      else
      {
        Value = 1LL;
      }
      v68 = 0;
      if ( (_DWORD)v35 )
      {
        while ( 1 )
        {
          v82 = v37 + SizeInBytes;
          v39 = operator new(136LL, 0x39346956u, 256LL);
          if ( !v39 )
            break;
          v40 = v93 ? v19->Map.AllocationSizeInBytes >> 12 : 0LL;
          v41 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  v39,
                  0LL,
                  v78,
                  v82,
                  v66,
                  (__int64)v77,
                  v19->Map.AllocationOffsetInBytes,
                  1,
                  Value,
                  DriverProtection,
                  v40,
                  v75);
          if ( !v41 )
            break;
          v43 = (_QWORD *)*((_QWORD *)&v65 + 1);
          v44 = (_QWORD *)(v41 + 8);
          if ( **((__int128 ***)&v65 + 1) != &v65 )
            goto LABEL_113;
          v44[1] = *((_QWORD *)&v65 + 1);
          *v44 = &v65;
          *v43 = v44;
          v37 = v42;
          *((_QWORD *)&v65 + 1) = v44;
          v78 = v42;
          if ( ++v68 >= (unsigned int)v79 )
          {
            v8 = a2;
            v7 = a3;
            goto LABEL_57;
          }
        }
        WdLogSingleEntry1(3LL, 26043LL);
        goto LABEL_107;
      }
      v8 = a2;
      v7 = a3;
      goto LABEL_58;
    }
  }
  v36 = 25953LL;
LABEL_78:
  WdLogSingleEntry2(3LL, v18, v36);
LABEL_107:
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v15 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v15);
  while ( 1 )
  {
    v62 = (volatile signed __int32 *)v65;
    if ( (__int128 *)v65 == &v65 )
      return (unsigned int)v69;
    if ( *(__int128 **)(v65 + 8) != &v65 )
      goto LABEL_113;
    v63 = *(_QWORD *)v65;
    if ( *(_QWORD *)(*(_QWORD *)v65 + 8LL) != (_QWORD)v65 )
      goto LABEL_113;
    *(_QWORD *)&v65 = *(_QWORD *)v65;
    *(_QWORD *)(v63 + 8) = &v65;
    *((_QWORD *)v62 + 1) = 0LL;
    *(_QWORD *)v62 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v62 - 2);
  }
}
