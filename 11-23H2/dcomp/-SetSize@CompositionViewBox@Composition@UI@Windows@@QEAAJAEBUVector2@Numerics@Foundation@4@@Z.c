/*
 * XREFs of ?SetSize@CompositionViewBox@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x180179860
 * Callers:
 *     ?put_Size@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180179DB0 (-put_Size@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionViewBox::SetSize(
        Windows::UI::Composition::CompositionViewBox *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  int updated; // ebx
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v7; // [rsp+58h] [rbp+10h] BYREF

  if ( *(float *)a2 < 0.0 || *((float *)a2 + 1) < 0.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(14, (__int64)L"Size");
    v3 = 239LL;
    updated = -2147024809;
  }
  else
  {
    v5[1] = a2;
    v5[0] = (char *)this + 160;
    v5[2] = a2;
    v7 = (WCHAR **)&Windows::UI::Composition::CompositionViewBox::sc_Size;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)this,
                (__int64)v5,
                &v7);
    if ( updated >= 0 )
      return 0LL;
    v3 = 242LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionviewbox.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
