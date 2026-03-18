/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C00F2420
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00F1B00 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD *v10; // r8
  __int64 v11; // rcx
  int AllocationInfo; // ebx
  __int64 v13; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v15; // eax
  unsigned int v17; // [rsp+70h] [rbp+28h] BYREF
  int v18; // [rsp+78h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+38h] BYREF
  void *v20; // [rsp+88h] [rbp+40h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v17 = 0;
  v18 = 0;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( CurrentProcess != *v10 )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v9) + 24) = a2;
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &v19, &v20, &v17, &v18);
  if ( AllocationInfo >= 0 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v15 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &v20,
            0LL,
            &v19,
            0x1000000,
            v17);
    AllocationInfo = v15;
    if ( v15 < 0 )
      WdLogSingleEntry1(4LL, v15);
  }
  if ( AllocationInfo == -1071775472 && bTracingEnabled && (byte_1C006E941 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventPerformanceWarning, v13, 18);
  if ( v18 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)AllocationInfo;
}
