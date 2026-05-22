/*
 * XREFs of ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18011831C
 * Callers:
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x18003424C (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180034F38 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x18004B3D8 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x180119E84 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18011A190 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18011ABBC (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x18011AD10 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180090D78 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag0::Return_GetLastError(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(0LL, 0LL, 0LL, a4, v5, retaddr);
}
