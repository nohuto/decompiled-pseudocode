/*
 * XREFs of ??_GCDelayedTileActivation@@UEAAPEAXI@Z @ 0x18059F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CDelayedTileActivation@@UEAA@XZ @ 0x18059F52C (--1CDelayedTileActivation@@UEAA@XZ.c)
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
