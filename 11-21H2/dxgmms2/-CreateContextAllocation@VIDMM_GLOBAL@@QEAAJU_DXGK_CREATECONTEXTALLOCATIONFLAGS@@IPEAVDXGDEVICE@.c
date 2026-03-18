/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0017C90 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     VidSchInsertContextAllocation @ 0x1C00A58F4 (VidSchInsertContextAllocation.c)
 *     VidSchRemoveContextAllocation @ 0x1C00A6658 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a2,
        unsigned int a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  int v14; // r13d
  unsigned int v15; // r11d
  void *v18; // r14
  struct VIDMM_DEVICE *v19; // r12
  int v20; // r14d
  unsigned __int8 v21; // r8
  char v22; // dl
  bool v23; // zf
  int v24; // ecx
  int OneAllocation; // esi
  __int64 v26; // r9
  struct VIDMM_DEVICE *v27; // r15
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned int v29; // r8d
  __int64 v30; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct VIDMM_ALLOC *v36; // [rsp+A8h] [rbp-59h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v37; // [rsp+B0h] [rbp-51h] BYREF
  _QWORD v38[16]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned int v40; // [rsp+158h] [rbp+57h]
  void *v41; // [rsp+160h] [rbp+5Fh] BYREF

  v40 = a3;
  v14 = (int)a4;
  v37 = 0LL;
  v15 = a3;
  v36 = 0LL;
  v41 = 0LL;
  v18 = 0LL;
  if ( !a4 )
  {
    v27 = 0LL;
    goto LABEL_34;
  }
  v19 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 95);
  if ( (*(_DWORD *)(*((_QWORD *)a4 + 5) + 424LL) & 2) != 0 )
  {
    v27 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 95);
LABEL_34:
    WdLogSingleEntry1(1LL, 2106LL);
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    OneAllocation = -1073741811;
LABEL_35:
    if ( v18 )
      VidSchRemoveContextAllocation(v18);
    goto LABEL_21;
  }
  v20 = (int)a5;
  v21 = *(_BYTE *)&a2.0 & 1;
  if ( (*(_BYTE *)&a2.0 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_8;
    WdLogSingleEntry1(1LL, 2120LL);
LABEL_20:
    DxgkLogInternalTriageEvent(v32, 0x40000LL);
    OneAllocation = -1073741811;
    v27 = v19;
    goto LABEL_21;
  }
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 2113LL);
    goto LABEL_20;
  }
  v22 = -1;
  v23 = !_BitScanForward((unsigned int *)&v24, *((_DWORD *)a5 + 99));
  a4 = a5;
  a12.0 = 0;
  if ( !v23 )
    v22 = v24;
  v15 = v22;
  v40 = v22;
LABEL_8:
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    this,
                    (__int64)v19,
                    v15,
                    a7,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11.Value,
                    (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a13.0,
                    0,
                    0LL,
                    0LL,
                    (__int64)a6,
                    -1610612736,
                    v21,
                    (__int64)a4,
                    0,
                    0LL,
                    (__int64 *)&v37);
  v27 = v19;
  if ( OneAllocation >= 0 )
  {
    *(_BYTE *)&a12.0 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      this,
                      v19,
                      (struct VIDMM_ALLOC ***)v37,
                      0LL,
                      0,
                      0LL,
                      &v36,
                      (unsigned __int8 *)&a12);
    if ( OneAllocation >= 0 )
    {
      OneAllocation = VidSchInsertContextAllocation(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 632LL),
                        v14,
                        v20,
                        (_DWORD)v36,
                        (__int64)&v41);
      if ( OneAllocation < 0 )
      {
        v18 = v41;
        WdLogSingleEntry1(1LL, v41);
      }
      else
      {
        if ( (*(_BYTE *)&a2.0 & 2) != 0 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(*(_QWORD *)v36 + 8LL),
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      v40);
          if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
                  VirtualAddressAllocator,
                  v30,
                  0LL,
                  1u,
                  *((_QWORD *)v37 + 2),
                  0LL,
                  0LL,
                  0LL,
                  *((_DWORD *)v37 + 8),
                  (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                  0LL,
                  v29,
                  0LL,
                  0) )
          {
            v18 = v41;
            WdLogSingleEntry2(1LL, v41, 2219LL);
            DxgkLogInternalTriageEvent(v34, 0x40000LL);
            OneAllocation = -1073741801;
            goto LABEL_29;
          }
        }
        memset(v38, 0, 0x50uLL);
        v38[2] = v36;
        LODWORD(v38[0]) = 209;
        LODWORD(v38[4]) = a2;
        OneAllocation = VIDMM_GLOBAL::QueueDeferredCommand(
                          this,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v36 + 1) + 80LL)
                                                      + 176LL * (*((_DWORD *)v37 + 17) & 0x3F)),
                          (struct _VIDMM_DEFERRED_COMMAND *)v38,
                          1,
                          0LL);
        if ( OneAllocation >= 0 )
        {
          *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v41;
          return (unsigned int)OneAllocation;
        }
        if ( OneAllocation == -1071775232 )
        {
          v18 = v41;
          WdLogSingleEntry2(3LL, v41, 2235LL);
          goto LABEL_29;
        }
        v18 = v41;
        WdLogSingleEntry2(1LL, v41, 2239LL);
      }
      DxgkLogInternalTriageEvent(v33, 0x40000LL);
LABEL_29:
      v27 = v19;
      goto LABEL_35;
    }
  }
LABEL_21:
  if ( v36 )
    VIDMM_GLOBAL::CloseOneAllocation(
      this,
      (struct _KEVENT *)v36,
      0LL,
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
  if ( v37 )
  {
    LOBYTE(v26) = 1;
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)this, v27, v37, v26);
  }
  *a14 = 0LL;
  return (unsigned int)OneAllocation;
}
