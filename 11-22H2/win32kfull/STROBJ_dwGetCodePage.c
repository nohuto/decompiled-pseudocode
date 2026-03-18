/*
 * XREFs of STROBJ_dwGetCodePage @ 0x1C013F260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return *((_DWORD *)&pstro[2].rclBkGround + 4);
}
