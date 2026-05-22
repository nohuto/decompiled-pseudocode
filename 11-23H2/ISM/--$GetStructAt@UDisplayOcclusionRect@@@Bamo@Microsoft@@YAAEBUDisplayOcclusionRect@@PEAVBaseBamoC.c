/*
 * XREFs of ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x180149210
 * Callers:
 *     ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x180149930 (-OnInserted@OcclusionRectListProxy@@MEAAJI@Z.c)
 *     ?OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180149AD0 (-OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18014E5A4 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18014E6C0 (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v5);
  if ( v4 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a2[1] - *a2) >> 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v6);
  return *a2 + 176LL * (unsigned int)v4;
}
