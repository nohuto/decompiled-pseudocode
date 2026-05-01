/*
 * XREFs of ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1805E1650
 * Callers:
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$9 @ 0x1805E24D8 (_JointResize--CalculateSecondaryViews_--_1_--dtor$9.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$16 @ 0x1805E2514 (_JointResize--CalculateSecondaryViews_--_1_--dtor$16.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall JointResize::SecondaryViewInfo::~SecondaryViewInfo(JointResize::SecondaryViewInfo *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (JointResize::SecondaryViewInfo *)((char *)this + 48);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
