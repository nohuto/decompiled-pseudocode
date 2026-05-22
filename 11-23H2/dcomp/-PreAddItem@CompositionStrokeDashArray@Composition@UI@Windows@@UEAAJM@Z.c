/*
 * XREFs of ?PreAddItem@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAJM@Z @ 0x1801A00B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionStrokeDashArray::PreAddItem(
        Windows::UI::Composition::CompositionStrokeDashArray *this,
        float a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= 0.0 )
    return 0LL;
  Windows::UI::Composition::OriginateInvalidArgument(14, (__int64)L"value");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionstrokedasharray.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
