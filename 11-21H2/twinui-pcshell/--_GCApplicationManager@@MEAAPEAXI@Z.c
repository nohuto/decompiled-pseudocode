/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1802E151C
 * Callers:
 *     ??_ECApplicationManager@@OFI@EAAPEAXI@Z @ 0x1801EB290 (--_ECApplicationManager@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802DFC14 (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
