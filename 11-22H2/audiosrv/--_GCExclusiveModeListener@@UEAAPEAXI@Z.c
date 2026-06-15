/*
 * XREFs of ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x180133A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x180139EBC (--1CExclusiveModeListener@@UEAA@XZ.c)
 */

CExclusiveModeListener *__fastcall CExclusiveModeListener::`scalar deleting destructor'(
        CExclusiveModeListener *this,
        char a2)
{
  CExclusiveModeListener::~CExclusiveModeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
