/*
 * XREFs of ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x180011720
 * Callers:
 *     <none>
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x1800117AC (-CanChangeForeground@@YAJXZ.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800117D4 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CClassicWindow::GetWindowForActivation(CClassicWindow *this, HWND *a2, int *a3)
{
  int v3; // ebx
  HWND v7; // rdx
  int v8; // esi
  HWND v9; // rcx
  int pvAttribute; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v8 = CanChangeForeground();
  if ( v8 >= 0 )
  {
    v9 = (HWND)*((_QWORD *)this + 2);
    *a2 = v9;
    if ( CApplicationManagerUtility::IsValidAndVisibleWindow(v9, v7) )
    {
      *a3 = 1;
      if ( DwmGetWindowAttribute(*a2, 0xEu, &pvAttribute, 4u) >= 0 )
      {
        LOBYTE(v3) = (pvAttribute & 0xFFFFFFFD) == 0;
        *a3 = v3;
      }
    }
  }
  return (unsigned int)v8;
}
