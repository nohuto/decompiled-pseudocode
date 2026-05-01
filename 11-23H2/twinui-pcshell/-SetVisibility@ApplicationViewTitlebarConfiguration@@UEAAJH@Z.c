/*
 * XREFs of ?SetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJH@Z @ 0x1800262A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int a2)
{
  *((_BYTE *)this + 48) = 1;
  *((_BYTE *)this + 49) = a2 != 0;
  return 0LL;
}
