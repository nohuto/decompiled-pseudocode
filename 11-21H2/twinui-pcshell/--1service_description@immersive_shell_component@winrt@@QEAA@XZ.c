/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x180137A40
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$29 @ 0x1802173D2 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802173D2.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(v1);
}
