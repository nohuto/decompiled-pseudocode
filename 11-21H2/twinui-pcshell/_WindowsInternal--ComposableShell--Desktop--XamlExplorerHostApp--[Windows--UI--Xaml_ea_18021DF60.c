/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$5 @ 0x18021DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::_Windows::UI::Xaml::IApplicationOverrides_::OnLaunched_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 240), 0LL);
}
