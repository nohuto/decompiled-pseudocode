/*
 * XREFs of ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180534490
 * Callers:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180535CEC (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

_DWORD *__fastcall CDragVisual::_GetScaledPoint(__int64 a1, _DWORD *a2, int a3)
{
  HWND v5; // rcx
  int v7; // r14d
  int v8; // ebp
  int v9; // r8d
  int v10; // edx
  int v11; // esi
  int v12; // eax
  _DWORD *result; // rax
  struct tagRECT Rect; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(HWND *)(a1 + 152);
  Rect = 0LL;
  GetWindowRect(v5, &Rect);
  v7 = *(_DWORD *)(a1 + 200);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = (Rect.right - Rect.left) / 2 + Rect.left;
  v10 = (Rect.bottom - Rect.top) / 2 + Rect.top;
  if ( v9 <= *(_DWORD *)(a1 + 192) )
    v9 = *(_DWORD *)(a1 + 192);
  if ( v9 < v7 )
    v7 = v9;
  if ( v10 <= *(_DWORD *)(a1 + 196) )
    v10 = *(_DWORD *)(a1 + 196);
  if ( v10 < v8 )
    v8 = v10;
  v11 = 0;
  if ( a3 == 1 )
    v12 = 0;
  else
    v12 = MulDiv(*(_DWORD *)(a1 + 336) - v7, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  *a2 = v7 + v12;
  if ( a3 != 1 )
    v11 = MulDiv(*(_DWORD *)(a1 + 340) - v8, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  result = a2;
  a2[1] = v11 + v8;
  return result;
}
