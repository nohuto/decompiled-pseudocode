/*
 * XREFs of ?SetAnchorPoint@Visual@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18010B7F8
 * Callers:
 *     ?put_AnchorPoint@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x1800B5E70 (-put_AnchorPoint@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetAnchorPoint(
        Windows::UI::Composition::Visual *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  CSparseStorage *v2; // rsi
  __int64 *Reference; // rcx
  Windows::UI::Composition::Visual *v5; // r9
  int updated; // ebx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  Reference = (__int64 *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( !Reference )
  {
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform3D::sc_defaultAnchorPoint )
      return 0LL;
    updated = Windows::UI::Composition::Visual::EnsureComponentTransform(v5);
    if ( updated < 0 )
    {
      v7 = 432LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    Reference = (__int64 *)CSparseStorage::GetReference(v2, 8);
  }
  v9[1] = a2;
  v9[0] = Reference + 33;
  v9[2] = a2;
  v11 = (WCHAR **)&Windows::UI::Composition::ComponentTransform3D::sc_AnchorPoint;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
              Reference,
              (__int64)v9,
              &v11);
  if ( updated < 0 )
  {
    v7 = 436LL;
    goto LABEL_5;
  }
  return 0LL;
}
