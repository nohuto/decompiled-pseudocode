/*
 * XREFs of ??$min@M@std@@YAAEBMAEBM0@Z @ 0x18052F7A8
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18022C660 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022C660.c)
 * Callees:
 *     <none>
 */

float *__fastcall std::min<float>(float *a1, float *a2)
{
  if ( *a1 > *a2 )
    return a2;
  return a1;
}
