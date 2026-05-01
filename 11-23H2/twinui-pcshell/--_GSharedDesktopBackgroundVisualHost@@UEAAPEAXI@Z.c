/*
 * XREFs of ??_GSharedDesktopBackgroundVisualHost@@UEAAPEAXI@Z @ 0x1806E1EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1806E1B6C (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 */

SharedDesktopBackgroundVisualHost *__fastcall SharedDesktopBackgroundVisualHost::`scalar deleting destructor'(
        SharedDesktopBackgroundVisualHost *this,
        char a2)
{
  SharedDesktopBackgroundVisualHost::~SharedDesktopBackgroundVisualHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
