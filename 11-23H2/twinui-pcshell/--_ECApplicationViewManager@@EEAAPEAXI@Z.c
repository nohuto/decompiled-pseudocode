/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x1803CBC2C
 * Callers:
 *     ??_ECApplicationViewManager@@GEI@EAAPEAXI@Z @ 0x1802920B0 (--_ECApplicationViewManager@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1803CB8CC (--1CApplicationViewManager@@EEAA@XZ.c)
 */

CApplicationViewManager *__fastcall CApplicationViewManager::`vector deleting destructor'(
        CApplicationViewManager *this,
        char a2)
{
  CApplicationViewManager::~CApplicationViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
