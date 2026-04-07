/*
 * XREFs of ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800D4A28
 * Callers:
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E00 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E90 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  __int64 v2; // rcx
  HWND result; // rax

  v2 = *((_QWORD *)a2 + 82);
  result = (HWND)*((_QWORD *)a2 + 5);
  if ( v2 )
    return *(HWND *)(v2 + 40);
  return result;
}
