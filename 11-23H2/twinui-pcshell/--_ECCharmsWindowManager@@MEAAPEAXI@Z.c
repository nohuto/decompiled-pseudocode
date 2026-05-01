/*
 * XREFs of ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x1801B6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCharmsWindowManager@@MEAA@XZ @ 0x1801B6ADC (--1CCharmsWindowManager@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CCharmsWindowManager *__fastcall CCharmsWindowManager::`vector deleting destructor'(
        CCharmsWindowManager *this,
        char a2)
{
  CCharmsWindowManager::~CCharmsWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
