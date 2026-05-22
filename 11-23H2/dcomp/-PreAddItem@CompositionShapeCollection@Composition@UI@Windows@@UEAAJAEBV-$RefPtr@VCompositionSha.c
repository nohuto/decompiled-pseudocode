/*
 * XREFs of ?PreAddItem@CompositionShapeCollection@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180082E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShapeCollection::PreAddItem(__int64 a1, _QWORD *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 )
    return 0LL;
  Windows::UI::Composition::OriginateInvalidArgument(18LL, L"value");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshapecollection.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
