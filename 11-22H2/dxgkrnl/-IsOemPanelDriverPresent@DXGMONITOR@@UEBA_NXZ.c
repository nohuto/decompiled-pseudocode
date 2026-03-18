/*
 * XREFs of ?IsOemPanelDriverPresent@DXGMONITOR@@UEBA_NXZ @ 0x1C01EEF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsOemPanelDriverPresent(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 0x20) != 0;
}
