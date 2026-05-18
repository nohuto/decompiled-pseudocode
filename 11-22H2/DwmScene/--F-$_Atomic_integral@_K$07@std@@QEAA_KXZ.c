/*
 * XREFs of ??F?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180021E70
 * Callers:
 *     ??1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ @ 0x180021D44 (--1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 */

signed __int64 std::_Atomic_integral<unsigned __int64,8>::operator--()
{
  return _InterlockedDecrement64((volatile signed __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>((__int64)&unk_1801D33C8));
}
