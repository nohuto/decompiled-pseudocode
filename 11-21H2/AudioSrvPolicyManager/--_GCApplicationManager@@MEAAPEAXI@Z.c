/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1800091D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18001ECD8 (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
