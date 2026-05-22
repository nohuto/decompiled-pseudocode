/*
 * XREFs of ?GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ @ 0x1800F1E74
 * Callers:
 *     ?DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x1800FF9B0 (-DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@.c)
 *     ?CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x18010EE30 (-CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCo.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct IDwmChannel *__fastcall DirectComposition::CDevice::GetDwmChannel(
        DirectComposition::CDevice *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct IDwmChannel *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct IDwmChannel *)*((_QWORD *)this + 11);
  if ( !result )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      6864LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      a4);
  return result;
}
