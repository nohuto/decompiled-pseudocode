/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C00BA500
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BA340 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C0005FF0 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0019964 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002C8EC (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1C00F1734 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int LogicalMemory; // edi
  __int64 v5; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _MDL *v10; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v12; // eax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v13; // rdx

  v2 = operator new(24LL, 0x35336956u, 256LL);
  *((_QWORD *)this + 33) = v2;
  if ( v2 )
  {
    *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) = MmAllocatePagesForMdl(
                                                  0LL,
                                                  *(PHYSICAL_ADDRESS *)((char *)this + 120),
                                                  0LL,
                                                  0x10000uLL);
    v5 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    if ( v5 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v7 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))VirtualMemoryInterface + 5))(v5, 0LL, 2LL);
      *((_QWORD *)this + 32) = v7;
      if ( v7 )
      {
        v8 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v8 + 40179) )
        {
          if ( *(_BYTE *)(v8 + 40180) )
          {
            LogicalMemory = SysMmAllocateLogicalMemory(
                              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v8 + 24) + 224LL),
                              0x10000LL,
                              *((const void **)this + 33),
                              (void **)this + 61);
            if ( LogicalMemory < 0 )
            {
              _InterlockedIncrement(&dword_1C0076850);
              WdLogSingleEntry1(6LL, 855LL);
              DxgkLogInternalTriageEvent(v9, 262145LL);
              goto LABEL_14;
            }
          }
          v10 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
          LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 61), 0LL);
          v12 = SysMmMapIommuRange(
                  *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
                  LogicalAddress,
                  v10,
                  0);
          LogicalMemory = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry2(3LL, this, v12);
            goto LABEL_14;
          }
        }
        return 0LL;
      }
      _InterlockedIncrement(&dword_1C0076850);
      WdLogSingleEntry1(6LL, 832LL);
    }
    else
    {
      _InterlockedIncrement(&dword_1C0076820);
      WdLogSingleEntry1(6LL, 817LL);
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0076854);
    WdLogSingleEntry1(6LL, 802LL);
  }
  DxgkLogInternalTriageEvent(v3, 262145LL);
  LogicalMemory = -1073741801;
LABEL_14:
  v13 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 61);
  if ( v13 )
  {
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v13);
    *((_QWORD *)this + 61) = 0LL;
  }
  return (unsigned int)LogicalMemory;
}
