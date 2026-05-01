/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800743DC
 * Callers:
 *     _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0 (_lambda_8e74cd273561b15a8d8b985ad84a422d_--operator().c)
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged @ 0x18003BAA0 (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--OnIdleStateChanged.c)
 *     _lambda_e93b07e05eb73953e8a67c4fda015070_::operator() @ 0x180136F40 (_lambda_e93b07e05eb73953e8a67c4fda015070_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___::Invoke @ 0x1805F1410 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1805F1410.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180075AA4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 */

_QWORD *__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(_QWORD *a1, Microsoft::WRL::WeakRef *a2)
{
  struct IInspectable **AddressOf; // rax

  *a1 = 0LL;
  AddressOf = (struct IInspectable **)Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(a1);
  Microsoft::WRL::WeakRef::InternalResolve(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, AddressOf);
  return a1;
}
