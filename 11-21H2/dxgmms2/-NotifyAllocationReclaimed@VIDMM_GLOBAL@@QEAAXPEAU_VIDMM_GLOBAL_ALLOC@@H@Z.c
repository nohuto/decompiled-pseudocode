/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00D8948
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6C0C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C00D8920 (-NotifyAllocationReclaimed@@YAXPEAX@Z.c)
 *     ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00EC44C (-ReclaimAllocationForVPRCallback@@YAEPEAX0@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00ED69C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  char *v7; // rdx
  __int64 v8; // rax
  char *v9; // rax
  char **v10; // rcx

  v4 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 15) + 32LL))(
    *((_QWORD *)a2 + 15),
    a2,
    v4);
  v7 = (char *)a2 + 344;
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = 0LL;
  v8 = *((_QWORD *)a2 + 15);
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  if ( (*(_DWORD *)(v8 + 80) & 0x1001) != 0 )
    v9 = (char *)this + 3736;
  else
    v9 = (char *)this + 3752;
  v10 = (char **)*((_QWORD *)v9 + 1);
  if ( *v10 != v9 )
    __fastfail(3u);
  *(_QWORD *)v7 = v9;
  *((_QWORD *)a2 + 44) = v10;
  *v10 = v7;
  *((_QWORD *)v9 + 1) = v7;
}
