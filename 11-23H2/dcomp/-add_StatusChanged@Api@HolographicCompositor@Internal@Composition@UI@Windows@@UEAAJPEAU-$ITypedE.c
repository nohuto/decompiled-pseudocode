/*
 * XREFs of ?add_StatusChanged@Api@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@6@PEAUEventRegistrationToken@@@Z @ 0x180118640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?add_StatusChanged@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180118684 (-add_StatusChanged@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAU-$ITypedEvent.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositor::Api::add_StatusChanged(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::UI::Composition::Internal::HolographicCompositor::add_StatusChanged(a1 - 136);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
