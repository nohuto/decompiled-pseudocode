/*
 * XREFs of ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00FCF48
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00FBFE0 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0019964 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002C92C (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1C00F1794 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FreeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  struct _MDL *v2; // rbx
  unsigned __int64 LogicalAddress; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v8; // rax
  struct _MDL *v9; // rcx

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) )
  {
    v2 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 61), 0LL);
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
      LogicalAddress,
      v2,
      0);
    v4 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 61);
    if ( v4 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v4);
  }
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v5, v6);
    *((_QWORD *)this + 32) = 0LL;
  }
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
  {
    v9 = *(struct _MDL **)(v8 + 8);
    if ( v9 )
    {
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)this + 33) + 8LL), 0);
    }
    operator delete(*((void **)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
}
