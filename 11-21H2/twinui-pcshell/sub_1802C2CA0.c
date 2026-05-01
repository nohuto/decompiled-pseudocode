/*
 * XREFs of sub_1802C2CA0 @ 0x1802C2CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1802C2CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam)
{
  DefWindowProcW(hWnd, Msg, wParam, lParam);
  JUMPOUT(0x18013C244LL);
}
