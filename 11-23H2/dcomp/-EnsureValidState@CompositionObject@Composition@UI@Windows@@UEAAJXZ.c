/*
 * XREFs of ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ @ 0x180073030
 * Callers:
 *     ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60 (-EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@.c)
 *     ?EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800075F0 (-EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180072FD0 (-EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1CC0 (-EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::EnsureValidState(
        Windows::UI::Composition::CompositionObject *this)
{
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
    return 0LL;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  return 2147483667LL;
}
