/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803E5F4C
 * Callers:
 *     _wil::make_bstr_::_1_::dtor$0 @ 0x1802C567C (_wil--make_bstr_--_1_--dtor$0.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x1803E9958 (--1TaskbarLayoutParser@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x1803EB068 (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern_::_1_::dtor$3 @ 0x18053AF12 (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForTextPattern_--_1_--dtor$3.c)
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectFromFocusedElementForKnownControlTypes_::_1_::dtor$2 @ 0x18053B2E5 (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectFromFocusedElementForKnownCon_ea_18053B2E5.c)
 *     _KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox_::_1_::dtor$2 @ 0x18053B4F6 (_KeyboardHosting--UIAutomationHelpers--PreferUseUIAToGetBoundingBox_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
