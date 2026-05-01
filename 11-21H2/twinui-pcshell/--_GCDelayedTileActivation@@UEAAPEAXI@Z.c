/*
 * XREFs of ??_GCDelayedTileActivation@@UEAAPEAXI@Z @ 0x1804E7360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CDelayedTileActivation@@UEAA@XZ @ 0x1804E7094 (--1CDelayedTileActivation@@UEAA@XZ.c)
 */

CDelayedTileActivation *__fastcall CDelayedTileActivation::`scalar deleting destructor'(
        CDelayedTileActivation *this,
        char a2)
{
  CDelayedTileActivation::~CDelayedTileActivation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
