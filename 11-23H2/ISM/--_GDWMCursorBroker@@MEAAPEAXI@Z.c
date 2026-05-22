/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x1801ECF98
 * Callers:
 *     ??_EDWMCursorBroker@@OBI@EAAPEAXI@Z @ 0x18006B570 (--_EDWMCursorBroker@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801ECD70 (--1DWMCursorBroker@@MEAA@XZ.c)
 */

DWMCursorBroker *__fastcall DWMCursorBroker::`scalar deleting destructor'(DWMCursorBroker *this, char a2)
{
  DWMCursorBroker::~DWMCursorBroker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
