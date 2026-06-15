/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834
 * Callers:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180005D8C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000748C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x180007BFC (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18000C350 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x18001B1D8 (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001B350 (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x18002CBF8 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180030428 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180004100 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr);
}
