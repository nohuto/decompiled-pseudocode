/*
 * XREFs of ??_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z @ 0x180613290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualPinnedAppsHandler@@UEAA@XZ @ 0x180613230 (--1VirtualPinnedAppsHandler@@UEAA@XZ.c)
 */

VirtualPinnedAppsHandler *__fastcall VirtualPinnedAppsHandler::`vector deleting destructor'(
        VirtualPinnedAppsHandler *this,
        char a2)
{
  VirtualPinnedAppsHandler::~VirtualPinnedAppsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
