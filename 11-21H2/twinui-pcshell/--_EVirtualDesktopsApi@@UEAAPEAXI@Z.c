/*
 * XREFs of ??_EVirtualDesktopsApi@@UEAAPEAXI@Z @ 0x180179AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopsApi@@UEAA@XZ @ 0x180179B1C (--1VirtualDesktopsApi@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopsApi *__fastcall VirtualDesktopsApi::`vector deleting destructor'(VirtualDesktopsApi *this, char a2)
{
  VirtualDesktopsApi::~VirtualDesktopsApi(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
