/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00F2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        void *a3,
        __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  void *v12; // rbx
  struct _EPROCESS *v13; // rax
  __int64 v14; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v11 = (_QWORD *)*((_QWORD *)this + 1);
  if ( CurrentProcess != *v11 )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v12 = (void *)a2[4];
    v13 = (struct _EPROCESS *)PsGetCurrentProcess(v11, v8, v9, v10);
    VidMmUnmapViewAsync(v13, v12, a3);
  }
  else
  {
    v14 = PsGetCurrentProcess(v11, v8, v9, v10);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v14, a3);
  }
}
