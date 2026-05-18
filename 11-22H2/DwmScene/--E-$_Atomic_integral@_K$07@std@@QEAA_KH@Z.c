/*
 * XREFs of ??E?$_Atomic_integral@_K$07@std@@QEAA_KH@Z @ 0x180021E4C
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 */

signed __int64 __fastcall std::_Atomic_integral<unsigned __int64,8>::operator++(__int64 a1)
{
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(a1),
           1uLL);
}
