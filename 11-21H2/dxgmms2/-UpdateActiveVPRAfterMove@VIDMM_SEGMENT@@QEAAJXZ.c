/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ED83C
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D84EC (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C002CBB0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C002EF60 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0032AA0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00EA1F0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00EF1A0 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  UINT v7; // eax
  UINT v8; // eax
  __int64 v9; // rcx
  SIZE_T v10; // rdx
  SIZE_T v11; // rax
  SIZE_T v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE v19[8]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp+17h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v22; // [rsp+70h] [rbp+1Fh] BYREF

  v2 = *((_QWORD *)this + 19);
  v3 = 0;
  v20 = 0LL;
  v4 = *((_QWORD *)this + 53);
  v5 = *((_QWORD *)this + 52);
  v19[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v2,
                       v5,
                       v4,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v20,
                       (__int64)v21,
                       (__int64)v19) == -1073741823 )
  {
    v6 = *((_QWORD *)this + 52);
    v20 = v6 & ~*((_QWORD *)this + 50);
    if ( v20 > v6 )
    {
      v7 = *((_DWORD *)this + 95);
      *(_QWORD *)&v22.VprIndex = 0LL;
      v22.PhysicalAdapterIndex = v7;
      v8 = VIDMM_SEGMENT::DriverId(this);
      v9 = *((_QWORD *)this + 1);
      v22.SegmentIndex = v8;
      v22.CurrentSize = *((_QWORD *)this + 54);
      v11 = *((_QWORD *)this + 53) - v10;
      v22.CurrentStartOffset = v12;
      v22.NewSize = v11;
      *((_QWORD *)this + 54) = v11;
      v22.NewStartOffset = v10;
      *((_QWORD *)this + 52) = v10;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v9 + 41104)) )
      {
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventPerformanceWarning, v14, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL, v14, v15);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v22);
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v16,
          v17,
          v22.PhysicalAdapterIndex,
          v22.SegmentIndex,
          v22.VprIndex,
          v22.NewStartOffset,
          v22.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      v3 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2800LL),
             &v22);
      if ( v3 < 0 && g_IsInternalRelease )
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
  }
  return (unsigned int)v3;
}
