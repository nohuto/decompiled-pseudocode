/*
 * XREFs of ?GetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_BUTTONS@@0@Z @ 0x180172640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetVisibleButtons(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_BUTTONS *a2,
        enum TITLE_BAR_BUTTONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 15);
  *(_DWORD *)a3 = *((_DWORD *)this + 16);
  return *((_DWORD *)this + 15) == 0 ? 0x80070490 : 0;
}
