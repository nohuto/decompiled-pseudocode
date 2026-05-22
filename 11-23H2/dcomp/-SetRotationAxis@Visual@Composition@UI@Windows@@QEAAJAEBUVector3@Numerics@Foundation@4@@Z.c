/*
 * XREFs of ?SetRotationAxis@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18010C1A8
 * Callers:
 *     ?put_RotationAxis@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18010D840 (-put_RotationAxis@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18007DED0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetRotationAxis(
        Windows::UI::Composition::Visual *this,
        const struct Windows::Foundation::Numerics::Vector3 *a2)
{
  CSparseStorage *v2; // rsi
  void *Reference; // rcx
  Windows::UI::Composition::Visual *v5; // r9
  unsigned __int64 v6; // r8
  int updated; // ebx
  __int64 v8; // rdx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  Reference = CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( !Reference )
  {
    v6 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform3D::sc_defaultRotationAxis;
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform3D::sc_defaultRotationAxis )
      v6 = *((unsigned int *)a2 + 2) - (unsigned __int64)(unsigned int)dword_18021AEF8;
    if ( !v6 )
      return 0LL;
    updated = Windows::UI::Composition::Visual::EnsureComponentTransform(v5);
    if ( updated < 0 )
    {
      v8 = 947LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    Reference = CSparseStorage::GetReference(v2, 8);
  }
  v10[1] = (__int64)a2;
  v10[0] = (__int64)Reference + 252;
  v10[2] = (__int64)a2;
  v12 = (PVOID *)&Windows::UI::Composition::ComponentTransform3D::sc_RotationAxis;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector3>,Windows::UI::Composition::PropertyUpdateInfo>(
              (__int64)Reference,
              v10,
              &v12);
  if ( updated < 0 )
  {
    v8 = 951LL;
    goto LABEL_7;
  }
  return 0LL;
}
