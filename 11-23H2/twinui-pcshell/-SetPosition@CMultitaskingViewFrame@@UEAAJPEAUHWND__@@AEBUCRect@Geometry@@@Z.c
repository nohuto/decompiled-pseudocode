/*
 * XREFs of ?SetPosition@CMultitaskingViewFrame@@UEAAJPEAUHWND__@@AEBUCRect@Geometry@@@Z @ 0x18056ED80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewFrame::SetPosition(HWND *this, HWND a2, const struct Geometry::CRect *a3)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( SetWindowPos(
         this[6],
         a2,
         *(_DWORD *)a3,
         *((_DWORD *)a3 + 1),
         *((_DWORD *)a3 + 2) - *(_DWORD *)a3,
         *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1),
         a2 != 0LL ? 16 : 20) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x225,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
             v3);
  }
}
