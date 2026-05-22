/*
 * XREFs of ?AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180066FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     Windows::UI::Composition::AreEffectsSupportedWorker @ 0x180067050 (Windows--UI--Composition--AreEffectsSupportedWorker.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilities::Api::AreEffectsFast(
        Windows::UI::Composition::CompositionCapabilities::Api *this,
        bool *a2)
{
  int FrameStatistics; // eax
  int v4; // eax
  bool v5; // bl
  int v7[6]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  FrameStatistics = NtDCompositionGetFrameStatistics(v8, v7);
  v4 = DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameStatistics);
  v5 = 0;
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncapabilities.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  if ( (unsigned __int8)Windows::UI::Composition::AreEffectsSupportedWorker(v7) )
    v5 = v7[2] == 0;
  *a2 = v5;
  return 0LL;
}
