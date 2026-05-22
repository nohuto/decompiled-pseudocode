/*
 * XREFs of ?SetScale@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18007DE08
 * Callers:
 *     ?put_Scale@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18007DDA0 (-put_Scale@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18007DED0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetScale(
        Windows::UI::Composition::Visual *this,
        const struct Windows::Foundation::Numerics::Vector3 *a2)
{
  CSparseStorage *v2; // rsi
  char *Reference; // rcx
  Windows::UI::Composition::Visual *v5; // r9
  int updated; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Vector3 *v11; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Vector3 *v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( !Reference )
  {
    v8 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform3D::sc_defaultScale;
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform3D::sc_defaultScale )
      v8 = *((unsigned int *)a2 + 2) - (unsigned __int64)(unsigned int)dword_18021AF08;
    if ( !v8 )
      return 0LL;
    updated = Windows::UI::Composition::Visual::EnsureComponentTransform(v5);
    if ( updated < 0 )
    {
      v9 = 1000LL;
      goto LABEL_11;
    }
    Reference = (char *)CSparseStorage::GetReference(v2, 8);
  }
  v11 = a2;
  *(_QWORD *)v10 = Reference + 240;
  v12 = a2;
  v14 = &Windows::UI::Composition::ComponentTransform3D::sc_Scale;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector3>,Windows::UI::Composition::PropertyUpdateInfo>(
              Reference,
              v10,
              &v14);
  if ( updated >= 0 )
    return 0LL;
  v9 = 1004LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
