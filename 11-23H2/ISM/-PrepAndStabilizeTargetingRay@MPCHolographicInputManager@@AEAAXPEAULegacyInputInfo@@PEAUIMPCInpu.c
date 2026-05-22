/*
 * XREFs of ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x1800B6EA0
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3174 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace@AEAPEAULegacyInputInfo@@@.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3224 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputI.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B32D4 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization@AEAPEAULegacyInputIn.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x1800B8440 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 */

void __fastcall MPCHolographicInputManager::PrepAndStabilizeTargetingRay(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3)
{
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct LegacyInputInfo *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_DWORD *)a2 + 20) = *((_DWORD *)a2 + 1);
  *((_BYTE *)a2 + 144) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  *((_BYTE *)a2 + 88) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 352LL))(a3);
  *((_BYTE *)a2 + 312) = 0;
  *((_BYTE *)a2 + 240) = 0;
  *((_DWORD *)a2 + 68) = 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 64LL))(
    a3,
    this,
    a2);
  *((_QWORD *)a2 + 113) = *(_QWORD *)this;
  *((_QWORD *)a2 + 114) = *((_QWORD *)this + 1);
  *((_OWORD *)a2 + 11) = *((_OWORD *)a2 + 180);
  *((_OWORD *)a2 + 12) = *((_OWORD *)a2 + 181);
  *((_OWORD *)a2 + 13) = *((_OWORD *)a2 + 182);
  *((_OWORD *)a2 + 14) = *((_OWORD *)a2 + 183);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 113);
  *((_QWORD *)a2 + 20) = *((_QWORD *)a2 + 114);
  *((_QWORD *)a2 + 21) = *((_QWORD *)a2 + 115);
  ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization<LegacyInputInfo * &>(&v8);
  if ( !*((_BYTE *)a2 + 48) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v6);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 144LL))(a3, a2);
  ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization<LegacyInputInfo * &>(&v8);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 344LL))(a3, a2);
  MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct LegacyInputInfo *)((char *)a2 + 120));
  ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace<LegacyInputInfo * &>(&v8);
}
