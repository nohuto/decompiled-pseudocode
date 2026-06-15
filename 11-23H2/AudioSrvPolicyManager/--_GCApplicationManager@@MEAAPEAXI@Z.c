/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001C200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C558 (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
