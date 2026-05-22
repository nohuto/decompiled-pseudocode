/*
 * XREFs of ??_ECursorManager@@MEAAPEAXI@Z @ 0x180156010
 * Callers:
 *     ??_ECursorManager@@OBA@EAAPEAXI@Z @ 0x1800512A0 (--_ECursorManager@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CursorManager@@MEAA@XZ @ 0x180155EC4 (--1CursorManager@@MEAA@XZ.c)
 */

CursorManager *__fastcall CursorManager::`vector deleting destructor'(CursorManager *this, char a2)
{
  CursorManager::~CursorManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
