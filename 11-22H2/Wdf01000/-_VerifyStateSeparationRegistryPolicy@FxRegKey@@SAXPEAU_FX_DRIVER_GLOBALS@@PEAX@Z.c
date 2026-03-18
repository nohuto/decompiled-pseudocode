/*
 * XREFs of ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004E4D4
 * Callers:
 *     imp_WdfRegistryAssignMemory @ 0x1C004A310 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C004A530 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C004A7B0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C004A8F0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C004A9F0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryAssignValue @ 0x1C004ABC0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryCreateKey @ 0x1C004ACD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C004AF50 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryRemoveKey @ 0x1C004BE70 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C004BF00 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_Z @ 0x1C0045150 (WPP_IFR_SF_Z.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C004E150 (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ?_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z @ 0x1C004E3E4 (-_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z.c)
 */

void __fastcall FxRegKey::_VerifyStateSeparationRegistryPolicy(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  FX_POOL_TRACKER *v2; // rdi
  wchar_t *v3; // r14
  FxDriverGlobalsDebugExtension *DebugExtension; // r15
  ULONG Tag; // ecx
  void *v8; // rax
  unsigned int v9; // ecx
  ULONG v10; // edx
  void *v11; // rax
  FX_POOL **v12; // rax
  unsigned __int8 isAffectedByPolicy; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 isViolation; // [rsp+31h] [rbp-3Fh] BYREF
  unsigned int keyNameInfoSize[3]; // [rsp+34h] [rbp-3Ch] BYREF
  __m128i v16; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING keyPath; // [rsp+50h] [rbp-20h] BYREF
  _KEY_NAME_INFORMATION emptyKeyNameInfo; // [rsp+60h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  emptyKeyNameInfo = 0LL;
  v2 = 0LL;
  keyNameInfoSize[0] = 0;
  v3 = 0LL;
  isAffectedByPolicy = 0;
  isViolation = 0;
  keyPath = 0LL;
  if ( FxDriverGlobals )
  {
    if ( Key )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        DebugExtension = FxDriverGlobals->DebugExtension;
        if ( DebugExtension )
        {
          if ( DebugExtension->StateSeparationDetection
            && (int)FxRegKey::_IsAffectedByStateSeparationRegistryPolicy(FxDriverGlobals, Key, &isAffectedByPolicy) >= 0
            && isAffectedByPolicy
            && FxRegKey::_IsStateSeparationRegistryViolation(Key, (bool *)&isViolation) >= 0
            && isViolation )
          {
            if ( ZwQueryKey(Key, KeyNameInformation, &emptyKeyNameInfo, 8u, keyNameInfoSize) != -2147483643 )
              goto LABEL_22;
            Tag = FxDriverGlobals->Tag;
            v16.m128i_i64[0] = 0LL;
            v16.m128i_i64[1] = 256LL;
            v8 = FxDriverGlobals->FxPoolTrackingOn ? retaddr : 0LL;
            v2 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                      FxDriverGlobals,
                                      &FxDriverGlobals->FxPoolFrameworks,
                                      &v16,
                                      keyNameInfoSize[0],
                                      Tag,
                                      v8);
            if ( !v2 )
              goto LABEL_22;
            if ( ZwQueryKey(Key, KeyNameInformation, v2, keyNameInfoSize[0], keyNameInfoSize) < 0 )
              goto LABEL_22;
            v9 = LODWORD(v2->Link.Flink) + 2;
            if ( v9 < LODWORD(v2->Link.Flink) )
              goto LABEL_22;
            v10 = FxDriverGlobals->Tag;
            v16.m128i_i64[0] = 0LL;
            v16.m128i_i64[1] = 256LL;
            v11 = FxDriverGlobals->FxPoolTrackingOn ? retaddr : 0LL;
            v12 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v16, v9, v10, v11);
            v3 = (wchar_t *)v12;
            if ( v12 )
            {
              memmove(v12, (char *)&v2->Link.Flink + 4, LODWORD(v2->Link.Flink));
              RtlInitUnicodeString(&keyPath, v3);
              WPP_IFR_SF_Z(FxDriverGlobals, 2u, 2u, 0xCu, WPP_FxRegKey_cpp_Traceguids, &keyPath);
            }
            else
            {
LABEL_22:
              WPP_IFR_SF_q(FxDriverGlobals, 2u, 2u, 0xDu, WPP_FxRegKey_cpp_Traceguids, Key);
            }
            if ( DebugExtension->StateSeparationDetection == FxStateSeparationDetectionDebugBreak )
              FxVerifierDbgBreakPoint(FxDriverGlobals);
            if ( v2 )
              FxPoolFree(v2);
            if ( v3 )
              FxPoolFree((FX_POOL_TRACKER *)v3);
          }
        }
      }
    }
  }
}
