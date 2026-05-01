/*
 * XREFs of ?SetHideOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_HIDE_OPTIONS@@@Z @ 0x1801BFFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetHideOptions(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 88) = a2;
  return 0LL;
}
