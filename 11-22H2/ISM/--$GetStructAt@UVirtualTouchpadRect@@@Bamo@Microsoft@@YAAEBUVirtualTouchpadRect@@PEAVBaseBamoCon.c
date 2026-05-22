/*
 * XREFs of ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x1801588E8
 * Callers:
 *     ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x180158E20 (-OnInserted@TouchpadRectListProxy@@MEAAJI@Z.c)
 *     ?OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180159010 (-OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x18015CE0C (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18015CF1C (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v5);
  if ( v4 >= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2[1] - *a2) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v6);
  return *a2 + 24 * v4;
}
