/*
 * XREFs of ?ItemExistsAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEBAJI@Z @ 0x180171230
 * Callers:
 *     ?GetAt@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAM@Z @ 0x180170970 (-GetAt@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::ItemExistsAt(__int64 a1, unsigned int a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 < (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 2) )
    return 0LL;
  Windows::UI::Composition::OriginateInvalidArgument(17, (__int64)L"index");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
