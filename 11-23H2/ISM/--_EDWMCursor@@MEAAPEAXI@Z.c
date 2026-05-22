/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x1801EE588
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x18006B5F0 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801EE46C (--1DWMCursor@@MEAA@XZ.c)
 */

DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  DWMCursor::~DWMCursor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
