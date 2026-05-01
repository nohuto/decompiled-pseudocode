/*
 * XREFs of ?GetScreenLocation@ContextMenuArgs@@QEBA?AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1805935D4
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180586EA4 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x18057FC54 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 */

_DWORD *__fastcall ContextMenuArgs::GetScreenLocation(__int16 *a1, _DWORD *a2, __int64 a3)
{
  int v4; // edx
  _DWORD *ScreenLocation; // rcx
  int v6; // r8d
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)a1 == -1 )
  {
    ScreenLocation = (_DWORD *)ElementHelpers::GetScreenLocation((__int64)v8, a3);
    v6 = ScreenLocation[1] + (ScreenLocation[3] - ScreenLocation[1]) / 2;
    *a2 = *ScreenLocation + (ScreenLocation[2] - *ScreenLocation) / 2;
    a2[1] = v6;
  }
  else
  {
    v4 = a1[1];
    *a2 = *a1;
    a2[1] = v4;
  }
  return a2;
}
