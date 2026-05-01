/*
 * XREFs of ??_EWin32AppStateManager@@UEAAPEAXI@Z @ 0x180160C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1Win32AppStateManager@@UEAA@XZ @ 0x180160C9C (--1Win32AppStateManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Win32AppStateManager *__fastcall Win32AppStateManager::`vector deleting destructor'(
        Win32AppStateManager *this,
        char a2)
{
  Win32AppStateManager::~Win32AppStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
