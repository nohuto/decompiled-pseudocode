/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00F2240
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00819F8 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00F1B00 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        __int64 a4)
{
  char v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int AllocationInfo; // ebx
  __int64 v14; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  _QWORD *v22; // rax
  void *v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+50h] [rbp-10h] BYREF
  int v26; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF

  v23 = 0LL;
  v4 = a4;
  v24 = 0LL;
  LODWORD(BaseAddress) = 0;
  v26 = 0;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != **((_QWORD **)this + 1) )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a3;
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a3, &v24, &v23, (unsigned int *)&BaseAddress, &v26);
  if ( AllocationInfo < 0 )
    goto LABEL_8;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v16 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, _DWORD))VirtualMemoryInterface)(
          -1LL,
          &v23,
          0LL,
          &v24,
          0x80000,
          (_DWORD)BaseAddress);
  AllocationInfo = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL, v16);
LABEL_8:
    if ( AllocationInfo == -1071775472 && bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventPerformanceWarning, v14, 18);
    goto LABEL_12;
  }
  VidMmiSetPriorityForMemoryPages(a2, v23, v24);
  if ( v4 )
  {
    if ( v26 )
      goto LABEL_13;
    BaseAddress = v23;
    NumberOfBytesToUnlock[0] = v24;
    v21 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
    if ( g_IsInternalReleaseOrDbg )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v18, v19, v20);
      v22[3] = BaseAddress;
      v22[4] = NumberOfBytesToUnlock[0];
      v22[5] = v21;
    }
  }
LABEL_12:
  if ( v26 )
LABEL_13:
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)AllocationInfo;
}
