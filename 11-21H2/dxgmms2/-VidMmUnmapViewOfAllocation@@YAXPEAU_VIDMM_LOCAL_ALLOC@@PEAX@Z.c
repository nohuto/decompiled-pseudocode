/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007BE50 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A8840 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A89E0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00E7BD0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E8520 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rdi
  struct _VIDMM_LOCAL_ALLOC *v4; // rsi
  __int64 v5; // r8
  int v6; // edx
  char v7; // al
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 68LL);
  if ( (v5 & 0x100) == 0 || (*(_DWORD *)(v2 + 72) & 0x80u) == 0 )
  {
    v6 = **(_DWORD **)(v2 + 528);
    if ( (v6 & 8) == 0 && (v6 & 0x20000) == 0 )
    {
      if ( (*(_BYTE *)(v2 + 76) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 68LL) & 0x100) == 0 )
      {
        LOBYTE(a1) = (v6 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & (*(_BYTE *)(v2 + 72) >= 0)) != 0 )
        {
          if ( (v6 & 0x20000000) != 0 )
          {
            v7 = *((_BYTE *)v4 + 32);
            if ( (v7 & 8) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)v4 + 32) = v7 & 0xF7;
            }
            else
            {
              CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
            }
            VidMmUnmapViewAsync(CurrentProcess, *(void **)(v2 + 376), a2);
          }
          else
          {
            v12 = -1;
            v13 = 0LL;
            if ( (qword_1C006E010 & 2) != 0 )
            {
              v14 = 1;
              v12 = 8003;
              if ( byte_1C006E941 < 0 )
                McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, v5, 8003);
            }
            else
            {
              v14 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry();
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL),
              *((_QWORD *)v4 + 3));
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
            if ( v14 && byte_1C006E941 < 0 )
              McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v12);
          }
        }
      }
      else
      {
        v11 = *(void **)(v2 + 384);
        if ( v11 )
        {
          MmUnmapViewInSystemSpace(v11);
          *(_DWORD *)(v2 + 72) &= ~0x1000000u;
          *(_QWORD *)(v2 + 384) = 0LL;
        }
      }
    }
  }
}
