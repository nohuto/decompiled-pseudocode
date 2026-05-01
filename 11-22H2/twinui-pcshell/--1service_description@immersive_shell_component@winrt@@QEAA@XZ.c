/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x180110A20
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$26 @ 0x1802B4F4D (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802B4F4D.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$12 @ 0x1802B50FE (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_1802B50FE.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$14 @ 0x1802B5110 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_1802B5110.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
}
