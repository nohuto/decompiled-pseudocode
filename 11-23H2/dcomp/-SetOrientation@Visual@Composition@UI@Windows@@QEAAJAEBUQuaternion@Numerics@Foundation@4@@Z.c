/*
 * XREFs of ?SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18010BCD8
 * Callers:
 *     ?put_Orientation@Api@Visual@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@5@@Z @ 0x18010D5D0 (-put_Orientation@Api@Visual@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180152DFC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Comp.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetOrientation(
        Windows::UI::Composition::Visual *this,
        const struct Windows::Foundation::Numerics::Quaternion *a2)
{
  CSparseStorage *v2; // rsi
  Windows::UI::Composition::CompositionObject *Reference; // rcx
  Windows::UI::Composition::Visual *v5; // r9
  __int64 v6; // rax
  int updated; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  Reference = (Windows::UI::Composition::CompositionObject *)CSparseStorage::GetReference(
                                                               (Windows::UI::Composition::Visual *)((char *)this + 112),
                                                               8);
  if ( !Reference )
  {
    v6 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform3D::sc_defaultOrientation;
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform3D::sc_defaultOrientation )
      v6 = *((_QWORD *)a2 + 1) - *(&Windows::UI::Composition::ComponentTransform3D::sc_defaultOrientation + 1);
    if ( !v6 )
      return 0LL;
    updated = Windows::UI::Composition::Visual::EnsureComponentTransform(v5);
    if ( updated < 0 )
    {
      v8 = 784LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    Reference = (Windows::UI::Composition::CompositionObject *)CSparseStorage::GetReference(v2, 8);
  }
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Quaternion>,Windows::UI::Composition::PropertyUpdateInfo>(Reference);
  if ( updated < 0 )
  {
    v8 = 788LL;
    goto LABEL_7;
  }
  return 0LL;
}
