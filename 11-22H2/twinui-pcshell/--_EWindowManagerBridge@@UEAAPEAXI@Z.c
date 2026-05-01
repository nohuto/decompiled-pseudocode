/*
 * XREFs of ??_EWindowManagerBridge@@UEAAPEAXI@Z @ 0x1804BD710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowManagerBridge@@UEAA@XZ @ 0x1804BCE94 (--1WindowManagerBridge@@UEAA@XZ.c)
 */

WindowManagerBridge *__fastcall WindowManagerBridge::`vector deleting destructor'(WindowManagerBridge *this, char a2)
{
  WindowManagerBridge::~WindowManagerBridge(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
