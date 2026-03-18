/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00A1478
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C009FDA0 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00A136C (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z @ 0x1C0014D7C (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  VIDMM_GLOBAL *v4; // rbx
  unsigned int v5; // r11d
  struct VIDMM_DEVICE *v6; // r15
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  char v11; // al
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v12; // r9d
  unsigned int v13; // r10d
  char v14; // r11
  unsigned int v15; // ecx
  struct VIDMM_ALLOC ****v16; // rsi
  int OneAllocation; // r14d
  PRKPROCESS *v18; // rcx
  int v19; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int8 v23[8]; // [rsp+A0h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v4 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v5 = *(_DWORD *)this;
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 13);
  v8 = a3;
  v10 = *((_QWORD *)v4 + 5028) + 1584LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v23[0] = 0;
  v11 = VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(v4, (v5 >> 7) & 0x1F, a4);
  v15 = *(_DWORD *)(v10 + 48LL * (v14 & 7) + 100);
  v16 = (struct VIDMM_ALLOC ****)((char *)this + 16);
  if ( !v15 )
    v15 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v4,
                    (__int64)v6,
                    v13,
                    v8,
                    v8,
                    v15,
                    1 << v11,
                    0,
                    0,
                    v12,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    1u,
                    0LL,
                    (__int64 *)this + 2);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C006E758);
    WdLogSingleEntry1(6LL, 4083LL);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 36) & 4) != 0 )
      *((_DWORD *)*v16 + 17) |= 0x200u;
    v18 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v18, &ApcState);
    v19 = VIDMM_GLOBAL::OpenOneAllocation(v4, v6, *v16, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)this + 3, v23);
    KeUnstackDetachProcess(&ApcState);
    if ( v19 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E75C);
      WdLogSingleEntry1(6LL, 4113LL);
      DxgkLogInternalTriageEvent(v22, 262145LL);
      return (unsigned int)v19;
    }
    else
    {
      return 0LL;
    }
  }
}
