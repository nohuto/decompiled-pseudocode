/*
 * XREFs of ?AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180160CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     Windows::UI::Composition::AreEffectsSupportedWorker @ 0x180067050 (Windows--UI--Composition--AreEffectsSupportedWorker.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilities::Api::AreEffectsSupported(
        Windows::UI::Composition::CompositionCapabilities::Api *this,
        char *a2)
{
  int FrameStatistics; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9[6]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  FrameStatistics = NtDCompositionGetFrameStatistics(v10, v9);
  v4 = DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameStatistics);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      156LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncapabilities.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
  *a2 = Windows::UI::Composition::AreEffectsSupportedWorker((__int64)v9, v5, v6, v7);
  return 0LL;
}
