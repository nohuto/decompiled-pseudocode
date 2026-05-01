/*
 * XREFs of ??_EUwpWindowManagerBridge@@UEAAPEAXI@Z @ 0x1804CF450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1UwpWindowManagerBridge@@UEAA@XZ @ 0x1804CF2E0 (--1UwpWindowManagerBridge@@UEAA@XZ.c)
 */

UwpWindowManagerBridge *__fastcall UwpWindowManagerBridge::`vector deleting destructor'(
        UwpWindowManagerBridge *this,
        char a2)
{
  UwpWindowManagerBridge::~UwpWindowManagerBridge(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
