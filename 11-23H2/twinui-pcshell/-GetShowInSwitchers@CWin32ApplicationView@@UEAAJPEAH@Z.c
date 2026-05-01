/*
 * XREFs of ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180154E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetShowInSwitchers(CWin32ApplicationView *this, int *a2)
{
  int v4; // ebx
  HWND Window; // rax
  HWND v6; // rdi
  HWND v7; // rsi
  HWND LastActivePopup; // rax
  HWND v9; // rsi
  __int64 result; // rax
  HWND i; // rcx
  HWND v12; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 72LL))(*((_QWORD *)this + 27)) )
  {
    Window = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
    v6 = Window;
    do
    {
      v7 = Window;
      Window = GetWindow(Window, 4u);
    }
    while ( Window );
    LastActivePopup = GetLastActivePopup(v7);
    v9 = LastActivePopup;
    if ( LastActivePopup )
    {
      if ( LastActivePopup != v6 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v9) )
      {
        for ( i = v9; ; i = v12 )
        {
          v12 = GetWindow(i, 4u);
          if ( !v12 )
            break;
          if ( v12 == v6 )
            goto LABEL_14;
        }
        if ( !v6 )
        {
LABEL_14:
          v6 = v9;
          goto LABEL_7;
        }
      }
      if ( v6 )
      {
LABEL_7:
        GhostWindowFromHungWindow(v6);
        v4 = 1;
      }
    }
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
