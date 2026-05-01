/*
 * XREFs of ??_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z @ 0x180556FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualPinnedAppsHandler@@UEAA@XZ @ 0x180556F40 (--1VirtualPinnedAppsHandler@@UEAA@XZ.c)
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
