/*
 * XREFs of ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A872C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD8E4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7ECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3,
        const char *a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v11; // rax
  const char *v12; // r9
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(this + 3548) && *((_BYTE *)a3 + 240) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
    *((_QWORD *)&v13 + 1) = 17LL;
    *(_QWORD *)&v13 = L"AllowDownleveling";
    v5 = this & -(__int64)(this != 24);
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)MPCConstantManager::s_instance, v5, &v13) )
    {
      if ( *((_DWORD *)a3 + 16) != 7 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x67,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
          v7);
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v6, (__int64)a3, 3);
      Instance = MPCGestureHandlerManager::GetInstance(v9, v8);
      v11 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v15,
              v5);
      MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v11, v12);
    }
  }
}
