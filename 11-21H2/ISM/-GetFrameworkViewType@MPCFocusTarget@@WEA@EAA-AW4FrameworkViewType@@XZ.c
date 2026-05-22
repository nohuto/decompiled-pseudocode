/*
 * XREFs of ?GetFrameworkViewType@MPCFocusTarget@@WEA@EAA?AW4FrameworkViewType@@XZ @ 0x18004FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetFrameworkViewType(__int64 a1)
{
  return MPCTarget::GetFrameworkViewType(a1 - 64);
}
