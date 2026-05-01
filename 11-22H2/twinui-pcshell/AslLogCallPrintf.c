/*
 * XREFs of AslLogCallPrintf @ 0x180738B40
 * Callers:
 *     AslRegistryOpenSubKey @ 0x18008DA24 (AslRegistryOpenSubKey.c)
 *     AslRegistryGetStringExpand @ 0x1800EDB74 (AslRegistryGetStringExpand.c)
 *     AslEnvGetProcessWowInfo @ 0x1800EDCC4 (AslEnvGetProcessWowInfo.c)
 *     AslEnvExpandStrings2 @ 0x1800EDD8C (AslEnvExpandStrings2.c)
 *     AslpEnvResolveVars @ 0x1800EDEB0 (AslpEnvResolveVars.c)
 *     AslEnvBuildBasic @ 0x1800EEA40 (AslEnvBuildBasic.c)
 *     AslRegistryGetString @ 0x1800EF1D0 (AslRegistryGetString.c)
 *     AslStringDuplicate @ 0x1800EF328 (AslStringDuplicate.c)
 *     AslRegistryOpenKey @ 0x1800EF534 (AslRegistryOpenKey.c)
 *     AslEnvExpandStrings @ 0x1800EF658 (AslEnvExpandStrings.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *AslLogCallPrintf(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, ...))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = g_AslLogPfnVPrintf;
  if ( g_AslLogPfnVPrintf )
    return (__int64 (__fastcall *)(_QWORD))g_AslLogPfnVPrintf(a1);
  return result;
}
