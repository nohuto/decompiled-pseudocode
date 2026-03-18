/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00A0F44
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A0E24 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00A3E50 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = *((_QWORD *)this + 27);
  if ( v3 < v3 - a3 )
  {
    WdLogSingleEntry1(1LL, 290LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    v3 = *((_QWORD *)this + 27);
  }
  v7 = *((unsigned int *)this + 95);
  v8 = *((_QWORD *)this + 1);
  v9 = *((int *)this + 119);
  *((_QWORD *)this + 27) = v3 - a3;
  v10 = *(_QWORD *)(v8 + 40224);
  if ( (*(_BYTE *)(v10 + 24 * (v9 + 66 * v7) + 512) & 1) != 0 )
    v11 = *(_QWORD *)(376LL * *(unsigned int *)(*(_QWORD *)(v8 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 336 * v7;
  else
    v11 = 336 * v9 + 544 + v10 + 1584 * v7;
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 < v12 - a3 )
  {
    WdLogSingleEntry1(1LL, 297LL);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    v12 = *(_QWORD *)(v11 + 120);
  }
  *(_QWORD *)(v11 + 120) = v12 - a3;
}
