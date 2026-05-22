/*
 * XREFs of ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BC980
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5AC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  const char *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct MPCGestureHandlerManager *Instance; // rax
  unsigned __int64 v9; // rdx
  MPCGestureHandlerManager *v10; // rbx
  unsigned __int64 *v11; // rax
  const char *v12; // r9
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a2 + 240) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v4);
    *((_QWORD *)&v13 + 1) = 17LL;
    *(_QWORD *)&v13 = L"AllowDownleveling";
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            this & -(__int64)(this != 24),
                            &v13) )
    {
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, (__int64)a2, 4);
      Instance = MPCGestureHandlerManager::GetInstance(v7, v6);
      v9 = this & -(__int64)(this != 24);
      v10 = Instance;
      v11 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v15,
              v9);
      MPCGestureHandlerManager::DownLevelTo2D(v10, (__int64)a2, v11, v12);
    }
  }
}
